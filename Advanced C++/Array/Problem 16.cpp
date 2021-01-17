#include<iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int *arr = new int[n*m];
	int idx = 0;
	for(int i=0;i<n*m;i++)
		cin >> arr[idx++];
	idx = 0;
	for(int i=0;i<n;i++)
	{
		int sum = 0;
		for(int j=0;j<m;j++)
			sum+=arr[idx++];
		cout << sum << endl;
	}
	delete[] arr;
	return 0;
}