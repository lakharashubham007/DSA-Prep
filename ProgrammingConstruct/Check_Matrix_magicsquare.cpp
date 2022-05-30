#include <bits/stdc++.h>
using namespace std;

bool checkMagicSquare(vector<vector<int>> mat, int n)
{

    // diagonal sum logic

    // initilize and declare primary and secondary digonal sum = 0
    int psum = 0, ssum = 0;
    // traversal for diagonal sum
    for (int i = 0; i != n; i++)
    {
        psum = psum + mat[i][i];
        ssum = ssum + mat[n - 1 - i][i];
    }
    if (psum != ssum)
        return false;

    // rows and coloumns sum logic

    int rsum = 0, csum = 0;
    for (int i = 0; i != n; i++)
    {
        for (int j = 0; j != n; j++)
        {
            rsum = rsum + mat[i][j];
            csum = csum + mat[j][i];
        }
        if (psum != rsum || psum != csum)
            return false;
        rsum = 0;
        csum = 0;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    bool result = checkMagicSquare(mat, n);
    if (result)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}




/*
Problem Description
Given a matrix of dimensions n x n having elements 1 to n*n distinct elements, check whether the matrix is magic square or not.

Magic square is a square that has the same sum along all rows, columns and diagonals.

Input format
There are n + 1 lines of input.

First line contains integer n.

The next n lines contain n space separated elements.

Output format
Print "Yes" if it is a magic square , "No" otherwise.

Sample Input 1
3

4 9 2

3 5 7

8 1 6

Sample Output 1
Yes


*/