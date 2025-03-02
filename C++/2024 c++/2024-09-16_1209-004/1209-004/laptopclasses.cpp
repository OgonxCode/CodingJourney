#include <iostream>
#include <string>

using namespace std;

class laptopDetails {
	private: 
		string manufacturer;
		string CPU;
		double screenSize;
		string color;
		bool isNew;
	public:
		//setters and getters
		string getManufacturer();
		string getCpu();
		double getScreenSize();
		string getColor();
		bool getIsNew();

		void setManufacturer(string changeMan);
		void setCpu(string changeCpu );
		void setScreenSize(double changeSize);
		void setColor(string changeColor);
		void setIsNew(bool changeBool);


		//constructors / functions
		void inputDetails();
		void input();
		void output();

		laptopDetails();
		laptopDetails(string, string, double, string, bool);

};



int main() {
	laptopDetails lapTop1, lapTop2("acer", "intel i7", 15.4, "black", false);
	lapTop1.input();
	lapTop1.output();


};


// functions under here

void laptopDetails::inputDetails()
{

}

void laptopDetails::input()
{
    string manT;
    string cpuT;
    double sizeT;
    string colorT;
    bool isNewT;

    cin.ignore(); 

    cout << "input the manufacturer: ";
    getline(cin, manT);
    setManufacturer(manT);

    cout << "input the CPU: ";
    getline(cin, cpuT);
    setCpu(cpuT);

    cout << "input the screenSize: ";
    cin >> sizeT;
    setScreenSize(sizeT);

    cin.ignore(); 

    cout << "input the color: ";
    getline(cin, colorT);
    setColor(colorT);

    cout << "input 0 or 1 for false or true: ";
    cin >> isNewT;
    setIsNew(isNewT);
}

void laptopDetails::output()
{
	cout << "The manufaacurer is: " << getManufacturer() << endl;
	cout << "The CPU is: " << getCpu() << endl;
	cout << "The ScreenSize is: " << getScreenSize() << endl;
	cout << "The color is: " << getColor() << endl;
	if (getIsNew() == 0) {
		cout << "The laptop is not new";
	}
	else {
		cout << "the laptop is new";
	}
}

//constructors under here

laptopDetails::laptopDetails()
{
	manufacturer = " ";
	CPU = " ";
	screenSize = 0.0;
	color = " ";
	isNew;
}

laptopDetails::laptopDetails(string company, string proccessor, double screenSizeP, string colorP, bool isNewP)
{
	manufacturer = company;
	CPU = proccessor;
	screenSize = screenSizeP;
	color = colorP;
	isNew = isNewP;
}







// getters under here
string laptopDetails::getManufacturer()
{
	return manufacturer;
}

string laptopDetails::getCpu()
{
	return CPU;
}

double laptopDetails::getScreenSize()
{
	return screenSize;
}

string laptopDetails::getColor()
{
	return color;
}

bool laptopDetails::getIsNew()
{
	return isNew;
}




// setters under here

void laptopDetails::setManufacturer(string changeMan)
{
	manufacturer = changeMan;
}

void laptopDetails::setCpu(string changeCpu)
{
	CPU = changeCpu;
}

void laptopDetails::setScreenSize(double changeSize)
{
	screenSize = changeSize;
}

void laptopDetails::setColor(string changeColor)
{
	color = changeColor;
}

void laptopDetails::setIsNew(bool changeStatus)
{
	isNew = changeStatus;
}



