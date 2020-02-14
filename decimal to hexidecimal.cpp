#include<bits/stdc++.h>
using namespace std;
int main()
{
	int temp;
	cin>>temp;
	char hex[50];
	int i=0,r;
	while(temp!=0)
	{
		r=temp%16;
		if(r<10)
		hex[i++]=r+48;
		else
		hex[i++]=r+55;
		
		temp=temp/16;
	}
	for(int j=i-1; j>=0; j--)
	cout<<hex[j];
	
}
