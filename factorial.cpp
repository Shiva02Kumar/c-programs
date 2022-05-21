#include<iostream>  

using namespace std;

int fact(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * fact(n-1));  
}  
   
int main()  
{  
  int num,ans;   
  cout<<"Enter a number: ";  
  cin>>num;   
  ans = fact(num);  
  cout<<"Factorial is fact = "<<ans;  
  return 0;  
}  