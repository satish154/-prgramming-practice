#include<iostream>
using namespace std;
int nat(int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<i<<endl;
    }
}
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    int result=nat(n);
    cout<<result;

}