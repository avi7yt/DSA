#include <iostream>
using namespace std;
int main()
{
    // Find Largest of Three Numbers
    cout<<"Enter three numbers: ";
    int a,b,c;
    cin>>a>>b>>c;
    
    // logic
    if (a>=b && a>=c)
    {
        cout<<"a is largest";
    }else if (b>=a && b>=c)
    {
        cout<<"b is largest";
    }else{
        cout<<"c is largest";
    }
    
    
    return 0;
}