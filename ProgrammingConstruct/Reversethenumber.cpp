#include<bits/stdc++.h>
using namespace std;

//TODO Implement methods

int reverseNum(int n){
int revNum;
while(n > 0){
    revNum = revNum * 10 + n % 10;
    n = n / 10;
}
return revNum;
}

//Don't touch

int main(){
    int n;
    cin>>n;
    int ans = reverseNum(n);
    cout<<ans<<endl;
}