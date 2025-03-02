#include <iostream>
#include <string>
using namespace std;



class Ship {
protected:

    string name;
    string yearBuilt;

public:
   
    Ship(string shipName, string shipYearBuilt) : name(shipName), yearBuilt(shipYearBuilt) {}
    
    string getName() const {
        return name; 
    }
    string getYearBuilt() const { 
        return yearBuilt; 
    }

    void setName(const string& newName) { 
        name = newName; 
    }
    void setYearBuilt(const string& newYearBuilt) { 
        yearBuilt = newYearBuilt; 
    }

    virtual void print() const {
        cout << "Ship Name: " << name << endl;
        cout << "Year Built: " << yearBuilt << endl;
    }


    virtual ~Ship() {}
};

class CruiseShip : public Ship {

private:
    int maxPassengers;

public:

    CruiseShip(string shipName, string shipYearBuilt, int passengers)
        : Ship(shipName, shipYearBuilt), maxPassengers(passengers) {}


    int getMaxPassengers() const { 
        return maxPassengers; 
    }

    void setMaxPassengers(int passengers) {
        maxPassengers = passengers;
    }


    void print() const override {
        cout << "Cruise Ship Name: " << name << endl;
        cout << "Maximum Passengers: " << maxPassengers << endl;
    }

};

class CargoShip : public Ship {

private:
    int cargoCapacity;

    
public:
    CargoShip(string shipName, string shipYearBuilt, int capacity)
        : Ship(shipName, shipYearBuilt), cargoCapacity(capacity) {}

    int getCargoCapacity() const { 
        return cargoCapacity;
    }
    void setCargoCapacity(int capacity) { 
        cargoCapacity = capacity; 
    }

    void print() const override {
        cout << "Cargo Ship Name: " << name << endl;
        cout << "Cargo Capacity (tonnage): " << cargoCapacity << " tons" << endl;
    }

};

int main() {

    Ship basicShip("The Explorer", "1986");
    CruiseShip cruiseShip("Big bertha", "1990", 3500);
    CargoShip cargoShip("S.gigantis Carrier", "2010", 50000);


    Ship* ships[] = {&basicShip,&cruiseShip,&cargoShip};


    for (int i = 0; i < 3; i++) {
        ships[i]->print();  
        cout << endl;
    }

    return 0;
}
