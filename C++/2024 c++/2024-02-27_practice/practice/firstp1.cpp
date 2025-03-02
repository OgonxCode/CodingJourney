#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main() {
	string data;
	fstream file("output.txt", ios::out);
	if (file.is_open()) {
		cout << "type data into the text file: ";
		//getline(cin, data);
		data = "__________\n",
			"|        |\n" ,
			"|        |\n" ,
			"|        |\n" ,
			"----------\n" , endl;

		file << data;
		file.close();
	}

	
	file.open("output.txt", ios::in);
		string outData;6
		while (getline(file, outData)) {
			cout << outData << endl;
		}
		file.close();
}