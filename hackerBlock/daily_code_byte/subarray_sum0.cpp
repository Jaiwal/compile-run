// A C++ program to find if there is a zero sum
// subarray
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool subArrayExists(int arr[], int n)
{
	unordered_set<int> sumSet;

	// Traverse through array and store prefix sums
	int sum = 0;
	for (int i = 0 ; i < n ; i++)
	{
		sum += arr[i];

		// If prefix sum is 0 or it is already present
		if (sum == 0 || sumSet.find(sum) != sumSet.end())
			return true;

		sumSet.insert(sum);
	}
	return false;
}

// Driver code
int main()
{  int t;
  cin>>t;
  int a[t];

  for(int i=1;i<=t;i++)
  {
      cin>>a[i];
      int b[a[i];
      for(int j=0;j<a[i];j++)
      {
          cin>>b[j];
          if (subArrayExists(b, a[i]))
		cout << "Yes";
	     else
		cout << "NO";
      }

      break;
  }


	return 0;
}

