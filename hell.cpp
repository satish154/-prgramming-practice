#include <bits/stdc++.h> 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float basic;
    char grade;
    cin>>basic;
    cin>>grade;
    float totalSalary;
    float allowance;
    float hra=0.2*basic;
    float da=0.5*basic;
    if(grade=='A')
    {
        allowance=1700;
    }
    else if(grade=='B')
    {
        allowance=1500;

    }
    else{
        allowance=1300;
    }
    float pf=0.11*basic;
    totalSalary=basic+hra+da+allowance-pf;
    cout<<round(totalSalary);
  return 0;

}