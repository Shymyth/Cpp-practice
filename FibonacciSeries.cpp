#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter The Numbers: ";
    cin>>n1>>n2;
    cout<<n1<<" "<<n2<<" ";
    for(int i=0;i<=10;i++)
    {
        n3=n2+n1;
        n1=n2;
        n2=n3;
        cout<<n3<<" ";
    }

}