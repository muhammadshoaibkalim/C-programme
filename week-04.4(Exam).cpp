/*Exam Question :)
Write a program take two number from user which is low and high 
that count the odd number and display also.
*/
#include<iostream>
using namespace std;
int main()
{

   int low,high;
   int countodd=0;
   
   cout<<"Enter the low and high number :";
   cin>>low>>high;
   
      for(int i=low;i<=high;i++){
      if(i%2!=0){
         countodd++;
         cout<<i<<" ";
                }
              }

   cout<<"\n Total odd numbers: "<<countodd<<endl;
   
   return 0;
}
