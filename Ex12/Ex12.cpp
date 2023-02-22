#include <iostream>
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"
#include <string>

using namespace std;

int main() {
    Ship myShip = Ship();
    myShip.displayShip();
    cout << endl;
    CruiseShip myShip3 = CruiseShip();
    myShip3.display();
    cout << endl;
    CargoShip myShip2 = CargoShip("Hung", "1999", 5000);
    myShip2.display();

    return 0;
}
