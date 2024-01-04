#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int i, int n)
{
	if (i > (n / 2) + 1)
	{

		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		return;
	}

	int temp=arr[i-1];
	arr[i-1]=arr[n-i];
	arr[n-i]=temp;

	i++;
	reverse(arr,i,n);
}

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	reverse(arr, 1, n);
	return 0;
}
