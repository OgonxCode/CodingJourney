#include <iostream>
#include <string>

using namespace std;

class movieDetails {
private:
	string title;
	string director;
	int year;
	int duration;
public:
	string getTitle();
	string getDirector();
	int getYear();
	int getDuration();
	void setTitle(string);
	void setDirector(string);
	void setYear(int);
	void setDuration(int);
};


int main() {

	movieDetails movie1, movie2;
	string tempStr;
	int tempInt;


		cout << "please enter the title of the movie: ";
		getline(cin, tempStr);
		movie1.setTitle(tempStr);
		

		cout << "please enter the director of the movie: ";
		getline(cin, tempStr);
		movie1.setDirector(tempStr);

		cout << "please enter the year the movie was released: ";
		cin >> tempInt;
		movie1.setYear(tempInt);

		cout << "please enter the runtime of the movie: ";
		cin >> tempInt;
		movie1.setDuration(tempInt);
		
		cin.ignore();

	

		cout << "the title is: " << movie1.getTitle() << endl;
		cout << "the director is: " << movie1.getDirector() << endl;
		cout << "the release date is: " << movie1.getYear() << endl;
		cout << "the duration is: " << movie1.getDuration() << endl;

		
}

string movieDetails::getTitle()
{
	return title;
}

string movieDetails::getDirector()
{
	return director;
}

int movieDetails::getYear()
{
	return year;
}

int movieDetails::getDuration()
{
	return duration;
}

void movieDetails::setTitle(string tempStr)
{
	title = tempStr;
}

void movieDetails::setDirector(string tempStr)
{
	director = tempStr;
}

void movieDetails::setYear(int tempInt)
{
	year = tempInt;
}

void movieDetails::setDuration(int tempInt)
{
	duration = tempInt;
}

