#include "Ship.h"

using namespace std;

class CruiseShip : public Ship {
    private: 
        int maximum;
    public:
        CruiseShip() {
            maximum = 100;
        }

        CruiseShip(int maximum) {
            this->maximum = maximum;
        }

        void setMaximum(int maximum) {
            this->maximum = maximum;
        }

        int getMaximum() {
            return this->maximum;
        }

        void display() {
            this->displayShip();
            cout << "Maximum passengers: " << this->maximum << endl;
        }
};
