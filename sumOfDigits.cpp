#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout<<"Enter 4 digit number: ";
    int num;
    cin>>num;
    // check is number have 4 digit
    int temp = abs(num), count = 0, digit,sum = 0;
    while (temp > 0)
    {
        digit = temp % 10;
        sum += digit;
        count += 1;
        temp /= 10;  
    }
    
    if (count == 4)
    {
        cout<<"Sum is :"<<sum;
    }else{
        cout<<"Please enter 4 digit number";
    }
    
    
    
    return 0;
}