
#include<iostream>

#include<ctime>

#include<cstlib>



using namespace std;



int main()

{

    srand(time(NULL));

    int dice1 = rand() % 6 + 1;

    int dice2 = rand() % 6 + 1;



    cout << "dice1�� �ֻ��� ���ڴ� : " << dice1 << endl;

    cout << "dice2�� �ֻ��� ���ڴ� : " << dice2 << endl;

    cout << " �� �ֻ����� ���� : " << dice1 + dice2 << endl;



    return 0;

}