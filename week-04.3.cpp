/*
write a proograme that display a prime number.
prime number  i.e which is divisble by itself or 1 
*/
#include<iostream>
using namespace std;
int main(){
	int a,counts=0,n;
	cout<<"Enter the value of n :";
	cin>>n;
	for( a=1;a<=n;a++){
		if(n%a==0){
		counts++;	
		}
	}
		if(counts==2){
			cout<<n<<" is Prime no ";
		}
	
	else	
		{
		cout<<n<<" is not prime.";
	}
	return 0;
	
}
