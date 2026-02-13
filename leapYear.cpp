#include <iostream>
using namespace std;
int main()
{
    // Leap Year Program-
    cout<<"User Enter the year: ";
    int year;
    cin>>year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout<<year<<" is the leap year";
    }else{
        cout<<year<<" is NOT leap year";
    }
       
    return 0;
}