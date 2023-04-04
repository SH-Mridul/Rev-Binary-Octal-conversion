#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n);
int octalToDecimal(int n);
int reverseANumber(int n);

int main(){
     //variable
     int binaryInput,octalInput,revInput;
     
     //getting input
     cin>>binaryInput;
     cin>>octalInput;
     cin>>revInput;
     
     
     
     //after process output
     cout<<"binary to decimal:"<<binaryToDecimal(binaryInput)<<endl;
     cout<<"ocatal to decimal:"<<octalToDecimal(octalInput)<<endl;
     cout<<"reverse a number:"<<reverseANumber(revInput)<<endl;
}


//binary to decimal
int binaryToDecimal(int n)
{
     int ans = 0;
     int power = 0;
     
     while(n>0){
          int lastDigit = n%10;
          ans += lastDigit*pow(2,power); 
          n = n/10;
          power++;
     }
     
     return ans;
}


//octal to decimal
int octalToDecimal(int n){
     int ans = 0;
     int power = 0;
     
     while(n>0){
          int lastDigit = n%10;
          ans += lastDigit*pow(8,power); 
          n = n/10;
          power++;
     }
     
     return ans;
}


//reverse a number
int reverseANumber(int n){
     
     int ans = 0;
     
     while(n>0)
     {
          int lastDigit = n%10;
          n = n/10;
          ans = (ans*10)+lastDigit;
     }
     
     return ans;
}