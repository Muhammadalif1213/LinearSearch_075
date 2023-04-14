#include <iostream>
using namespace std;

int arr[20];	//array to be searched
int n;			//number of element in the array
int i;			//index of array element

void input()
{
	while (true)
	{
		cout << "enter the number of element in the array :";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 element.\n\n";
	}

	//Accept array elements
	cout << "\n====================\n";
	cout << " Enter array elements\n";
	cout << "\n====================\n";
	for (i = 0; i < n; i++) 
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
