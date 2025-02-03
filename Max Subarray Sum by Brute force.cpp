/* Write a program in C++ to find maximum sum from all the subarrays of an array using Brute Force [O(n^3)] */

#include <iostream>
using namespace std;

void maxSubarraySum (int *arr, int n)
{
  int max, sum;
  max = arr[0];
  for(int k = 0; k < n; k++)
  {
    for(int i = k; i < n; i++)
    {
      sum = 0;
      for(int j = k; j <= i; j++)
      {
        sum = sum + arr[j];
      }
      cout << sum << "  ";
      if (max < sum)
        max = sum;
    }
    cout << "\n\n";
  }
  cout << max;
}

int main()
{
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int) ;
    maxSubarraySum (arr, n);
    return 0;
}
