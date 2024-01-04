#include <string>

#ifndef BOOKS_H
#define BOOKS_H

extern int mima_flag;
using namespace std;


void WJ_delet();
void WJ_append();
string arr_init(int x);
void line_write(int x, const char* crr);
void WJ_Read();
void Books_eart();
int Books_line();
string CharToStr(char* contentChar); //char转string
void Books_delect(int x);  //删除第x行

void SJ_append();
void SJ_Read();
int SJ_line();
void SJ_eart();
string SJ_init(int x); //读取文件x行的内容返回string类型
int books_detection(string arr);


#endif // !BOOKS_H
