#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest = 
    {
        "John",
        1.88,
        40.23
    };
    inflatable guestTwo =
    {
        "Jane",
        2.3,
        25.65
    };
    inflatable copyGuest;
    copyGuest = guestTwo;
    cout << "copyGuest name :" << copyGuest.name << endl;
    // cout << "guestTow.name " << guestTwo.name << endl;
    // cout << "tow price plus result is " << guest.price + guestTwo.price << "!\n"; 
    return 0;
};