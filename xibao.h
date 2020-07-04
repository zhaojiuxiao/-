#pragma once
#include<easyx.h>
class xibao {
private:
	int x, y;
	int zt;
	int zt1;
public:

	xibao()
	{
		x = 0;
		y = 0;
		zt = 0;
		zt1 = 0;
	}


	void fzzb(int a, int b)//对坐标赋值
	{
		x = a;
		y = b;
	}

	void fzzt(int x)//对状态赋值
	{
		zt = x;
	}

	int fhx()
	{
		return x;
	}

	int fhy()
	{
		return y;
	}

	int fhzt()//返回状态
	{
		return zt;
	}

	int fhzt1()
	{
		return zt1;
	}

	void lj(int x)//逻辑
	{

		switch (x)
		{
		case 3: {zt1 = 1; break; }
		case 2: {zt1 = zt; break; }
		default: {zt1 = 0; break; }
		}

	}

	void put()//对地图进行填充
	{

		if (zt == 0)
		{
			setfillcolor(WHITE);
		}
		else
		{
			setfillcolor(BLACK);
		}
		
	}

	void gbzt() {
		zt = zt1;
		zt1 = 0;
	}

	void ljzt(xibao a[102][102], int i, int j) {
		int c;
		c = a[i - 1][j - 1].fhzt() + a[i - 1][j].fhzt() + a[i - 1][j + 1].fhzt() +
			a[i][j + 1].fhzt() + a[i][j - 1].fhzt() + a[i + 1][j - 1].fhzt() + a[i + 1][j].fhzt() + a[i + 1][j + 1].fhzt();
		a[i][j].lj(c);
	}

};