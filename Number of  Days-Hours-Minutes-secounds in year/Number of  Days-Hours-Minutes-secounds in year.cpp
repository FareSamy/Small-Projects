#include <iostream>
using namespace std;



bool IsLeapYear(short Year)
{
    /*if (Year % 400 == 0)
    {
        return true;
    }
    else if (Year % 100 ==0)
    {
        return false;
    }
    else if (Year % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }*/
    return (Year % 4 == 0 && Year % 10 != 0) || (Year % 400 == 0);
}
short NumberOfDaysInYear(short Years)
{
    return IsLeapYear(Years) ? 366 : 365;
}
short NumberOfHoursInYear(short Years)
{
    return NumberOfDaysInYear(Years) * 24;
}
int NumberOfMinustsInYear(short Years)
{
    return NumberOfHoursInYear(Years) * 60;
}
int NumberOfSecoundsInYears(short Years)
{
   return NumberOfMinustsInYear(Years) * 60;
}
short ReadYear()
{
    short Y;
    cout << "Please Enter a year to check ?\n";
    cin >> Y;
    return Y;
}
int main()
{
    short Years = ReadYear();
    
    cout << "\n Number Of days in Year [" << Years << "] is "
         << NumberOfDaysInYear(Years);

    cout << "\n Number Of Hours in Year [" << Years << "] is "
         << NumberOfHoursInYear(Years);

    cout << "\n Number Of Minuts in Year [" << Years << "] is "
         << NumberOfMinustsInYear(Years);

    cout << "\n Number Of Secounds in Year [" << Years << "] is "
        << NumberOfSecoundsInYears(Years);



    system("pause>0");
    return 0;
}

