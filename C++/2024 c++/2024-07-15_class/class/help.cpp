#include <iostream>		

using namespace std;

string stringMan(const string& input);

int main() {
	string cstr = "man*9Agame";
	cstr = stringMan(cstr); // Assign the result back to cstr
	
	cout << cstr;
}

string stringMan(const string& input)
{
	string result;
	for (int i = 0; i < input.length(); i++) {

		if (input[i] == '*') {

			int reps = input[i + 1] - '0'; // Convert char to int

			char letter = input[i + 2];

			for (int j = 0; j < reps; j++) { // Use different variable name to avoid conflict
				result += letter;
			}
			i += 2;

		}
		else {
			result += input[i];
		}

	}
	return result;
}
