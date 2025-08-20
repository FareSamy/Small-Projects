#include <iostream>
using namespace std;


bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}
short DayOfWeekOrder(short Day, short Month, short Year)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + (12 * a) - 2;
	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}
string DayShortName(short Dayofweek)
{
	string arrDay[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
	return arrDay[Dayofweek];
}
short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month>12)
		return  0;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : days[Month - 1];
}
string MonthShortName(short Month)
{
	string arrMonth[] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Agu","Sep","Oct","Nov","Dec" };
	return arrMonth[Month - 1];
}
void PrintCalnedar(short Month, short Year)
{
	int NumberOfDays;
	int current = DayOfWeekOrder(1, Month, Year);
	NumberOfDays = NumberOfDaysInAMonth(Month, Year);

	printf("\n  _______________%s_______________\n\n",
		MonthShortName(Month).c_str());
	printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

	int i;
	for ( i = 0; i < current; i++)
		printf("     ");
	for (int j = 1; j <= NumberOfDays; j++)
	{
		printf("%5d",j);
		
		if (++i == 7)
		{
			i = 0;
			printf("\n");
		}
	}
	printf("\n  _________________________________\n") ;

}
short ReadYear()
{
	short Year;
	cout << "Please Enter a year to check ?." << endl;
	cin >> Year;
	return Year;
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

int main()
{
	short Year = ReadYear();
	short Month = ReadMonth();
	
	
	PrintCalnedar(Month,Year);

	system("pause>0");
	return 0;

}
