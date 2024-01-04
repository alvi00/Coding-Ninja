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


//also if i wanna ccheck palindrone

#include <bits/stdc++.h>
using namespace std;

void check_palindrome(string alvi, int i)
{
	int n = alvi.size();

	if (i > n / 2)
	{
		cout << "YES";
		return;
	}

	if (alvi[i - 1] != alvi[n - i])
	{
		cout << "NO";
		return;
	}
	i++;
	check_palindrome(alvi, i);
}

int main()
{
	string alvi;
	cin >> alvi;
	check_palindrome(alvi, 1);
	return 0;
}
