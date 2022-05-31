#include <bits/stdc++.h>
using namespace std;


// TODO: Implement this method
int diagonalSum(vector<vector<int>> mat, int n){
   int sum = 0;
   for(int i= 0; i<n; i++){
   sum += mat[i][i];
   }
   return sum;
}

int main(){
    int n;
    cin>>n;
    //how to take a matrix from user
    vector<vector<int> >mat(n, vector<int>(n));
     for(int i=0; i<n; i++){
         for(int j=0; j<n; j++){
             cin>> mat[i][j];
         }
     }
     int result = diagonalSum(mat, n);
     cout<<result;
}  



/*

Sample Input 1
4

1 2 3 4

1 2 4 5

2 3 3 4

1 1 2 3

Sample Output 1
9

*/