//Linear search for duplicates
//wj8664
//Huiqing Wu


#include <iostream>

using namespace std;

int main()
{
	
	int count = 0;
	int* arr = NULL;   // Pointer to int, initialize to nothing.
	int n;           // Size needed for array
	cout << "Please enter the size of the list: " << endl;
	cin >> n;        // Read in the size
	arr = new int[n];  // Allocate n ints and save ptr in array.
	for (int i = 0; i < n; i++) {
		arr[i] = 0;    // Initialize all elements to zero.
	}

	for (int i = 0; i < n; i++)
	{
		cout << "Please enter the element on the postition of " << i << " in the list" << endl;
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if (arr[i]==arr[j])
			{
				count += 1;
			}
		}
	}
	cout << "The number of duplicates of the list is: " << count << endl;

	delete[] arr;  // Free memory allocated for the a array.
	arr = NULL;     // Be sure the deallocated memory isn't used.

}

