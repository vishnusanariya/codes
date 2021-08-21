#include<iostream>
using namespace std;
int main()
{
    int year,flag=0;
    int sum=31 + 31 + 30 + 31 + 30 + 31 + 31;
    //(year <= 1917) & (year%4 == 0)) or ((year > 1918) & (year%400 == 0 or ((year%4 == 0) & (year%100 != 0)))
    cin>>year;
    if((year<=1917 && year%4==0) || (year>1918 && (year%400==0 || ((year%4==0) && (year%100!=0)))))
    {
        sum+=29;
    }
    else if(year==1918)
    {
        flag=1;
    }
    else{
        sum+=28;
    }
    int day;
    day=256-sum;
    if(flag==1)
    {
        cout<<"26.09."<<year;
    }
    else
    cout<<day<<".09."<<year;
}
