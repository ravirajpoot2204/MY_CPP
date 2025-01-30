
#include <bits/stdc++.h>
using namespace std;

void reverseAnArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
  
    int i = 0;
    while (start <= end)
    {
        // int nume = arr[end];
        // int nums = arr[start];
        // arr[end] = nums;
        // arr[start] = nume;
        // instead of above 3 lines we can use below 1 line
swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int size)
{

    cout << "Printing Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "|" << arr[i] << "| ";
    }
    cout << endl;
}
int main()
{

    int arr[6] = {25, 0, 5, 2, -6, 1};
    int brr[5] = {1, 2, 3, -6, 8};
    printArray(arr, 6);
    reverseAnArray(arr, 6);
    printArray(arr, 6);

    printArray(brr, 5);
    reverseAnArray(brr, 5);
    printArray(brr, 5);

    return 0;
}