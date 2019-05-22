#include <iostream>

struct stud
{
	int sk;
	stud* next;

}*h, * n, * t, *t2, *t3;

int DydzioNusakymas()
{
	int x;
	std::cout << "Iveskite, kiek skaiciu sudarys skaiciu seka: ";
	for (int i = 0; i < 1; i++)
	{
		std::cin >> x;
		if (std::cin.fail() || x < 0)
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Kazka blogai ivedei, bandyk vel... " << std::endl;
			i--;
		}
		else if (x == 1)
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Vieno elemento sortint neimanoma, nera su kuo lyginti... " << std::endl;
			i--;
		}
		else if (x == 0)
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Saraso negali sudaryti 0 elementu, iveskite kita skaiciu... " << std::endl;
			i--;
		}
	}
	return x;
}

void ListoKurimas(int x)
{
	int a;
	for (int i = 0; i < x; i++)
	{
		for (int o = 0; o < 1; o++)
		{
			std::cout << "Iveskite skaiciu - ";
			std::cin >> a;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore();
				std::cout << "Iveskite SKAICIU... " << std::endl;
				o--;
			}
		}
		n = new stud;
		if (i == 0) h = n;
		else t->next = n;
		t = n;
		n->sk = a;
	}
}

void Sortinimas(int x)
{
	int kart = 1;
	for (int i = x-1; i > 0; i--)
	{
		if (kart == 0) return;
		std::cout << "tikrinu..." << std::endl;
		kart = 0;
		t = h;
		t2 = t->next;
		for (int k = i; k > 0; k--)
		{
			if (t->sk > t2->sk)
			{
				t->next = t2->next;
				t2->next = t;
				if (t == h)	h = t2;
				else t3->next = t2;
				kart++;
				t = t2;
				t2 = t2->next;
				kart++;
			}
			if (t == h)t3 = h;
			else t3 = t3->next;
			t = t->next;
			t2 = t2->next;
		}
	}
}

void Spausdinimas(int x)
{
	t = h;
	for (int i = 0; i < x; i++)
	{
		std::cout << t->sk << " ";
		if (i > 0 && i%10 == 0)std::cout << std::endl;
		if (x - 1 != i)t = t->next;
	}
	std::cout << std::endl;
}

int main()
{
	int x = DydzioNusakymas();
	if (x > 1)
	{
		ListoKurimas(x);
		Sortinimas(x);
		Spausdinimas(x);
	}
	return 0;
}
