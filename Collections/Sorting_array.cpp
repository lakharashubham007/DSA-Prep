#include <bits/stdc++.h>
using namespace std;

// TODO: Implement this method
vector<string> maxInArray(vector<string> vec,int n){
    
   
    sort(vec.begin(), vec.end());
        return vec;

}

// NOTE: Please do not modify this function
int main(){
    int n;
    cin >> n;
    vector<string> vec(n);
    for(int i = 0 ; i < n  ; i++) {
        cin >> vec[i];
    }
    vector<string> result = maxInArray(vec, n);
    for(auto i : result) {
        cout << i << " ";
    }
}



/*

Problem Description
Given an array of n strings, sort the array in lexicographical order.

Lexicographical order is the order in which words appear in a dictionary.

Input format
There are two lines of input.

First line contains integer n.

Next line contains n space separated strings.

Output format
Print the sorted array.

Sample Input 1
4

abc abd ab a

Sample Output 1
a ab abc abd

*/