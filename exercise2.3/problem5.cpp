#include <bits/stdc++.h>
using namespace std;

void quadrant(int x, int y)
{

	if (x > 0 and y > 0)
		cout << "lies in First quadrant" <<endl;

	else if (x < 0 and y > 0)
		cout << "lies in Second quadrant" <<endl;

	else if (x < 0 and y < 0)
		cout << "lies in Third quadrant" <<endl;

	else if (x > 0 and y < 0)
		cout << "lies in Fourth quadrant" <<endl;

	else if (x == 0 and y > 0)
		cout << "lies at positive y axis" <<endl;

	else if (x == 0 and y < 0)
		cout << "lies at negative y axis" <<endl;

	else if (y == 0 and x < 0)
		cout << "lies at negative x axis" <<endl;

	else if (y == 0 and x > 0)
		cout << "lies at positive x axis" <<endl;

	else
		cout << "lies at origin" <<endl;
}

int main()
{
    int x, y;
    cin >> x >> y;
    quadrant(x, y);
    return 0;
}
