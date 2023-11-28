#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<"enter nuber";
    cin>>n;
    i=1;
    while(i<=n)
    {
         if(n%i==0)
         {
           count=count+1;
         }
         i=i+1;
    }
    if(count==2){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    return 0;

}