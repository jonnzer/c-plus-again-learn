// using the sqrt() function

#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    double area;
    double side;
    cout << "Enter area";
    cin >> area;
    side = sqrt(area);
    cout << "this is side, " << side
         << endl;
    return 0;
}