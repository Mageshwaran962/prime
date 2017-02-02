#include <iostream>

using namespace std;
 

int main() 
{
 
int num1,num2,n;
 
int count=0;
 cin>>num1;

 cin>>num2;
 
for(int i=num1;i<num2;i++)

 {
        
count=0;
     
for(int j=2;j<i;j++)
    
 {
        
if(i%j==0)
       
 {
         
count++;
        
 break;
        
 }
    
 }
    
if(count==0)
  
  {
    
 cout<<i<<" ";
  
  }
 }
}