#pragma once
using namespace std;

class Ship {
    private:
        string name;
        string yearBuilt;
    public: 
        Ship() {
            name = "Titanic";
            yearBuilt = "1800";
        }

        Ship(string name, string yearBuilt) {
            this->name = name;
            this->yearBuilt = yearBuilt;
        }

        void setName(string name) {
            this->name = name;
        }

        string getName() {
            return name;
        }

        void setYearBuilt(string yearBuilt) {
            this->yearBuilt = yearBuilt;
        }

        string getYearBuilt() {
            return yearBuilt;
        }

        void displayShip() {
            cout << "Name's ship: " << getName() << endl;
            cout << "Year built: " << getYearBuilt() << endl;
        }
};
