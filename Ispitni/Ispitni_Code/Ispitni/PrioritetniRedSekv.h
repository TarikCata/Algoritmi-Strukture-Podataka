#include <iostream>
#include "Tacka3D.h"
using namespace std;

template <class T>
class PrioritetniRedSekv
{
	T* niz;
	int trenutno;
	int velicina;
	void prosiri_niz()
	{
		velicina *= 2;
		T* temp = new T[velicina];
		for (int i = 0; i < trenutno; i++)
		{
			temp[i] = niz[i];
		}
		delete[] niz;
		niz = temp;
	}
	int udaljenost(Tacka3D& tacka)
	{
		return int(sqrt(pow(0 - tacka.x, 2) + pow(0 - tacka.y, 2) + pow(0 - tacka.z, 2)));
	}
public:
	PrioritetniRedSekv(int vel = 10)
	{
		velicina = vel;
		trenutno = 0;
		niz = new T[velicina];
	}
	void dodaj(T& obj)
	{
		if (isFull())
			prosiri_niz();
		niz[trenutno] = obj;
		trenutno++;
	}
	T& ukloni()
	{
		if (isEmpty())
			throw exception("Red je prazan..");
		int minDimenzija = INT_MAX;
		int minIndeks = -1;
		for (int i = 0; i < trenutno; i++)
		{
			int d = udaljenost(niz[i]);
			if (d < minDimenzija)
			{
				minDimenzija = d;
				minIndeks = i;
			}
			auto& element = niz[minIndeks];
			trenutno--;
			niz[minIndeks] = niz[trenutno];
			return element;
		}
	}
	bool isEmpty() const { return velicina == 0; }
	bool isFull() const { return trenutno == velicina; }
	void print()
	{
		for (int i = 0; i < trenutno; i++)
		{
			cout << i << ": ";
			cout << niz[i];
			cout << endl;
		}
	}
	~PrioritetniRedSekv()
	{
		delete[] niz;
	}
};