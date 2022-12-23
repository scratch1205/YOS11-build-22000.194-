#include<algorithm>
#include<iostream>
#include<cstdio>
#include<windows.h>
#include<ctime>
#include <time.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000)
using namespace std;
	long long i=1,e,o1=0;
	long double o,f=1,k=0,j=0,g=70,n=350,g11=5,n1=50,uiu=0;
	string ti; 
int sz1;
void shezhi(int sz){
	system("cls");
	cout<<"1.改变颜色\n\n";
	cout<<"2.开机设置\n";
	cout<<"3.实验设置\n";
	cout<<"输入：";
	cin>>sz;
	
} 
string Time2Str()

{

    time_t tm;

    time(&tm); //获取time_t类型的当前时间

    char tmp[64];

    strftime(tmp, sizeof(tmp), "%Y-%m-%d %H:%M:%S", localtime(&tm));

    return tmp;

}
POINT p;
HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
HWND h=GetForegroundWindow();
CONSOLE_FONT_INFO consoleCurrentFont;

void printf_red(const char *s)
{
    printf("\033[0m\033[1;2m%s\033[0m", s);
}

void printf_green(const char *s)
{
    printf("\033[0m\033[1;32m%s\033[0m", s);
}

void printf_yellow(const char *s)
{
    printf("\033[0m\033[1;33m%s\033[0m", s);
}

void printf_blue(const char *s)
{
    printf("\033[0m\033[1;34m%s\033[0m", s);
}

void printf_pink(const char *s)
{
    printf("\033[0m\033[1;35m%s\033[0m", s);
}

void printf_cyan(const char *s)
{
    printf("\033[0m\033[1;36m%s\033[0m", s);
}

int  cx   =    GetSystemMetrics(    SM_CXSCREEN   );   
int  cy   =    GetSystemMetrics(    SM_CYSCREEN   );
VOID SetTitle(LPCSTR lpTitle) {
 SetConsoleTitle(/*yangqiyu 2022/12/19*/lpTitle);
}
void hide_cursor()//隐藏光标
{
HANDLE h_GAME =GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_CURSOR_INFO cursor_info;
GetConsoleCursorInfo(h_GAME,&cursor_info);
cursor_info.bVisible=false;
SetConsoleCursorInfo(h_GAME,&cursor_info);
}
void show_cursor()//显示光标
{
HANDLE h_GAME =GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_CURSOR_INFO cursor_info;
GetConsoleCursorInfo(h_GAME,&cursor_info);
cursor_info.bVisible=true;
SetConsoleCursorInfo(h_GAME,&cursor_info);
}
void HideCursor()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);//获取控制台光标信息
	CursorInfo.bVisible = false; //隐藏控制台光标
	SetConsoleCursorInfo(handle, &CursorInfo);//设置控制台光标状态
}
VOID KillConsoleCloseButton(VOID) {
 DeleteMenu(GetSystemMenu(GetConsoleWindow(), FALSE), 
                          SC_CLOSE, MF_DISABLED);
 DrawMenuBar(GetConsoleWindow());
}
void full_screen()
{   
    HWND hwnd = GetForegroundWindow();
    int cx = GetSystemMetrics(SM_CXSCREEN);            /* 屏幕宽度 像素 */
    int cy = GetSystemMetrics(SM_CYSCREEN);            /* 屏幕高度 像素 */

    LONG l_WinStyle = GetWindowLong(hwnd,GWL_STYLE);   /* 获取窗口信息 */
    /* 设置窗口信息 最大化 取消标题栏及边框 */
    SetWindowLong(hwnd,GWL_STYLE,(l_WinStyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_THICKFRAME & ~WS_BORDER);

    SetWindowPos(hwnd, HWND_TOP, 0, 0, cx, cy, 0);
}
void init() {
	SetWindowPos(GetConsoleWindow(), HWND_TOPMOST, 0, 0, cx, cy, SWP_NOSIZE);
	DWORD mode;
	GetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), &mode);
 	mode &= ~ENABLE_QUICK_EDIT_MODE;
	SetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), mode);
	SetWindowLong(GetConsoleWindow(), GWL_STYLE, GetWindowLong(GetConsoleWindow(), GWL_STYLE) & ~WS_CAPTION);
}




bool kj=1;
int windowsXPkj=5;
int windows11kj=10;
int choose;

int main(){
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
	DWORD mode;
	GetConsoleMode(hStdin, &mode);
	mode &= ~ENABLE_QUICK_EDIT_MODE;
	SetConsoleMode(hStdin, mode);
	hide_cursor(); 
	full_screen();
	KillConsoleCloseButton();
	system("color 07"); 
	int xt;
	cout<<"Please select a system(1.Windows OS-11     2.DO NOT GOING IN!)";
	cin>>xt;
	init();
	ShowScrollBar(GetConsoleWindow(), SB_VERT, 0);
	
	system("cls");
		if(xt==1){
			ShowScrollBar(GetConsoleWindow(), SB_VERT, 0);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n press anywere to enter BIOS...";
	Sleep(3000); 
	system("cls");
	for(int i=60;i>=1;i--){
		cout<<"Ready in "<<i<<" Seconds"; 
		Sleep(100);
	system("cls");
	}
		hide_cursor(); 
	cout<<"The virtual machine is ready!";
	MessageBeep(MB_ICONINFORMATION);
	Sleep(1000);
	system("cls");
	HideCursor();
	system("color 01"); 
	for(int i=1;i<=windows11kj;i++){
		cout<<"\n\n\n\n\n\n\n";
		cout<<"                                  █ █\n";
		cout<<"                                  █ █\n\n";
		cout<<"                               ....."; 
		Sleep(500);
		system("cls");
		cout<<"\n\n\n\n\n\n\n";
		cout<<"                                  █ █\n";
		cout<<"                                  █ █\n\n";
		cout<<"                               .... ."; 
		Sleep(500);
		system("cls");
		cout<<"\n\n\n\n\n\n\n";
		cout<<"                                  █ █\n";
		cout<<"                                  █ █\n\n";
		cout<<"                               ... .  ."; 
		Sleep(500);
		system("cls");
		cout<<"\n\n\n\n\n\n\n";
		cout<<"                                  █ █\n";
		cout<<"                                  █ █\n\n";
		cout<<"                               .. .  .  ."; 
		Sleep(500);
		system("cls");
		cout<<"\n\n\n\n\n\n\n";
		cout<<"                                  █ █\n";
		cout<<"                                  █ █\n\n";
		cout<<"                               . .  .  .."; 
		Sleep(500);
		system("cls");
		cout<<"\n\n\n\n\n\n\n";
		cout<<"                                  █ █\n";
		cout<<"                                  █ █\n\n";
		cout<<"                                .   . ..."; 
		Sleep(500);
		system("cls");
		cout<<"\n\n\n\n\n\n\n";
		cout<<"                                  █ █\n";
		cout<<"                                  █ █\n\n";
		cout<<"                                    . ...."; 
		Sleep(500);
		system("cls");
	}
	
	MessageBeep(MB_ICONINFORMATION);
	Sleep(2000);
		while(1) {  
		
string atime=Time2Str();
		cout<<"tips:疯狂按就可以到达应用 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"______________________________________________________________________\n";
		cout<<"█ █                                                "<<atime.c_str()<<"\n";
		cout<<"█ █                                               ";                       			//循环检测
		if(KEY_DOWN(VK_LBUTTON))){  			//鼠标左键按下
			POINT p;
			GetCursorPos(&p);
			ScreenToClient(h,&p);               //获取鼠标在窗口上的位置
			GetCurrentConsoleFont(hOutput, FALSE, &consoleCurrentFont); //获取字体信息
			int x=p.x/=consoleCurrentFont.dwFontSize.X;
			int y=p.y/=consoleCurrentFont.dwFontSize.Y;
			if(1){
				system("cls");
				cout<<"tips:疯狂按就可以到达应用 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"______________________________________________________________________\n";
		cout<<"■■                                                "<<atime.c_str()<<"\n";
		cout<<"■■                                               "; 
		Sleep(1000);                      			
				system("cls");
				Sleep(1000);
				cout<<"正在加载开始菜单。。。"; 
				Sleep(1000); 
				system("cls"); 
				cout<<"开始\n\n";
				cout<<"___________________   ________________\n"; 
				cout<<"|                 |   |              |\n";
				cout<<"|                 |   |              |\n";
				cout<<"|    1.记事本     |   |   2.设置     |\n";
				cout<<"|                 |   |              |\n";
				cout<<"|_________________|   |______________|\n";
				cout<<"____________   _______________________\n";
				cout<<"|3.应用市场|  |                      |\n";
				cout<<"|（未开放）|  |     4.虚拟机         |\n";
				cout<<"|__________|  |______________________|";
				cout<<"\n 请输入(光标不显示)："; 
				cin>>choose;
				if(choose==1){
					system("title 记事本");
					system("cls");
					cout<<"欢迎来到记事本！";
					Sleep(1000);
					system("cls");
					cout<<"购买记事本365可解锁高级版!\n______________________________________________________________________";
					Sleep(1000);
					system("cls");
					string t;
					string s;
					cout<<"记事本测试版（转载于LOS）\n";
				    cout<<"编译日期:"<<atime.c_str()<<"\n";
					cout<<"______________________________________________________________________\n";
				    cout<<"按换行停止输入\n";
				    getline(cin,t); 
				    s+=t+'\n';
				    cin.clear();
				    cout<<"\n文件目录：";
				    string a;
				    getline(cin,a);
				    cout<<"\n文件名(加后缀名):";
				    string r;
				    getline(cin,r);
				    a+=r;
				    FILE* fp=fopen(a.c_str(),"w");
				    fprintf(fp,s.c_str());
				    fclose(fp);
				    cout<<"写入完成！";
				    Sleep(666);
				}
				if(choose==2){
					shezhi(sz1);
					if(sz1==1){
						system("mode con cols=25 lines=25");
			system("cls");
		    cout<<"0.黑色      8.灰色\n1.蓝色      9.淡蓝色\n2.绿色      10.淡绿色\n3.浅绿色    11.淡浅绿色\n";
		    cout<<"4.红色      12.淡红色\n5.紫色      13.淡紫色\n6.黄色      14.淡黄色\n7.白色      （任意数字）亮白色\n";
		    cout<<"背景颜色：";
		    cin>>i;
			system("cls");
		    cout<<"0.黑色      8.灰色\n1.蓝色      9.淡蓝色\n2.绿色      10.淡绿色\n3.浅绿色    11.淡浅绿色\n";
		    cout<<"4.红色      12.淡红色\n5.紫色      13.淡紫色\n6.黄色      14.淡黄色\n7.白色      （任意数字）亮白色\n";
		    cout<<"字体颜色：";
		    cin>>e;
			if(e==0){
			if(i==0){
				system("color 00");
			}else if(i==1){
				system("color 10");
			}else if(i==2){
				system("color 20");
			}else if(i==3){
				system("color 30");
			}else if(i==4){
				system("color 40");
			}else if(i==5){
				system("color 50");
			}else if(i==6){
				system("color 60");
			}else if(i==7){
				system("color 70");
			}else if(i==8){
				system("color 80");
			}else if(i==9){
				system("color 90");
			}else if(i==10){
				system("color a0");
			}else if(i==11){
				system("color b0");
			}else if(i==12){
				system("color c0");
			}else if(i==13){
				system("color d0");
			}else if(i==14){
				system("color e0");
			}else{
				system("color f0");
			}
			}else if(e==1){
				if(i==0){
				system("color 01");
			}else if(i==1){
				system("color 11");
			}else if(i==2){
				system("color 21");
			}else if(i==3){
				system("color 31");
			}else if(i==4){
				system("color 41");
			}else if(i==5){
				system("color 51");
			}else if(i==6){
				system("color 61");
			}else if(i==7){
				system("color 71");
			}else if(i==8){
				system("color 81");
			}else if(i==9){
				system("color 91");
			}else if(i==10){
				system("color a1");
			}else if(i==11){
				system("color b1");
			}else if(i==12){
				system("color c1");
			}else if(i==13){
				system("color d1");
			}else if(i==14){
				system("color e1");
			}else{
				system("color f1");
			}
			}else if(e==2){
				if(i==0){
				system("color 02");
			}else if(i==1){
				system("color 12");
			}else if(i==2){
				system("color 22");
			}else if(i==3){
				system("color 32");
			}else if(i==4){
				system("color 42");
			}else if(i==5){
				system("color 52");
			}else if(i==6){
				system("color 62");
			}else if(i==7){
				system("color 72");
			}else if(i==8){
				system("color 82");
			}else if(i==9){
				system("color 92");
			}else if(i==10){
				system("color a2");
			}else if(i==11){
				system("color b2");
			}else if(i==12){
				system("color c2");
			}else if(i==13){
				system("color d2");
			}else if(i==14){
				system("color e2");
			}else{
				system("color f2");
			}
			}else if(e==3){
				if(i==0){
				system("color 03");
			}else if(i==1){
				system("color 13");
			}else if(i==2){
				system("color 23");
			}else if(i==3){
				system("color 33");
			}else if(i==4){
				system("color 43");
			}else if(i==5){
				system("color 53");
			}else if(i==6){
				system("color 63");
			}else if(i==7){
				system("color 73");
			}else if(i==8){
				system("color 83");
			}else if(i==9){
				system("color 93");
			}else if(i==10){
				system("color a3");
			}else if(i==11){
				system("color b3");
			}else if(i==12){
				system("color c3");
			}else if(i==13){
				system("color d3");
			}else if(i==14){
				system("color e3");
			}else{
				system("color f3");
			}
			}else if(e==4){
				if(i==0){
				system("color 04");
			}else if(i==1){
				system("color 14");
			}else if(i==2){
				system("color 24");
			}else if(i==3){
				system("color 34");
			}else if(i==4){
				system("color 44");
			}else if(i==5){
				system("color 54");
			}else if(i==6){
				system("color 64");
			}else if(i==7){
				system("color 74");
			}else if(i==8){
				system("color 84");
			}else if(i==9){
				system("color 94");
			}else if(i==10){
				system("color a4");
			}else if(i==11){
				system("color b4");
			}else if(i==12){
				system("color c4");
			}else if(i==13){
				system("color d4");
			}else if(i==14){
				system("color e4");
			}else{
				system("color f4");
			}
			}else if(e==5){
				if(i==0){
				system("color 05");
			}else if(i==1){
				system("color 15");
			}else if(i==2){
				system("color 25");
			}else if(i==3){
				system("color 35");
			}else if(i==4){
				system("color 45");
			}else if(i==5){
				system("color 55");
			}else if(i==6){
				system("color 65");
			}else if(i==7){
				system("color 75");
			}else if(i==8){
				system("color 85");
			}else if(i==9){
				system("color 95");
			}else if(i==10){
				system("color a5");
			}else if(i==11){
				system("color b5");
			}else if(i==12){
				system("color c5");
			}else if(i==13){
				system("color d5");
			}else if(i==14){
				system("color e5");
			}else{
				system("color f5");
			}
			}else if(e==6){
				if(i==0){
				system("color 06");
			}else if(i==1){
				system("color 16");
			}else if(i==2){
				system("color 26");
			}else if(i==3){
				system("color 36");
			}else if(i==4){
				system("color 46");
			}else if(i==5){
				system("color 56");
			}else if(i==6){
				system("color 66");
			}else if(i==7){
				system("color 76");
			}else if(i==8){
				system("color 86");
			}else if(i==9){
				system("color 96");
			}else if(i==10){
				system("color a6");
			}else if(i==11){
				system("color b6");
			}else if(i==12){
				system("color c6");
			}else if(i==13){
				system("color d6");
			}else if(i==14){
				system("color e6");
			}else{
				system("color f6");
			}
			}else if(e==7){
				if(i==0){
				system("color 07");
			}else if(i==1){
				system("color 17");
			}else if(i==2){
				system("color 27");
			}else if(i==3){
				system("color 37");
			}else if(i==4){
				system("color 47");
			}else if(i==5){
				system("color 57");
			}else if(i==6){
				system("color 67");
			}else if(i==7){
				system("color 77");
			}else if(i==8){
				system("color 87");
			}else if(i==9){
				system("color 97");
			}else if(i==10){
				system("color a7");
			}else if(i==11){
				system("color b7");
			}else if(i==12){
				system("color c7");
			}else if(i==13){
				system("color d7");
			}else if(i==14){
				system("color e7");
			}else{
				system("color f7");
			}
			}else if(e==8){
				if(i==0){
				system("color 08");
			}else if(i==1){
				system("color 18");
			}else if(i==2){
				system("color 28");
			}else if(i==3){
				system("color 38");
			}else if(i==4){
				system("color 48");
			}else if(i==5){
				system("color 58");
			}else if(i==6){
				system("color 68");
			}else if(i==7){
				system("color 78");
			}else if(i==8){
				system("color 88");
			}else if(i==9){
				system("color 98");
			}else if(i==10){
				system("color a8");
			}else if(i==11){
				system("color b8");
			}else if(i==12){
				system("color c8");
			}else if(i==13){
				system("color d8");
			}else if(i==14){
				system("color e8");
			}else{
				system("color f8");
			}
			}else if(e==9){
				if(i==0){
				system("color 09");
			}else if(i==1){
				system("color 19");
			}else if(i==2){
				system("color 29");
			}else if(i==3){
				system("color 39");
			}else if(i==4){
				system("color 49");
			}else if(i==5){
				system("color 59");
			}else if(i==6){
				system("color 69");
			}else if(i==7){
				system("color 79");
			}else if(i==8){
				system("color 89");
			}else if(i==9){
				system("color 99");
			}else if(i==10){
				system("color a9");
			}else if(i==11){
				system("color b9");
			}else if(i==12){
				system("color c9");
			}else if(i==13){
				system("color d9");
			}else if(i==14){
				system("color e9");
			}else{
				system("color f9");
			}
			}else if(e==10){
				if(i==0){
				system("color 0a");
			}else if(i==1){
				system("color 1a");
			}else if(i==2){
				system("color 2a");
			}else if(i==3){
				system("color 3a");
			}else if(i==4){
				system("color 4a");
			}else if(i==5){
				system("color 5a");
			}else if(i==6){
				system("color 6a");
			}else if(i==7){
				system("color 7a");
			}else if(i==8){
				system("color 8a");
			}else if(i==9){
				system("color 9a");
			}else if(i==10){
				system("color aa");
			}else if(i==11){
				system("color ba");
			}else if(i==12){
				system("color ca");
			}else if(i==13){
				system("color da");
			}else if(i==14){
				system("color ea");
			}else{
				system("color fa");
			}
			}else if(e==11){
				if(i==0){
				system("color 0b");
			}else if(i==1){
				system("color 1b");
			}else if(i==2){
				system("color 2b");
			}else if(i==3){
				system("color 3b");
			}else if(i==4){
				system("color 4b");
			}else if(i==5){
				system("color 5b");
			}else if(i==6){
				system("color 6b");
			}else if(i==7){
				system("color 7b");
			}else if(i==8){
				system("color 8b");
			}else if(i==9){
				system("color 9b");
			}else if(i==10){
				system("color ab");
			}else if(i==11){
				system("color bb");
			}else if(i==12){
				system("color cb");
			}else if(i==13){
				system("color db");
			}else if(i==14){
				system("color eb");
			}else{
				system("color fb");
			}
			}else if(e==12){
				if(i==0){
				system("color 0c");
			}else if(i==1){
				system("color 1c");
			}else if(i==2){
				system("color 2c");
			}else if(i==3){
				system("color 3c");
			}else if(i==4){
				system("color 4c");
			}else if(i==5){
				system("color 5c");
			}else if(i==6){
				system("color 6c");
			}else if(i==7){
				system("color 7c");
			}else if(i==8){
				system("color 8c");
			}else if(i==9){
				system("color 9c");
			}else if(i==10){
				system("color ac");
			}else if(i==11){
				system("color bc");
			}else if(i==12){
				system("color cc");
			}else if(i==13){
				system("color dc");
			}else if(i==14){
				system("color ec");
			}else{
				system("color fc");
			}
			}else if(e==13){
				if(i==0){
				system("color 0d");
			}else if(i==1){
				system("color 1d");
			}else if(i==2){
				system("color 2d");
			}else if(i==3){
				system("color 3d");
			}else if(i==4){
				system("color 4d");
			}else if(i==5){
				system("color 5d");
			}else if(i==6){
				system("color 6d");
			}else if(i==7){
				system("color 7d");
			}else if(i==8){
				system("color 8d");
			}else if(i==9){
				system("color 9d");
			}else if(i==10){
				system("color ad");
			}else if(i==11){
				system("color bd");
			}else if(i==12){
				system("color cd");
			}else if(i==13){
				system("color dd");
			}else if(i==14){
				system("color ed");
			}else{
				system("color fd");
			}
			}else if(e==14){
				if(i==0){
				system("color 0e");
			}else if(i==1){
				system("color 1e");
			}else if(i==2){
				system("color 2e");
			}else if(i==3){
				system("color 3e");
			}else if(i==4){
				system("color 4e");
			}else if(i==5){
				system("color 5e");
			}else if(i==6){
				system("color 6e");
			}else if(i==7){
				system("color 7e");
			}else if(i==8){
				system("color 8e");
			}else if(i==9){
				system("color 9e");
			}else if(i==10){
				system("color ae");
			}else if(i==11){
				system("color be");
			}else if(i==12){
				system("color ce");
			}else if(i==13){
				system("color de");
			}else if(i==14){
				system("color ee");
			}else{
				system("color fe");
			}
			}else{
				if(i==0){
				system("color 0f");
			}else if(i==1){
				system("color 1f");
			}else if(i==2){
				system("color 2f");
			}else if(i==3){
				system("color 3f");
			}else if(i==4){
				system("color 4f");
			}else if(i==5){
				system("color 5f");
			}else if(i==6){
				system("color 6f");
			}else if(i==7){
				system("color 7f");
			}else if(i==8){
				system("color 8f");
			}else if(i==9){
				system("color 9f");
			}else if(i==10){
				system("color af");
			}else if(i==11){
				system("color bf");
			}else if(i==12){
				system("color cf");
			}else if(i==13){
				system("color df");
			}else if(i==14){
				system("color ef");
			}else{
				system("color ff");
		}
			}
		}
			
				}if(sz1==2){
						int kj;
						system("cls");
						cout<<"1.设置开机时间\n"; 
						cout<<"1.设置开机时间\n"; 
					} 
			}
		}   
		Sleep(1000);
		system("cls");
	}

	}else if(xt==2){
			ShowScrollBar(GetConsoleWindow(), SB_VERT, 0);
			system("color 47");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n prss awere o nter IOS...";
	Sleep(3000); 
	system("cls");
	for(int i=60;i>=1;i--){
		cout<<"redy n "<<"dEAD"<<" Scods"; 
		Sleep(100);
	system("cls");
	}
	cout<<"Te vrta chne s rady!";
	system("cls");
	HideCursor();
	system("color 02");
		
	for(int i=1;i<=windowsXPkj;i++){
	ShowScrollBar(GetConsoleWindow(), SB_VERT, 0);
	HideCursor();
	cout<<"\n\n\n\n                      starting DEADdows.\n";
	
	cout<<"                      █  █  █  █  █  █\n";
	MessageBeep(MB_ICONERROR);
	Sleep(1000);
	system("cls");
	cout<<"\n\n\n\n                      starting windows..\n";
	cout<<"                         █  █  █  █  █\n";
	MessageBeep(MB_ICONERROR);
	Sleep(1000);
	system("cls");
	cout<<"\n\n\n\n                      starting windows...\n";
	cout<<"                            █  █  █  █\n";
	MessageBeep(MB_ICONERROR);
	Sleep(1000);
	system("cls");
	cout<<"\n\n\n\n                      starting windows.\n";
	cout<<"                               █  █  █\n";
	MessageBeep(MB_ICONERROR);
	Sleep(1000);
	system("cls");
	cout<<"\n\n\n\n                      starting windows..\n";
	cout<<"                                  █  █\n";
	MessageBeep(MB_ICONERROR);
	Sleep(1000);
	system("cls");
	cout<<"\n\n\n\n                      starting windows...\n";
	cout<<"                    █               █\n";
	MessageBeep(MB_ICONERROR);
	Sleep(1000);
	system("cls");
	cout<<"\n\n\n\n                      starting windows.\n";
	cout<<"                    █  █              \n";
	MessageBeep(MB_ICONERROR);
	Sleep(1000);
	system("cls");
	cout<<"\n\n\n\n                      starting windows..\n";
	cout<<"                    █  █  █           \n";
	MessageBeep(MB_ICONERROR);
	Sleep(1000);
	system("cls");
	cout<<"\n\n\n\n                      starting windows...\n";
	cout<<"                    █  █  █  █        \n";
	MessageBeep(MB_ICONERROR);
	Sleep(1000);
	system("cls");
	cout<<"\n\n\n\n                      starting windows...       \n";
	cout<<"                    █  █  █  █  █      \n";
	MessageBeep(MB_ICONERROR);
	Sleep(1000);
	system("cls");
	cout<<"\n\n\n\n                      starting windows...       \n";
	cout<<"                    █  █  █  █  █  █    \n";
	MessageBeep(MB_ICONERROR);
	Sleep(1000);
	system("cls");
	}
	}else{
		system("cls");
		for(int i=1;i<=10;i++){
			cout<<"Finding system,Please wait.";
			Sleep(1000);
			system("cls");
			cout<<"Finding system,Please wait. .";
			Sleep(1000);
			system("cls");
			cout<<"Finding system,Please wait. . .";
			Sleep(1000);
			
			system("cls");
		}
	MessageBeep(MB_ICONERROR);
		cout<<"Cannot Finding system "<<"'"<<xt<<"'";
	show_cursor();
}
    return 0;
}
