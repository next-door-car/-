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
	
	cout << "- - - - - - - - - -������ID��Ϣ- - - - - - - - - -" << endl;
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
	cout << "- - - - - - - - - -����ϵͳ�ѹر�- - - - - - - - - -" << endl;

	return 0;
}