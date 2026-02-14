#include <iostream> 
using namespace std;

bool isEven(int num)
{
    return num % 2 == 0;
}

int main()
{
    cout<<"Enter any Number I will guess is it even or odd: ";
    int num;
    cin>>num;
    if (isEven(num))
    {
        cout<<num<<" is even";
    }else{
        cout<<num<<" is odd";
    }
    

    return 0;
}