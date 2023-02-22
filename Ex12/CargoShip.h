#include "Ship.h"
#include <string>
using namespace std;

class CargoShip : public Ship {
    private:
        int weight;
    public:
        CargoShip() {
            weight = 100;
        }   

        CargoShip(string name, string yearBuilt, int weight) : Ship(name, yearBuilt) {
            this->weight = weight;
        }

        void setWeight(int weight) {
            this->weight = weight;
        }

        int getWeight() {
            return this->weight;
        }

        void display() {
            this->displayShip();
            cout << "Trong tai: " << this->getWeight() << " tan" << endl;
        }
};
