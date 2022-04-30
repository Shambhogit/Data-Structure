#include <iostream>
using namespace std;

void insertion(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else{
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}
int main()
{
    int a[] = {54,23,66,12,65};
    int n = 5;
    insertion(a,n);
    return 0;
}