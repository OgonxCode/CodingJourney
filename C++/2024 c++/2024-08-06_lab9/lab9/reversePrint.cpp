#include <iostream>
#include <string>

using namespace std;

void reverseDisplay(const string& str);


int main() {
	reverseDisplay("abcd");
	return 0;
}

void reverseDisplay(const string& str)
{
	int size = str.length();
	static int count = size;
	// put last index at first index 
	cout << str[count];
	count = count - 1;
	if(count >= 0 ){
		reverseDisplay(str);
	}
}
