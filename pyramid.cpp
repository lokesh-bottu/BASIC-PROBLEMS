#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str ;
	cout<<"Enter the String : ";
	cin>>str;
	int lines = str.length();
	for(int i = 0 ; i < lines; i++) {
		for(int j=0;j < lines-i ; j++)
		{
			cout<<" ";
		}
		for(int k=0;k<=i;k++)
		{
			cout<<str[k];
		}
		for(int rev=i-1; rev>=0; rev--){
			cout<<str[rev];
		}
		cout<<endl;
	}
}


