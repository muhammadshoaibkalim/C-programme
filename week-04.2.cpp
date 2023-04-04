/*
Write a programe in which take a number from user that show sum, average  and multiplication of given number
*/
#include<iostream>
using namespace std;
int main(){
int a,b,sum,multi,average;
cout<<"Enter the number from user :";
cin>>a>>b;
if(a>50 && b<a){
	cout<<"The given number satisfy. "<<endl;
}
else
   cout<<"The given number don't' satisfy. "<<endl;
   
   sum=a+b;
   multi=a*b;
   
   cout<<"sum is :"<<a+b<<endl;
   cout<<"multication is :"<<a*b<<endl;
   
   average=sum/2;
   cout<<"The average is :"<<average<<endl;
   
   
}
