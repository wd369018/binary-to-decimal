#include<iostream>
using namespace std;
int main()
{
    int num,digit,ans=0,mul=1;
    cout<<"Enter the value:\n";
    cin>>num;
    while(num>0)
    {
        digit=num%10;
        num=num/10;
        ans=digit*mul+ ans;
        mul=mul*2;

    }
    cout<<ans<<endl;
    
    return 0;
}