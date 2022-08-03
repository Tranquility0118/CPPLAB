
#include<iostream>

#include<ctime>

#include<cstlib>



using namespace std;



int main()

{

    srand(time(NULL));

    int dice1 = rand() % 6 + 1;

    int dice2 = rand() % 6 + 1;



    cout << "dice1의 주사위 숫자는 : " << dice1 << endl;

    cout << "dice2의 주사위 숫자는 : " << dice2 << endl;

    cout << " 두 주사위의 합은 : " << dice1 + dice2 << endl;



    return 0;

}