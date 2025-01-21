/* Write a program to implement Binary Search using C++ */

#include<iostream>
using namespace std;

int binSearch(int *arr, int n, int key)
{
  int start = 0, end = n-1;
  while(start <= end)
  {
    int mid = (start + end) / 2;
    if(arr[mid] == key)
      return mid;
    else if(arr[mid] < key)
      start = mid + 1;
    else 
      end = mid - 1;
  }
  return -1; // incase key doesn't exist in the array
}

int main()
{
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  int n = sizeof(arr) / sizeof(int);
  cout << binSearch(arr, n, 12) << endl;
  return 0;
}
