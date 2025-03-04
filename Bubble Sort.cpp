#include <iostream.h>
using namespace std;

void print(int *arr, int n)
{
  for(int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void bubbleSort(int *arr, int n)
{
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      if(arr[j] > arr[j+1])
        swap(arr[j], arr[j+1]);
    }
  }
  print(arr, n);
}

int main()
{
  int arr[5] = {5, 4, 1, 3, 2};
  int n = sizeof(arr) / sizeof(int);
  bubbleSort(arr, n);
  return 0;
}
