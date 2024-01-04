#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Books.h"
#include "Permission.h"
#include "Books.h"
#include "ui.h"


int mima_flag = 0;
int Card = 0;	
int mui = 0;
int main()
{
	
	cout << "- - - - - - - - - -请输入ID信息- - - - - - - - - -" << endl;
	Permission();
	while (1)
	{
		
		if (Card == 1)
		{
			break;
		}
		else
		{
			ui();
		}
	}
	cout << "- - - - - - - - - -管理系统已关闭- - - - - - - - - -" << endl;

	return 0;
}