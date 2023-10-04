#include<iostream>
using namespace std;

template <typename T>
void sortArray(T arr[], int size) 
{
    for(int i=0; i<size-1; i++)
	 {
        for(int j=i+1; j<size; j++) 
		{
            if(arr[i] > arr[j]) 
			{
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


template <typename T>
void displayArray(T arr[], int size) 
{
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() 
{
    int arr[] = {7, 5, 9, 2, 7};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Before ," << endl;
    displayArray(arr, size);

    sortArray(arr, size);

    cout << "After ," << endl;
    displayArray(arr, size);

    return 0;
}