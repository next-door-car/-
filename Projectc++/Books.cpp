#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm> // 添加该头文件以使用std::remove_if和std::isspace
#include "Books.h"
using namespace std;
int detection = 0;
void Books_eart()
{
	if (mima_flag == 0)
	{
		cout << "- - - - - - - - - -请使用管理员权限- - - - - - - - - -" << endl;
	}
	else
	{
		ofstream file("111.txt", std::ios::out | std::ios::trunc);
		if (file.is_open()) {
			file.close();
			cout << "- - - - - - - - - -成功清空书架内容- - - - - - - - - -" << endl;
		}
		else {
			cout << "- - - - - - - - - -无法打开文件- - - - - - - - - -" << endl;
		}
	}
}
void SJ_eart()
{
	
		ofstream file("222.txt", std::ios::out | std::ios::trunc);
		if (file.is_open()) {
			file.close();
			cout << "- - - - - - - - - -成功清空书架内容- - - - - - - - - -" << endl;
		}
		else {
			cout << "- - - - - - - - - -无法打开文件- - - - - - - - - -" << endl;
		}
}
string CharToStr(char* contentChar) //char转string
{
	string tempStr;
	for (int i = 0; contentChar[i] != '\0'; i++)
	{
		tempStr += contentChar[i];
	}
	return tempStr;
}
void Books_delect(int x)  //删除第x行
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

	//写入文件
	ofstream out;
	out.open("111.txt");
	out.flush();
	out << strFileData;
	out.close();
}
void SJ_delect(int x)  //删除第x行
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

	//写入文件
	ofstream out;
	out.open("222.txt");
	out.flush();
	out << strFileData;
	out.close();
}
int Books_line()  //文件的行
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
int SJ_line()  //文件的行
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
string arr_init(int x) //读取文件x行的内容返回string类型
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
string SJ_init(int x) //读取文件x行的内容返回string类型
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
	vector<string> lines; // 存储文件中的每一行
	fstream lines_WJ;
	lines_WJ.open("111.txt", ios::in | ios::out);
	string line;
	int currentLine = 1;
	while (getline(lines_WJ, line)) {
		if (currentLine == x)
		{
			string newLine(crr); // 将 char* 转换为 string
			line = newLine;
		}
		currentLine++;
		lines.push_back(line); // 将每一行添加到向量中
	}
	lines_WJ.close(); // 关闭输入文件

	ofstream line_out;
	line_out.open("111.txt", ios::out | ios::trunc); // 清空文件写入
	for (const string& l : lines)
	{
		line_out << l << endl; // 将修改后的内容写回文件
	}
	line_out.close(); // 关闭输出文件
}
int WJ_line()
{
	ifstream inputFile("111.txt");
	if (!inputFile) {
		cerr << "无法打开文件" << endl;
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
	//cout << "文件总共有 " << lineCount << " 行" << endl;
	return lineCount;
}

void WJ_delet()
{
	    string data;
		int data_line;
		string zrr;
		cout << "- - - - - - - - - -还书请输入-1" << endl;
		cin >> data_line;
		cout << "- - - - - - - - - -输入书的名称" << endl;
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
					cout << "- - - - - - - - - -还书成功- - - - - - - - - -" << endl;
				}
			}
		}
		ofstream  file;
		file.open("222.txt", ios::out | ios::app);//追加
		cin >> data;
		file << data << endl; //将data中的数据写入到文件中
		file.close();
		cout << "- - - - - - - - - -书架同步成功- - - - - - - - - -" << endl;

		afile.close();
	
	
}
void SJ_append()
{
	int count = 0;
	string SJ_flag;
	while (!count)
	{
		cout << "- - - - - - - - - -输入增添的书籍名称- - - - - - - - - -" << endl;
		ofstream  file;
		file.open("222.txt", ios::out | ios::app);//追加
		char Data[100];
		cin >> Data;
		file << Data << endl; //将data中的数据写入到文件中
		cout << "- - - - - - - - - -增加成功- - - - - - - - - -" << endl;
		cout << "- - - - - - - - - -是否需要继续加入?- - - - - - - - - -" << endl;
		cin >> SJ_flag;
		if (SJ_flag == "是")
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
		cout << "- - - - - - - - - -输入借阅的书籍名称- - - - - - - - - -" << endl;
		ofstream  file;
		file.open("111.txt", ios::out | ios::app);//追加
		string Data;
		cin >> Data;
		if (Data == "exit")
		{
			break;
		}
		else
		{
			books_detection(Data); //检测书籍是否存在
			if (detection == 1)
			{
				zrr = Data;
				file << Data << endl; //将data中的数据写入到文件中
				cout << "- - - - - - - - - -借阅成功- - - - - - - - - -" << endl;

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
				cout << "- - - - - - - - - -书架同步成功- - - - - - - - - -" << endl;

				cout << "- - - - - - - - - -是否需要继续借阅?- - - - - - - - - -" << endl;
				cin >> jieyue_flag;
				if (jieyue_flag == "是")
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
				cout << "- - - - - - - - - -书架中没有该书籍- - - - - - - - - -" << endl;
				cout << "- - - - - - - - - - - -请重新选择- - - - - - - - - -" << endl;
			}
		}
	}
		

}//执行一次会向文件中写入一行
void WJ_Read()
{
	int allbooks = Books_line();//除去空格;
	
	if (allbooks != 0)
	{
		cout << "- - - - - - - - - -已借书籍如下：" << endl;
		ifstream  Read;
		Read.open("111.txt", ios::in);      //读模式
		string s;
		while (Read >> s)	    //一直读到文件末尾 
			cout << s << endl; //显示读取内容 
		Read.close();//关闭文件
	}
	else
	{
		cout<<"- - - - - - - - - -未借阅书籍- - - - - - - - - -"<<endl;
	}
}
void SJ_Read()
{
	int allbooks = SJ_line();//除去空格;

	if (allbooks != 0)
	{
		cout << "- - - - - - - - - -书籍列表如下：" << endl;
		ifstream  Read;
		Read.open("222.txt", ios::in);      //读模式
		string s;
		while (Read >> s)	    //一直读到文件末尾 
			cout << s << endl; //显示读取内容 
		Read.close();//关闭文件
	}
	else
	{
		cout << "- - - - - - - - - -未借阅书籍- - - - - - - - - -" << endl;
	}
}