#include<iostream>
using namespace std;
void fib(int n)
{
    int t1,t2,nextterm;
    t1=0;
    t2=1;
    for(int i=0;i<=n;i++)
    {
      cout<<t1<<endl;
       nextterm=t1+t2;
       t1=t2;
       t2=nextterm;
    }
   return;
}
int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    fib(n);

   return 0;
} 
