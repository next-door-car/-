#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm> // ��Ӹ�ͷ�ļ���ʹ��std::remove_if��std::isspace
#include "Books.h"
using namespace std;
int detection = 0;
void Books_eart()
{
	if (mima_flag == 0)
	{
		cout << "- - - - - - - - - -��ʹ�ù���ԱȨ��- - - - - - - - - -" << endl;
	}
	else
	{
		ofstream file("111.txt", std::ios::out | std::ios::trunc);
		if (file.is_open()) {
			file.close();
			cout << "- - - - - - - - - -�ɹ�����������- - - - - - - - - -" << endl;
		}
		else {
			cout << "- - - - - - - - - -�޷����ļ�- - - - - - - - - -" << endl;
		}
	}
}
void SJ_eart()
{
	
		ofstream file("222.txt", std::ios::out | std::ios::trunc);
		if (file.is_open()) {
			file.close();
			cout << "- - - - - - - - - -�ɹ�����������- - - - - - - - - -" << endl;
		}
		else {
			cout << "- - - - - - - - - -�޷����ļ�- - - - - - - - - -" << endl;
		}
}
string CharToStr(char* contentChar) //charתstring
{
	string tempStr;
	for (int i = 0; contentChar[i] != '\0'; i++)
	{
		tempStr += contentChar[i];
	}
	return tempStr;
}
void Books_delect(int x)  //ɾ����x��
{
	ifstream Books_delect;
	Books_delect.open("111.txt");

	string strFileData = "";
	int line = 1;
	char lineData[1024] = { 0 };
	while (Books_delect.getline(lineData, sizeof(lineData)))
	{
		if (line == x)
		{
			strFileData += "\n";
		}
		else
		{
			strFileData += CharToStr(lineData);
			strFileData += "\n";
		}
		line++;
	}
	Books_delect.close();

	//д���ļ�
	ofstream out;
	out.open("111.txt");
	out.flush();
	out << strFileData;
	out.close();
}
void SJ_delect(int x)  //ɾ����x��
{
	ifstream SJ_delect;
	SJ_delect.open("222.txt");

	string strFileData = "";
	int line = 1;
	char lineData[1024] = { 0 };
	while (SJ_delect.getline(lineData, sizeof(lineData)))
	{
		if (line == x)
		{
			strFileData += "\n";
		}
		else
		{
			strFileData += CharToStr(lineData);
			strFileData += "\n";
		}
		line++;
	}
	SJ_delect.close();

	//д���ļ�
	ofstream out;
	out.open("222.txt");
	out.flush();
	out << strFileData;
	out.close();
}
int Books_line()  //�ļ�����
{
	ifstream Books_line;
	Books_line.open("111.txt", ios::in);
	int lines = 0;
	string line;
	if (Books_line.is_open())
	{
		while (getline(Books_line, line))
		{
			lines++;
		}
		Books_line.close();
	}
	return lines;
}
int SJ_line()  //�ļ�����
{
	ifstream SJ_line;
	SJ_line.open("222.txt", ios::in);
	int lines = 0;
	string line;
	if (SJ_line.is_open())
	{
		while (getline(SJ_line, line))
		{
			lines++;
		}
		SJ_line.close();
	}
	return lines;
}
string arr_init(int x) //��ȡ�ļ�x�е����ݷ���string����
{
	ifstream inFile;
	inFile.open("111.txt", ios::out);

	string arr;
	string line;
	int currentLine = 1;
	while (getline(inFile, line))
	{
		if (currentLine == x) {
			arr = line;
			break;
		}
		currentLine++;
	}
	return arr;
}
string SJ_init(int x) //��ȡ�ļ�x�е����ݷ���string����
{
	ifstream inFile;
	inFile.open("222.txt", ios::out);

	string arr;
	string line;
	int currentLine = 1;
	while (getline(inFile, line))
	{
		if (currentLine == x) {
			arr = line;
			break;
		}
		currentLine++;
	}
	return arr;
}

void line_write(int x, const char* crr)
{
	vector<string> lines; // �洢�ļ��е�ÿһ��
	fstream lines_WJ;
	lines_WJ.open("111.txt", ios::in | ios::out);
	string line;
	int currentLine = 1;
	while (getline(lines_WJ, line)) {
		if (currentLine == x)
		{
			string newLine(crr); // �� char* ת��Ϊ string
			line = newLine;
		}
		currentLine++;
		lines.push_back(line); // ��ÿһ����ӵ�������
	}
	lines_WJ.close(); // �ر������ļ�

	ofstream line_out;
	line_out.open("111.txt", ios::out | ios::trunc); // ����ļ�д��
	for (const string& l : lines)
	{
		line_out << l << endl; // ���޸ĺ������д���ļ�
	}
	line_out.close(); // �ر�����ļ�
}
int WJ_line()
{
	ifstream inputFile("111.txt");
	if (!inputFile) {
		cerr << "�޷����ļ�" << endl;
		return 0;
	}
	string line;
	int lineCount = 0;
	while (getline(inputFile, line)) {
		line.erase(remove_if(line.begin(), line.end(), isspace), line.end());
		if (!line.empty()) {
			lineCount++;
		}
	}
	inputFile.close();
	//cout << "�ļ��ܹ��� " << lineCount << " ��" << endl;
	return lineCount;
}

void WJ_delet()
{
	    string data;
		int data_line;
		string zrr;
		cout << "- - - - - - - - - -����������-1" << endl;
		cin >> data_line;
		cout << "- - - - - - - - - -�����������" << endl;
		cin >> zrr;
		ofstream afile;
		afile.open("111.txt", ios::out || ios::trunc);
		int l = 0;
		int line = Books_line();
		string arr;

		if (data_line == -1)
		{
			for (int j = 1; j <= line; j++)
			{
				arr = arr_init(j);
				if (arr == zrr)
				{
					Books_delect(j);
					cout << "- - - - - - - - - -����ɹ�- - - - - - - - - -" << endl;
				}
			}
		}
		ofstream  file;
		file.open("222.txt", ios::out | ios::app);//׷��
		cin >> data;
		file << data << endl; //��data�е�����д�뵽�ļ���
		file.close();
		cout << "- - - - - - - - - -���ͬ���ɹ�- - - - - - - - - -" << endl;

		afile.close();
	
	
}
void SJ_append()
{
	int count = 0;
	string SJ_flag;
	while (!count)
	{
		cout << "- - - - - - - - - -����������鼮����- - - - - - - - - -" << endl;
		ofstream  file;
		file.open("222.txt", ios::out | ios::app);//׷��
		char Data[100];
		cin >> Data;
		file << Data << endl; //��data�е�����д�뵽�ļ���
		cout << "- - - - - - - - - -���ӳɹ�- - - - - - - - - -" << endl;
		cout << "- - - - - - - - - -�Ƿ���Ҫ��������?- - - - - - - - - -" << endl;
		cin >> SJ_flag;
		if (SJ_flag == "��")
		{
			count = 0;
		}
		else
			count = 1;
		file.close();
	}

}
int books_detection(string arr)
{
	ofstream afile;
	afile.open("222.txt", ios::out || ios::trunc);
	int l = 0;
	int line = SJ_line();
	string crr;

	for (int j = 1; j <= line; j++)
	{
		crr = SJ_init(j);
		if (crr == arr)
		{
			detection = 1;
		}
	}
	afile.close();
	return 0;
}
void WJ_append()
{
	string zrr;
	int count = 0;
	string jieyue_flag;
	while (!count)
	{
		cout << "- - - - - - - - - -������ĵ��鼮����- - - - - - - - - -" << endl;
		ofstream  file;
		file.open("111.txt", ios::out | ios::app);//׷��
		string Data;
		cin >> Data;
		if (Data == "exit")
		{
			break;
		}
		else
		{
			books_detection(Data); //����鼮�Ƿ����
			if (detection == 1)
			{
				zrr = Data;
				file << Data << endl; //��data�е�����д�뵽�ļ���
				cout << "- - - - - - - - - -���ĳɹ�- - - - - - - - - -" << endl;

				ofstream afile;
				afile.open("222.txt", ios::out || ios::trunc);
				int l = 0;
				int line = SJ_line();
				string arr;

				for (int j = 1; j <= line; j++)
				{
					arr = SJ_init(j);
					if (arr == zrr)
					{
						SJ_delect(j);
					}
				}
				cout << "- - - - - - - - - -���ͬ���ɹ�- - - - - - - - - -" << endl;

				cout << "- - - - - - - - - -�Ƿ���Ҫ��������?- - - - - - - - - -" << endl;
				cin >> jieyue_flag;
				if (jieyue_flag == "��")
				{
					count = 0;
				}
				else
					count = 1;
				file.close();
				detection = 0;
			}
			else
			{
				cout << "- - - - - - - - - -�����û�и��鼮- - - - - - - - - -" << endl;
				cout << "- - - - - - - - - - - -������ѡ��- - - - - - - - - -" << endl;
			}
		}
	}
		

}//ִ��һ�λ����ļ���д��һ��
void WJ_Read()
{
	int allbooks = Books_line();//��ȥ�ո�;
	
	if (allbooks != 0)
	{
		cout << "- - - - - - - - - -�ѽ��鼮���£�" << endl;
		ifstream  Read;
		Read.open("111.txt", ios::in);      //��ģʽ
		string s;
		while (Read >> s)	    //һֱ�����ļ�ĩβ 
			cout << s << endl; //��ʾ��ȡ���� 
		Read.close();//�ر��ļ�
	}
	else
	{
		cout<<"- - - - - - - - - -δ�����鼮- - - - - - - - - -"<<endl;
	}
}
void SJ_Read()
{
	int allbooks = SJ_line();//��ȥ�ո�;

	if (allbooks != 0)
	{
		cout << "- - - - - - - - - -�鼮�б����£�" << endl;
		ifstream  Read;
		Read.open("222.txt", ios::in);      //��ģʽ
		string s;
		while (Read >> s)	    //һֱ�����ļ�ĩβ 
			cout << s << endl; //��ʾ��ȡ���� 
		Read.close();//�ر��ļ�
	}
	else
	{
		cout << "- - - - - - - - - -δ�����鼮- - - - - - - - - -" << endl;
	}
}