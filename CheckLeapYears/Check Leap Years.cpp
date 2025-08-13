#include <iostream>
using namespace std;

bool IsLeapYear(short Year)
{

   /*  if (Year % 400 == 0)
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
    } */
    
    return (Year % 4 == 0 && Year % 10 != 0) || (Year % 400 == 0);
}
short ReadYear()
{
    short Year;
    cout << "Please Enter a year to check ?." << endl;
    cin >> Year;
    return Year;
}
int main()
{
    short Year = ReadYear();

    if (IsLeapYear(Year))
    
        cout << "Yes , Year [" << Year << "] is Leap Year. " << endl;
    else
        cout << "No , Year [" << Year << "] is  Not Leap Year. " << endl;

    system("pause>0");
    return 0;


}

