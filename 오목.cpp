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
		printf("*** 흑돌 승리 ***");
		return true;
	}
	if(isWin(x, y))
	{
		printf("*** 백돌 승리 ***");
		return true;
	}
	return false;
}

int main()
{
	FILE *fp = fopen("input.txt", "r");
	fscanf(fp, "%d", &n);

	int BW = 1; //흑일때 1, 백일때 2
	while(1)
	{
		int x, y;
		fscanf(fp, "%d %d", &x, &y);
		board[y][x] = BW;
		
		if(Win_Check(x, y)) break; //Win_Check()가 True를 반환한다면 승리가 결정되었으므로 반복문 종료 
		
		if(BW == 1) BW = 2; //차례 변경
		else BW = 1;
	}
	return 0;
}
