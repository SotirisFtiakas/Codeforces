#include <iostream>
using namespace std;
typedef long long LL;
 
int m;
LL k;
LL n, ans = 0;
int main()
{
    cin >> n >> m >> k;
    LL d[m];        //array of special elements
	for (int i = 0; i < m; i++)
		cin >> d[i];
	int j = 0, f = 0;       //j special elements found, f elements removed
	LL page;
	while (j != m)
	{
		page = (d[j] - f - 1) / k + 1;      //in which page the next element is
		j++;
		while (d[j] - f <= k * page && j < m)       //check for further elements in the same page
			j++;
		f = j;      //number of elements removed from current page
		ans++;
	}
	cout << ans;
}
 
