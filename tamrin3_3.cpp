#include<iostream>

using namespace std;
int main()
{
	int n,x;
	bool a=true;
	cout<<"lenght of arrays:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"number "<<i+1<<" :";
		cin>>x;
		arr[i] = x;
	}
	if(n>1){
		for(int i=0;i<n;i++)
		{
			if(arr[i]>arr[i+1])
			{
				a=false;
			}
		}
		if(a==true)
		{
			cout<<"sort";
		}
		else{
			cout<<"not sort";
		}
	}
	else{
		cout<<"sort";
		}
}