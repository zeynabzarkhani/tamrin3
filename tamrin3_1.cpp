#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	string a;
	int lenword,count=0,truee=0,wrong = 0;
	char ch;
	cout<<"plyer1 chose a name for Guess:";
	cin>>a;
	system("CLS");
	lenword = a.length();
	string find[lenword+1];
	for(int i=0;i<lenword;i++)
	{
		find[i]="-";
	}
	cout<<"Consists of "<<lenword<<" words "<<"\n";
	for(int i=0;i<lenword;i++){
		cout<<"\nGuess word : ";
		cin>>ch;
		for(int j=0;j<lenword;j++)
		{
			if(ch == a[j] && find[j] == "-")
			{
				i--;
				find[j]=ch;	
				truee++;
				wrong++;
			}
			if(ch == a[j] && find[j] != "-")
			{
				wrong++;
				i--;
			}
		}
		if(wrong==0){
			count++; 
		}
		wrong=0;
		for(int j=0;j<lenword;j++){
			cout<<find[j];
		}
		cout<<"\n((Wrong Guess= "<<count<<"))\n";
		if(count == lenword){
			cout<<"--------------------------------\n"<<" gameover \n true anser = "<<a;
			break;
		}
		if(truee == lenword){
			cout<<"--------------------------------\n"<<"       ((W I N N E R)) ";
			break;
		}
	}
		
}	