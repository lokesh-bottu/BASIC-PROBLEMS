#include<iostream>
using namespace std;

int main()
{
	int a=5;
	int b= 12;
	int j =2;
	int max = (a>b)?a:b;
	int lcm = max;
	while(true){
		if(max %a==0 && max%b==0)
		{
			lcm = max;
			break;
		}
		max = lcm*j;
		j++;
	}
	cout<<lcm;
}
