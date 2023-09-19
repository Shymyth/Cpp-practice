#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cout<<"Enter The Number";
    cin>>n;
    for(int i=10;i>=1;i--)
    {
        a = n*(i);
        cout<<a<<endl;
    }
}