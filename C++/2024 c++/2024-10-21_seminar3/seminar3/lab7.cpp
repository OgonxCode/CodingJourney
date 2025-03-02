#include <iostream>

class NumDays {
private:
    double hours;



public:



    //construct
    NumDays(double h = 0) : hours(h) {}

    void setHours(double h) {
        hours = h;
    }

    double getHours() const {
        return hours;
    }

    double getDays() const {

        return hours / 8.0;
    }

    //overloaded + 
    friend NumDays operator+(const NumDays& lhs, const NumDays& rhs) {
        return NumDays(lhs.hours + rhs.hours);
    }
    //overloaded -
    friend NumDays operator-(const NumDays&lhs, const NumDays& rhs) {
        return NumDays(lhs.hours- rhs.hours);
    }

    NumDays& operator++() {
        ++hours;

        return *this;
    }
    NumDays operator++(int) {
        NumDays temp = *this;
        ++hours;
        return temp;
    }
    

    //overloaded prefix--
    NumDays& operator--() {
        --hours;
        return *this;
    }

    //overloaded postfix-- 
    NumDays operator--(int) {
        NumDays temp = *this;
        --hours;
        return temp;
    }
};

int main() {
    NumDays day1(12);
    NumDays day2(8);
    NumDays result = day1 + day2;

    std::cout << "sum of hours: " << result.getHours() << ", which is " << result.getDays() << " days.\n";
    result = day1 - day2;
    std::cout << "difference of hours: " << result.getHours() << ", which is " << result.getDays() << " days.\n";
    ++day1;
    std::cout << "after prefix ++, day1 has " << day1.getHours() << " hours (" << day1.getDays() << " days).\n";
    day1++;
    std::cout << "after postfix ++, day1 has " << day1.getHours() << " hours (" << day1.getDays() << " days).\n";
    --day2;
    std::cout << "after prefix --, day2 has " << day2.getHours() << " hours (" << day2.getDays() << " days).\n";
    day2--;
    std::cout << "after postfix --, day2 has " << day2.getHours() << " hours (" << day2.getDays() << " days).\n";


    return 0;
}