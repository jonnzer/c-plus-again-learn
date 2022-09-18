#include <iostream>
int main()
{
    using namespace std;
    cout << "\aAAA \"bbb\" is eeee!\n";
    cout << "enter your code:________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou enter " << code << "...\n";
    cout << "\aCode verifyed";
    return 0;
}