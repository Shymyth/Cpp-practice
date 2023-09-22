#include<iostream>
using namespace std;
int main()
{
    int n,f;
    cout<<"Enter The Numbers: ";
    cin>>n;
    f=n;
    for(int i=1;i<n;i++)
        {
            f = f*i;
        }
cout<<"Factorial Value is: "<<f<<endl;
}