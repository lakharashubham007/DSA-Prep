#include <bits/stdc++.h>
using namespace std;

// TODO: Implement this method
int reduceArray(vector<int> arr){

    priority_queue<int> maxPq;

   // Inserting elements of array in priority_queue.
   for (int i = 0; i < arr.size(); i++)
       maxPq.push(arr[i]);

   // Looping through elements.
   while (maxPq.size() > 1)
   {
       // Remove largest element.
       int maxEle = maxPq.top();
       maxPq.pop();

       // Remove 2nd largest element.
       int secondMaxEle = maxPq.top();
       maxPq.pop();

       // If these are not equal.
       if (maxEle != secondMaxEle)
       {
           // Pushing into queue.
           maxPq.push((maxEle - secondMaxEle));
       }
   }

   // If only one element is there in the heap.
   if (maxPq.size() == 1)
       cout << maxPq.top();
   else
       cout << "0";
       return 0;
}

// NOTE: Please do not modify this function
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0 ; i < n ; ++i) {
        cin >> arr[i];
    }
    int result = reduceArray(arr);
   return 0;
   
} 




/*


Problem Description
There is an array of N elements. Perform the following operation until there are one or no elements left in the array :

Remove the largest and second largest element from the array and insert their absolute difference back in the array.

Output format
Print the last element left in the array.

Sample Input 1
5

2 1 11 13 7

Sample Output 1
2

Constraints
1 <= N <= 10^5

1 <= A[i] <= 10^9
*/