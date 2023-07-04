#include <iostream>

using namespace std;

int mult(int a, int b)
{
    return a*b;
}

int main()
{
    int a,b;
    cout<<"Enter two numbers to multiply.\nNo. 1: ";
    cin>>a;
    cout<<"No.2: ";
    cin>>b;
    cout<<"Product = "<<mult(a,b);
    return 0;
}