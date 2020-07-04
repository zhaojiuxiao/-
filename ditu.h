#pragma once
#include<easyx.h>
#include"xibao.h"

class ditu {
public :
	void shengcheng() {
		initgraph(700, 700);
	}
	
	void tianchong(int x,int y)
	{
		solidrectangle(x * 6 + 50, y * 6 + 50, x * 6 + 56, y * 6 + 56);
	}

};