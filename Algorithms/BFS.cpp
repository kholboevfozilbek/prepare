

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <vector>
#include <ctime>

using namespace std;

bool Ok(int a, int b, int n, int m){
	return a >= 0 && a < n && b >= 0 && b < m;
}

int main ()
{
	 int n, m;
	 n = m = 10;

	 int a[100][100];
	 pair<int, int> t;
	 vector< pair<int, int> > BFS;

	 srand(time(NULL));

	 for (int i = 0; i < n; i++)
	 	for (int j = 0; j < m; j++) {
	 		a[i][j] = rand()%4;
		}

	int x, y;
	x = rand()%n;
	y = rand()%m;
	BFS.push_back(make_pair(x, y));
	a[x][y] = 5;
	x = rand()%n;
	y = rand()%m;
	BFS.push_back(make_pair(x, y));
	a[x][y] = 6;
	x = rand()%n;
	y = rand()%m;
	BFS.push_back(make_pair(x, y));
	a[x][y] = 7;
	x = rand()%n;
	y = rand()%m;
	a[x][y] = 8;

	cout << "\nThere are 3 wizards 6, 7 and 8, the exit is 8\n\n";

	 for (int i = 0; i < n; i++) {
	 	for (int j = 0; j < m; j++) {
	 		cout << a[i][j] << " ";
		}
		cout << endl;
	}
	int last = 0;


	while(last < BFS.size()){
		x = BFS[last].first;
		y = BFS[last].second;

		if((Ok(x - 1, y, n, m) && a[x - 1][y] == 8) || (Ok(x + 1, y, n, m) && a[x + 1][y] == 8) || (Ok(x, y + 1, n, m) && a[x][y + 1] == 8) || (Ok(x, y - 1, n, m) && a[x][y - 1] == 8))
		{
			cout << "\nThe " << a[x][y] - 4 << " wizard("<< a[x][y] << ") reach the exit(8) first\n\n";
			break;
		}

		if (Ok(x - 1, y, n, m) == true && a[x - 1][y] != 0 && a[x - 1][y] < 5){
			a[x - 1][y] = a[x][y];
			BFS.push_back(make_pair(x - 1, y));
		}

		if (Ok(x + 1, y, n, m) == true && a[x + 1][y] != 0  && a[x + 1][y] < 5){
			a[x + 1][y] = a[x][y];
			BFS.push_back(make_pair(x + 1, y));
		}

		if (Ok(x, y - 1, n, m) == true && a[x][y - 1] != 0  && a[x][y - 1] < 5){
			a[x][y - 1] = a[x][y];
			BFS.push_back(make_pair(x, y - 1));
		}

		if (Ok(x, y + 1, n, m) == true && a[x][y + 1] != 0  && a[x][y + 1] < 5){
			a[x][y + 1] = a[x][y];
			BFS.push_back(make_pair(x, y + 1));
		}

		last++;
	}
	if(last >= BFS.size()){
		cout << "\nno one reach the exit\n";
	}

	 for (int i = 0; i < n; i++) {
	 	for (int j = 0; j < m; j++) {
	 		cout << a[i][j] << " ";
		}
		cout << endl;
	}
  	return 0;
}