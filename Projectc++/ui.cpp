#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Books.h"
#include "ui.h"
using namespace std;

void ui()
{
	if (mui == 0)
	{
		int survice;
		cout << "- - - - - - - - - -请选择需要的服务- - - - - - - - - -" << endl;
		cout << "- - - - - - - - - -输入1进行借阅服务- - - - - - - - - -" << endl;
		cout << "- - - - - - - - - -输入2进行查阅服务- - - - - - - - - -" << endl;
		cout << "- - - - - - - - - -输入3进行还书服务- - - - - - - - - -" << endl;
		cout << "- - - - - - - - - -输入4查阅书架服务- - - - - - - - - -" << endl;
		cout << "- - - - - - - - - -输入0退出服务- - - - - - - - - - - -" << endl;
		cin >> survice;
		if (survice == 1)
		{
			WJ_append();
		}
		else if (survice == 2)
		{
			WJ_Read();
		}
		else if (survice == 3)
		{
			WJ_delet();
		}
		else if (survice == 4)
		{
			SJ_Read();
		}
		else if (survice == 0)
		{
			Card = 1;
		}
		else
		{
			cout << "输入错误，请重新输入" << endl;
		}
	}
	else if (mui == 1)
	{
		string object;
		int survice1, survice2;
		cout << "- - - - - - - - - -请输入管理对象- - - - - - - - - -" << endl;
		cin >> object;
		if (object == "书籍")
		{
			cout << "- - - - - - - - - -请选择需要的服务- - - - - - - - - - " << endl;
			cout << "- - - - - - - - - -输入1进行借阅服务- - - - - - - - - -" << endl;
			cout << "- - - - - - - - - -输入2进行查阅服务- - - - - - - - - -" << endl;
			cout << "- - - - - - - - - -输入3进行还书服务- - - - - - - - - -" << endl;
			cout << "- - - - - - - - - -输入4查阅书架服务- - - - - - - - - -" << endl;
			cout << "- - - - - - - - - -输入0退出服务- - - - - - - - - - - -" << endl;
			cin >> survice1;
			if (survice1 == 1)
			{
				WJ_append();
			}
			else if (survice1 == 2)
			{
				WJ_Read();
			}
			else if (survice1 == 3)
			{
				WJ_delet();
			}
			else if (survice1 == 4)
			{
				SJ_Read();
			}
			else if (survice1 == 0)
			{
				Card = 1;
			}
			else
			{
				cout << "输入错误，请重新输入" << endl;
			}
		}
		else if(object == "书架")
		{
			cout << "- - - - - - - - - -请选择需要的服务- - - - - - - - - - " << endl;
			cout << "- - - - - - - - - -输入1书架加入书籍- - - - - - - - - -" << endl;
			cout << "- - - - - - - - - -输入2查阅书架- - - - - - - - - - - -" << endl;
			cout << "- - - - - - - - - -输入3清空书架书籍- - - - - - - - - -" << endl;
			cout << "- - - - - - - - - -输入0退出服务- - - - - - - - - - - -" << endl;
			cin >> survice2;
			if (survice2 == 1)
			{
				SJ_append();
			}
			else if (survice2 == 2)
			{
				SJ_Read();
			}
			else if (survice2 == 3)
			{
				SJ_eart();
			}
			else if (survice2 == 0)
			{
				Card = 1;
			}
			else
			{
				cout << "输入错误，请重新输入" << endl;
			}

		}
		else
		{
			cout << "输入错误，请重新输入" << endl;
		}
		
		

		}
	else
	{
		cout << "系统出现错误" << endl;
	}

	
}
