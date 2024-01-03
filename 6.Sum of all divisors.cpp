int sumOfAllDivisors(int n){
    int answer=0;
	for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                answer=answer+j;
            }
        }
    }	
    return answer;
}
//Here the time complexity is O(n) but there is another optimal solution
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> alvi;

	for (int i = 1; i*i<=36; i++)
	{
		if (n % i == 0)
		{
			alvi.emplace_back(i);
		}
		if (n / i != i)
		{
			alvi.emplace_back(n / i);
		}
	}

	sort(alvi.begin(), alvi.end());

	for (auto i : alvi)
	{
		cout << i << endl;
	}
	return 0;
}


