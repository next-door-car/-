#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Permission.h"

void Permission()
{
	string ID;
	string mima;
	cin >> ID;
	if (ID == "student")
	{
		mima_flag = 0;
		cout << "- - - - - - - - - -��ӭ��½- - - - - - - - - -" << endl;
	}
	if (ID == "teacher")
	{
		cout << "- - - - - - - - - -�������Ա����- - - - - - - - - -" << endl;
		cin >> mima;
		if (mima == "123456")
		{
			mima_flag = 1;
			mui = 1;
			cout << "- - - - - - - - - -��ӭ��½- - - - - - - - - -" << endl;
		}
	
	}

}