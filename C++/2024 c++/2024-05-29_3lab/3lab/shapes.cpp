#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>
#include <iomanip>



using namespace std;

int main() {
    string inputFileName = "in.txt";
    ifstream inFile(inputFileName);
    if (!inFile.is_open()) {

        cerr << "error: Could not open input file" << endl;
        return 1;
    }

    ofstream outFile("out.txt");
    string line;
    while (getline(inFile,line)) {
        stringstream ss(line);
        string shape;
        ss >> shape;

        if (shape == "rectangle") {
            double width, height;
            if (ss >> width >> height) {
                double area = width * height;

                outFile << "Rectangle " << width << " " << height << " " << fixed << setprecision(2) << area << endl;
            }
            else {
                cerr << "error: Invalid input for rectangle" << endl;
                return 1;
            }
        }
        else if (shape == "circle") {
            double radius;
            if (ss >> radius) {

                double area = 3.1415 * radius * radius;
                outFile << "Circle " << radius << " " << fixed << setprecision(2) << area << endl;
            }
            else {
                cerr << "error: invalid input for circle" << endl;
                return 1;

            }
        }
        else if (shape == "triangle") {
            double a, b, c;
            if (ss >> a >> b >> c) {
                double s = (a + b + c) / 2;
                double area = sqrt(s * (s - a) * (s - b) * (s - c));
                outFile << "Triangle " << a << " " << b << " " << c << " " << fixed << setprecision(2) << area << endl;
            }
            else {
                cerr << "error: invalid input for triangle " << endl;
                return 1;
            }
        }
        else {
            cerr << "error: unknown shape '" << shape << "'." << endl;

            return 1;
        }
    }

    inFile.close();
    outFile.close();
    return 0;
}

