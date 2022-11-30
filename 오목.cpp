#include <stdio.h>

int n;
int board[2001][2001];

bool isWin(int x, int y)
{
	int garo = 0, sero = 0, degak1 = 0, degak2 = 0, k;
	
	k = 1; while(board[y][x - k] == board[y][x] && (0 <= x - k)) { ++k; ++garo; }
	k = 1; while(board[y][x + k] == board[y][x] && (x + k < n))  { ++k; ++garo; }
	k = 1; while(board[y - k][x] == board[y][x] && (0 <= y - k)) { ++k; ++sero; }
	k = 1; while(board[y + k][x] == board[y][x] && (y + k < n))  { ++k; ++sero; }
	k = 1; while(board[y - k][x - k] == board[y][x] && (0 <= x - k && 0 <= y - k)) { ++k; ++degak1; }
	k = 1; while(board[y + k][x + k] == board[y][x] && (x + k < n && y + k < n)) { ++k; ++degak1; }
	k = 1; while(board[y - k][x + k] == board[y][x] && (x + k < n && 0 <= y - k)) { ++k; ++degak2; }
	k = 1; while(board[y + k][x - k] == board[y][x] && (0 <= x - k && y + k < n)) { ++k; ++degak2; }
	
	if(4 <= garo || 4 <= sero || 4 <= degak1 || 4 <= degak2) return true;
	return false;
}

bool Win_Check(int x, int y)
{
	if(isWin(x, y))
	{
		printf("*** �浹 �¸� ***");
		return true;
	}
	if(isWin(x, y))
	{
		printf("*** �鵹 �¸� ***");
		return true;
	}
	return false;
}

int main()
{
	FILE *fp = fopen("input.txt", "r");
	fscanf(fp, "%d", &n);

	int BW = 1; //���϶� 1, ���϶� 2
	while(1)
	{
		int x, y;
		fscanf(fp, "%d %d", &x, &y);
		board[y][x] = BW;
		
		if(Win_Check(x, y)) break; //Win_Check()�� True�� ��ȯ�Ѵٸ� �¸��� �����Ǿ����Ƿ� �ݺ��� ���� 
		
		if(BW == 1) BW = 2; //���� ����
		else BW = 1;
	}
	return 0;
}
