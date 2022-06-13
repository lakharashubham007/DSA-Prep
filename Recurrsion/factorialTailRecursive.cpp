#include<iostream>
using namespace std;
 
 int fact(int n, int k){

     if(n == 0 || n==1)
     return k;

     return fact(n-1, k * n);
 }

 int main(){
     cout<<"Given numbers factorial will be: "<<fact(3,1);
 }


 /*
 
 op

 Given numbers factorial will be: 6
 
 */