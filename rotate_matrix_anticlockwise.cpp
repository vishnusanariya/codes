// rotate matrix 90 degrre anti clockwise
/*matrix[][]={[1,2,3]
			  [4 5 6]
			  [7 8 9]}
			  
output:  {[3 6 9]
          [2 5 8]
          [1 4 7]}*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the dimention:";
	cin>>n;
	int a[n][n],b[n][n];
	int i,j,k;
	cout<<"enter the elements:\n";
	for(i=0;i<n;i++){
	for(j=0;j<n;j++)
	cin>>a[i][j];}
	
	cout<<"a:"<<endl;
	for(i=0;i<n;i++){
	for(j=0;j<n;j++)
	cout<<a[i][j]<<" ";
	
	cout<<endl;}
	int m=n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][m];
			//cout<<"b's:"<<b[i][j]<<endl;
		}
		if(m>=0)
		m--;
	}
	cout<<"after rotation 90 degree anticlockwise:\n";
	for(i=0;i<n;i++){
	
	for(j=0;j<n;j++)
	cout<<b[i][j]<<" ";
	
	cout<<endl;}
	
}
