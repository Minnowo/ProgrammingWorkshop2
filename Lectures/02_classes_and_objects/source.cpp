
// #include "iostream"
#include "vehicle.h"
using namespace std;


int main()
{
    Vehicle myCar = Vehicle("nyah", "uwu", 500);

    myCar.carDetails();
    myCar.drive();

    return 0;
}