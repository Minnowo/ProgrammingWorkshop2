
// import the .h file containing the vehicle class
#include "vehicle.h"


using namespace std;

int main()
{
    // make a instance of the class (have not gotten to memory / the 'new' keyword yet)
    Vehicle myCar = Vehicle("nyah", "uwu", 500);

    // call sample functions 
    myCar.carDetails();
    myCar.drive();

    // testing get / set functions 
    myCar.setKMS(177013);
    myCar.setName("not a h ;3c");
    myCar.setType("pp");

    cout << myCar.getKMS() << endl;
    cout << myCar.getName() << endl;
    cout << myCar.getType() << endl;

    return 0;
}