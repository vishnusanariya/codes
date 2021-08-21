#include<iostream>
using namespace std;
void high(int t1,int t2,int t3,int t4,int t5)
{
    int b[5],k=0,i;
    b[0]=t1;b[1]=t2;b[2]=t3;b[3]=t4;b[4]=t5;
    int max,ind,fre;
    max=b[i];
    fre=0;
    for( i=0;i<5;i++)
    {
        if(b[i]>=max)
        {
            max=b[i];
            fre++;
        }
    }
    //cout<<"max ="<<max<<endl;
    for(i=0;i<5;i++)
    {
        if(b[i]==max)
        {
            ind=i+1;
            cout<<ind<<endl;
            break;
        }
    }
    
    
    
}
int main()
{
    int t1=0,t2=0,t3=0,t4=0,t5=0;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        t1++;
        else if(a[i]==2)
        t2++;
        else if(a[i]==3) t3++;
        else if(a[i]==4) t4++;
        else t5++;
    }
    //cout<<t1<<" "<<t2<<" "<<t3<<" "<<t4<<" "<<t5<<endl;
    high(t1,t2,t3,t4,t5);
}
