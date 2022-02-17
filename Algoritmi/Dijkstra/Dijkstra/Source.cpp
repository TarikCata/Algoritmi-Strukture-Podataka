#include <iostream>
#include <vector>
#include <list>
using namespace std;
const int velicina = 6;

int nadjiNajmanji(vector<int>& vrijdnosti, vector<bool>& posjeceni)
{
	int min = INT_MAX;
	int v = -1;
	for (int i = 0; i < velicina; i++)
	{
		if (!posjeceni[i] && vrijdnosti[i] < min)
		{
			v = i;
			min = vrijdnosti[i];
		}
	}
	return v;
}


void dijkstra(int matrica[velicina][velicina], int from, int end)
{
	list<pair<int, int>> putanja;
	float sum = 0;
	vector<int> vrijdnosti(velicina, INT_MAX);
	vector<bool> posjeceni(velicina, false);

	putanja.push_back(make_pair(from, 0));
	vrijdnosti[from] = 0;

	for (int i = 0; i < velicina - 1; i++)
	{
		int U = nadjiNajmanji(vrijdnosti, posjeceni);
		posjeceni[U] = true;
		for (int j = 0; j < velicina; j++)
		{
			if
				(
					matrica[U][j] != 0 && 
					vrijdnosti[U] != INT_MAX &&
					(vrijdnosti[U] + matrica[U][j] < vrijdnosti[j])
				)
			{
				vrijdnosti[j] = vrijdnosti[U] + matrica[U][j];
				putanja.push_back(make_pair(U, vrijdnosti[U] + matrica[U][j]));
			}
		}
	}

	float sum2 = 0;
	for (auto& i : putanja)
	{
		cout << "Vrh " << i.first << "\tTezina: " << i.second << "\n";
		sum += i.second;
	}
	cout << "Suma :" << sum << endl;

	cout << "\n\nfrom " << from << "  to " << end << "\n";
	for (auto& i : putanja)
	{
		cout << "Vrh : " << i.first << "   Tezina: " << i.second << "\n";
		if (i.first == end)
			break;
		sum2 += i.second;
	}
	cout << sum2;

}

int main()
{
	int matrica[velicina][velicina] =
	{
		{0	,0	,9	,7	,15	,6},
		{0	,0	,0	,7	,9	,0},
		{0	,12 ,0	,16	,14,0},
		{12	,4	,0	,0	,0	,21},
		{0	,0	,5	,0	,0	,0},
		{19	,0	,51	,0	,16	,0}
	};

	for (int i = 0; i < velicina; i++)
	{
		for (int j = 0; j < velicina; j++)
		{
			cout << matrica[i][j] << "   ";
		}
		cout << endl;
	}

	int from = 0, to = 1;
	dijkstra(matrica,from,to);


	system("pause > 0");
	return 0;
}