#include <iostream>
int main ()
{
    using namespace std;
    int paramOne = 6;
    double paramTwo = 4.5;

    cout << "paramOne value is: " << paramOne << endl;
    cout << "paramOne address is: " << &paramOne << endl;
    
    cout << "paramTwo value is: " << paramTwo << endl;
    cout << "paramTwo address is: " << &paramTwo << endl;
    return 0;
}