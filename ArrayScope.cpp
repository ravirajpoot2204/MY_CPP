#include <bits/stdc++.h>
using namespace std;

void update(int arr[], int n)
{

    cout << "Inside Update " << endl;
    arr[0] = 143;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going back to main" << endl;
}
int main()
{
    int size;

    int arr[3] = {1, 2, 3};
    // in  this case we are passing the address of the array to the update function
    update(arr, 3);

    cout << "Inside Main array printing" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}