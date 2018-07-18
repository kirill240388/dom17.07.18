#include <iostream>
#include <iomanip>
#include<math.h>
#include<ctime>

using namespace std;

int main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int task;
	cin >> task;
		if(task==1)
		{
			// **Íàïèñàòü ïğîãğàììó, êîòîğàÿ çàïîëíÿåò ìàññèâ ñëó÷àéíûìè ÷èñëàìè è ìåíÿåò
			// ïîğÿäîê ıëåìåíòîâ â êàæäîì ñòîëáöå íà îáğàòíûé(ìàññèâ äî è ïîñëå ïîêàçàòü íà ıêğàí).
			// Íàïğèìåğ:
			// 11 10 9 8   = >  3 7 0 11
			// 6 4 12 5         6 4 12 5
			// 3 7 0 11        11 10 9 8

			int a[100][100];
			int n = 3, m = 4;
			int i, j;

			for (i = 0; i < n; i++)
			{
				for (j = 0; j < m; j++)
				{
					a[i][j] = rand() % 10;
					cout << right << setw(3) << a[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl << endl;
			for (i = 0; i <= n / 2; i++)
			{
				for (j = 0; j < m; j++)
				{
					swap(a[i][j], a[n - i - 1][j]);
				}
			}

			for (i = 0; i < n; i++)
			{
				for (j = 0; j < m; j++)
					cout << right << setw(3) << a[i][j] << " ";
				cout << endl;
			}
			cout << endl << endl;
		}
		if(task==2)
		{
			// *Íàïèñàòü ïğîãğàììó, êîòîğàÿ çàïîëíÿåò ìàññèâ 5õ5 îöåíêàìè ïî 12 áàëüíîé
			// ñèñòåìå, ïğåîáğàçîâàòü èõ â îöåíêè ïî 5 áàëüíîé ñèñòåìå.Äâîéêîé ñ÷èòàåòñÿ
			// îöåíêà íèæå 4, òğîéêîé – îò 4 äî 6 è ò.ä.

			const int n = 5;
			int a[n][n];
			int i, j;

			for (i = 0; i < n; i++)
			{
				for (j = 0; j < n; j++)
				{
					a[i][j] = 1 + rand() % 12;
					cout << right << setw(3) << a[i][j] << " ";
				}
				cout << "   =>   ";
				for (j = 0; j < n; j++)
				{
					if (a[i][j] > 0 && a[i][j] < 4) a[i][j] = 2;
					else if (a[i][j] > 3 && a[i][j] < 7) a[i][j] = 3;
					else if (a[i][j] > 6 && a[i][j] < 10) a[i][j] = 4;
					else if (a[i][j] > 9 && a[i][j] <= 12) a[i][j] = 5;
					cout << right << setw(3) << a[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl << endl;
		}
		if(task==3)
		{
			// **Çàïîëíèòü äâóõìåğíûé ìàññèâ 8õ8 çíà÷åíèÿìè 0 è 1 ñëó÷àéíûì îáğàçîì,
			// íî òàê, ÷òîáû íóëåé áûëî â äâà ğàçà áîëüøå, ÷åì åäèíè÷åê.

			const int n = 8;
			int a[n][n];
			int i, j;
			int zero = 0, one = 0;

			for (i = 0; i < n; i++)
			{
				for (j = 0; j < n; j++)
				{
					a[i][j] = rand() % 2;
					if (a[i][j] == 0) zero++;
					else one++;

					if (one > n*n / 3)
						if (a[i][j] == 1) a[i][j] = 0;
						else if (zero > n*n / 3 * 2)
							if (a[i][j] == 0) a[i][j] = 1;

					cout << right << setw(3) << a[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl << endl;
		}
		
}
