#include <iostream>

const int HRS_PER_DAY = 24;
const int MIN_PER_HR = 60;
const int SEC_PER_MIN = 60;

int main()
{
using namespace std;

long int seconds;
int days, minutes,hours;

cout << "Enter the number of seconds: ";
cin >> seconds;

days = seconds / 60 / 60 / 24;
hours = (seconds / 60 / 60) % 24;
minutes = (seconds / 60) % 60;
seconds = seconds % 60;

cout << days << " Days, " << hours <<" Hours, " << minutes << " Minutes, " << seconds << " Seconds ";
cout<<"\n";

//cin.get();
//cin.get();
return 0;
}
