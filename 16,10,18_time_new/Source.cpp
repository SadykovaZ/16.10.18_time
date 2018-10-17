#include<iostream>
using namespace std;
class time_new
{
private:
	int *h;
	int *m;
	int *s;
public:
	void print()
	{
		cout << *h << ":" << *m << ":" << *s << endl;
	}
	time_new()
	{
		h = new int(0);
		m = new int(0);
		s = new int(0);
	}
	/*time_new(int a)
	{
		h = new int(0);
		m = new int(0);
		s = new int(0);
		setH(a);
		setM(0);
		setS(0);
	}
	time_new(int a, int b)
	{
		h = new int(0);
		m = new int(0);
		s = new int(0);
		setH(a);
		setM(b);
		setS(0);
	}
	time_new(int a, int b, int c)
	{
		h = new int(0);
		m = new int(0);
		s = new int(0);
		setH(a);
		setM(b);
		setS(c);
	}*/
	time_new(int a , int b = 0, int c = 0)
	{
		h = new int(0);
		m = new int(0);
		s = new int(0);
		setH(a);
		setM(b);
		setS(c);
	}
	time_new(const time_new&obj)
	{
		this->h = new int(*obj.h);
		this->m = new int(*obj.m);
		this->s = new int(*obj.s);
	}
	void setH(int a)
	{
		*h = a;
		if (*h < 0 || *h>23)*h = 0;
	}
	void setM(int b)
	{
		*m = b;
		if (*m < 0 || *m>59)*m = 0;
	}
	void setS(int c)
	{
		*s = c;
		if (*s < 0 || *s>59)*s = 0;
	}
	int getH()
	{
		return *h;
	}
	int getM()
	{
		return *m;
	}
	int getS()
	{
		return *s;
	}
	~time_new()
	{
		delete h, m, s;
	}
};
void main()
{
	//конструктор с параметрами по умолчанию
	
	//time_new t;	
	
	time_new t3(11,30);
	time_new t2(t3);
	/*time_new t4(5,0,8);
*/

	t2.print();
	system("pause");
}