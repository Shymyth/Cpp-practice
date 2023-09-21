#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter The Numbers"<<endl;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Swapping Value is: "<<a<<" "<<b<<endl;
}