#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num =12;
	string a="";
	while(num>0){
		a = to_string(num%2)+a;
		num /= 2;
	}
	cout<<a;
}



#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    string a = "110";
    int j = 0;
    int value = 0;
    for(int i = a.length()-1;i>=0;i--)
    {
        if(a[i]=='1')
            value = value+pow(2,j);
        j++;
    }
    cout<<value;
}
