// 指针
#include <iostream>
int main()
{
    using namespace std;
    int paramOne = 6;
    int * p_paramOne; // pointer
    p_paramOne = &paramOne;

    // express value
    // cout << "paramOne value is " << paramOne << endl;
    // cout << "* p_paramOne = " << *p_paramOne << endl;

    // expres address
    // cout << "paramOne address is " << &paramOne << endl;
    // cout << "other way address is " << p_paramOne << endl;

    // use pointer to change value
    //  *p_paramOne = *p_paramOne + 1;
    //  cout << "new value is " << paramOne << endl;

    return 0;
}