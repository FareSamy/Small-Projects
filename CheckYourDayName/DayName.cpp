#include <iostream>
using namespace std;

short ReadYear()
{
	short y;
	cout << "Please Enter a Year" << endl;
	cin >> y;
	return y;
}
short ReadMonth()
{

	short m;
	cout << "Please Enter a Month" << endl;
	cin >> m;
	return m;
}
short ReadDay()
{

	short d;
	cout << "Please Enter a Day" << endl;
	cin >> d;
	return d;
}
short DayOfWeekOrder(short Day, short Month, short Year)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + (12*a)-2;
	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}
string DayShortName(short Dayofweek)
{
	string arrDay[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
	return arrDay[Dayofweek];
}
int main()
{
	short Year = ReadYear();
	short Month = ReadMonth();
	short Day = ReadDay();

	cout << "\nDate      :" << Day << "/" << Month << "/" << Year ;
	//cout << "\nDay Order :" << DayOfWeekOrder(Day, Month, Year) ;
	cout << "\nDay Name   :" << DayShortName(DayOfWeekOrder(Day, Month, Year));

	system("pause>0");
	return 0;

}
