#include<bits/stdc++.h>
using namespace std;
 int main() 
 {
         long long n;
         cin>> n;  
         long long trailing_zeroes = 0 ; 
         for (long long i=5; n/i >= 1; i=i*5 )
         {
                trailing_zeroes = trailing_zeroes + n/i ;
                 
         }

         cout << trailing_zeroes; 
         return 0;
          }


