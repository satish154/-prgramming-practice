#include<iostream>
using namespace std;
int prime(int n)
{
    int i=1,count=0;
    while(i<=n)
    {
        if(n%i==0)
        {
            count=count+1;
        }
        i=i+1;
    }
    if(count==2){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    prime(n);
   
    
}