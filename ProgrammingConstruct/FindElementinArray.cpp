#include <bits/stdc++.h>
using namespace std;

// TODO: Implement this method
int findElement(vector<int> vec, int n, int x) {
    int currIdx = 0;
    while(currIdx < n){
        if(vec[currIdx]==x){
            return currIdx;
        }
        currIdx++;
    }
    return -1;
}

// NOTE: Please do not modify this function
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> vec[i];
    }
    int x;
    cin >> x;
    int result = findElement(vec, n , x);
    cout << result;
}