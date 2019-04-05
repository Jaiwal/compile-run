/*#include<bits/stdc++.h>


#include<string.h>
#include<iostream>
using namespace std;
int main()
{

    char str[100];
    cin>>str;
     int n = sizeof(str) / sizeof(str[0]);
    int count =0;
    char x;
    char strn[100];
    while(count<n)
    {


    for(int i=0;i<n;i++)
    {

        if(str[i]!=x){
            strn[count]=str[i];
        count++;
        }

    }
    }
    for(int j=0;j<n;j++)
    {


    cout<<strn[j];
    }
    return 0;
}
*/
// A C++ program to move all zeroes at the end of array
#include <iostream>
using namespace std;
#include<string.h>
#include<bits/stdc++.h>
// Function which pushes all zeros to end of an array.
string pushZerosToEnd(int str[], int n)
{
    char x;
	int count = 0; // Count of non-zero elements

	// Traverse the array. If element encountered is non-
	// zero, then replace the element at index 'count'
	// with this element
	for (int i = 0; i < n; i++)
		if (str[i] != x)
			str[count++] = str[i]; // here count is
								// incremented

	// Now all non-zero elements have been shifted to
	// front and 'count' is set as index of first 0.
	// Make all elements 0 from count to end.
	while (count < n)
		str[count++] = x;
}

// Driver program to test above function
int main()
{
	//int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
	char str[100];
    cin>>str;
	int n = sizeof(str) / sizeof(str[0]);
	pushZerosToEnd(str, n);
	//cout << "Array after pushing all zeros to end of array :n";
	for (int i = 0; i < n; i++)
		cout << str[i] << " ";
	return 0;
}

