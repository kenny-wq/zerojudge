#include <iostream>
#include <algorithm>
using namespace std;

struct point
{
	int x;
	int y;
};
int main() {
	int n;
	cin >> n;
	point a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i].x >> a[i].y;
	}
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (a[j].x > a[j + 1].x)
				swap(a[j], a[j + 1]);
		}
	}
	for (int k = 0; k < 1005; ++k)
	{
		for (int i = 0; i < n; i++) {
			if (a[i].x == a[i + 1].x && a[i].y > a[i + 1].y) {
				swap(a[i], a[i + 1]);
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i].x << " " << a[i].y << "\n";
	}
}