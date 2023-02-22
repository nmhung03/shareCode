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

class CruiseShip : public Ship {
    private: 
        int maximum;
    public:
        CruiseShip() {
            maximum = 100;
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

class CargoShip : public Ship {
    private:
        int weight;
    public:
        CargoShip() {
            weight = 100;
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
