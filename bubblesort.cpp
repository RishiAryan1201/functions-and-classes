#include <iostream>

using namespace std;

void bubblesort(int arr[],int size)
{
	
	int temp;
	for(int i=0; i<size-1; i++)
	{
		for(int j = 0; j<size-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp; 
			}
				
		}
			
	}
}

void printarray(int arr[], int size)
{
	for(int i=0; i<size; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main()
{
	int arr[] = {6,7,4,3,1,2,5};
	int size = sizeof(arr)/sizeof(int);
	

	cout<<"unsorted array is :"<<" ";
	printarray(arr , size);
	

	bubblesort(arr , size);


	cout<<"sorted array is :"<<endl;
	printarray(arr, size);
	return 0;
}