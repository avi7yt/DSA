#include <iostream>
using namespace std;

int max(int a, int b, int c)
{
    int maximum = a;
    if (b > maximum)
        maximum = b;

    if (c > maximum)
    {
        maximum = c;
    }
    
    return maximum;   
}

int main()
{
    cout<<"Enter any three numbers: ";
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(a,b,c);
    return 0;
}