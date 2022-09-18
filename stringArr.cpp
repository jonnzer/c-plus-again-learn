#include <iostream>
int main()
{
    using namespace std;
    cout << "first line input?\n";
    int firstAnswer;
    (cin >> firstAnswer).get();
    cout << "second line input?\n";
    char secondAnser[80];
    cin.getline(secondAnser, 80);
    cout << "ok!now get first: " << firstAnswer << endl;
    cout << "then!get second: " << secondAnser << endl;
    cout << "Done!\n";
    return 0;
}