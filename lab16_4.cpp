#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &p, int &l, int &s, int &r)
{
	int a = p, b = l, c = s, d = r;
	int x = rand() % 4;
	if (x == 0)
	{
		p = a;
		int y = rand() % 3;
		if (y == 0)
		{
			l = b;
			int z = rand() % 2;
			if (z == 0)
			{
				s = c;
				r = d;
			}
			if (z == 1)
			{
				r = c;
				s = d;
			}
		}
		if (y == 1)
		{
			s = b;
			int z = rand() % 2;
			if (z == 0)
			{
				l = c;
				r = d;
			}
			if (z == 1)
			{
				r = c;
				l = d;
			}
		}
		if (y == 2)
		{
			r = b;
			int z = rand() % 2;
			if (z == 0)
			{
				l = c;
				s = d;
			}
			if (z == 1)
			{
				s = c;
				l = d;
			}
		}
	}
	if (x == 1)
	{
		l = a;
		int y = rand() % 3;
		if (y == 0)
		{
			p = b;
			int z = rand() % 2;
			if (z == 0)
			{
				s = c;
				r = d;
			}
			if (z == 1)
			{
				r = c;
				s = d;
			}
		}
		if (y == 1)
		{
			s = b;
			int z = rand() % 2;
			if (z == 0)
			{
				p = c;
				r = d;
			}
			if (z == 1)
			{
				r = c;
				p = d;
			}
		}
		if (y == 2)
		{
			r = b;
			int z = rand() % 2;
			if (z == 0)
			{
				p = c;
				s = d;
			}
			if (z == 1)
			{
				s = c;
				p = d;
			}
		}
	}
	if (x == 2)
	{
		s = a;
		int y = rand() % 3;
		if (y == 0)
		{
			p = b;
			int z = rand() % 2;
			if (z == 0)
			{
				l = c;
				r = d;
			}
			if (z == 1)
			{
				r = c;
				l = d;
			}
		}
		if (y == 1)
		{
			l = b;
			int z = rand() % 2;
			if (z == 0)
			{
				p = c;
				r = d;
			}
			if (z == 1)
			{
				r = c;
				p = d;
			}
		}
		if (y == 2)
		{
			r = b;
			int z = rand() % 2;
			if (z == 0)
			{
				p = c;
				l = d;
			}
			if (z == 1)
			{
				l = c;
				p = d;
			}
		}
	}
	if (x == 3)
	{
		r = a;
		int y = rand() % 3;
		if (y == 0)
		{
			p = b;
			int z = rand() % 2;
			if (z == 0)
			{
				l = c;
				s = d;
			}
			if (z == 1)
			{
				s = c;
				l = d;
			}
		}
		if (y == 1)
		{
			l = b;
			int z = rand() % 2;
			if (z == 0)
			{
				p = c;
				s = d;
			}
			if (z == 1)
			{
				s = c;
				p = d;
			}
		}
		if (y == 2)
		{
			s = b;
			int z = rand() % 2;
			if (z == 0)
			{
				p = c;
				l = d;
			}
			if (z == 1)
			{
				l = c;
				p = d;
			}
		}
	}
}
