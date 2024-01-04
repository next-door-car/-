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
		cout << "- - - - - - - - - -»¶Ó­µÇÂ½- - - - - - - - - -" << endl;
	}
	if (ID == "teacher")
	{
		cout << "- - - - - - - - - -ÊäÈë¹ÜÀíÔ±ÃÜÂë- - - - - - - - - -" << endl;
		cin >> mima;
		if (mima == "123456")
		{
			mima_flag = 1;
			mui = 1;
			cout << "- - - - - - - - - -»¶Ó­µÇÂ½- - - - - - - - - -" << endl;
		}
	
	}

}