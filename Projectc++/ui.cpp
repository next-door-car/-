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
		cout << "- - - - - - - - - -��ѡ����Ҫ�ķ���- - - - - - - - - -" << endl;
		cout << "- - - - - - - - - -����1���н��ķ���- - - - - - - - - -" << endl;
		cout << "- - - - - - - - - -����2���в��ķ���- - - - - - - - - -" << endl;
		cout << "- - - - - - - - - -����3���л������- - - - - - - - - -" << endl;
		cout << "- - - - - - - - - -����4������ܷ���- - - - - - - - - -" << endl;
		cout << "- - - - - - - - - -����0�˳�����- - - - - - - - - - - -" << endl;
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
			cout << "�����������������" << endl;
		}
	}
	else if (mui == 1)
	{
		string object;
		int survice1, survice2;
		cout << "- - - - - - - - - -������������- - - - - - - - - -" << endl;
		cin >> object;
		if (object == "�鼮")
		{
			cout << "- - - - - - - - - -��ѡ����Ҫ�ķ���- - - - - - - - - - " << endl;
			cout << "- - - - - - - - - -����1���н��ķ���- - - - - - - - - -" << endl;
			cout << "- - - - - - - - - -����2���в��ķ���- - - - - - - - - -" << endl;
			cout << "- - - - - - - - - -����3���л������- - - - - - - - - -" << endl;
			cout << "- - - - - - - - - -����4������ܷ���- - - - - - - - - -" << endl;
			cout << "- - - - - - - - - -����0�˳�����- - - - - - - - - - - -" << endl;
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
				cout << "�����������������" << endl;
			}
		}
		else if(object == "���")
		{
			cout << "- - - - - - - - - -��ѡ����Ҫ�ķ���- - - - - - - - - - " << endl;
			cout << "- - - - - - - - - -����1��ܼ����鼮- - - - - - - - - -" << endl;
			cout << "- - - - - - - - - -����2�������- - - - - - - - - - - -" << endl;
			cout << "- - - - - - - - - -����3�������鼮- - - - - - - - - -" << endl;
			cout << "- - - - - - - - - -����0�˳�����- - - - - - - - - - - -" << endl;
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
				cout << "�����������������" << endl;
			}

		}
		else
		{
			cout << "�����������������" << endl;
		}
		
		

		}
	else
	{
		cout << "ϵͳ���ִ���" << endl;
	}

	
}
