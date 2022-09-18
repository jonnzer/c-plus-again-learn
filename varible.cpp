#include <iostream>

int main()
{
    using namespace std;
    int varible1;
    cout << "please input your age: ";
    cout << endl;
    cin >> varible1; // 输入语句 注意 尖括号也是反着来 跟cout 相反
    cout << "now here is your answer decrease two:";
    varible1 = varible1 - 2;
    cout << "now result is  " << varible1 << endl;
}