#include <iostream>
#include <time.h>
#include <windows.h>
#include <conio.h>

using namespace std;
int X,Y;
COORD coord={X=0,Y=0};
void gotoxy(int x,int y){
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void kocok_1(){
	int total1;
	int r[3];
	srand(time(0));
	int x;

	for(int i = 0 ; i < 3 ; i++){
	x=(rand()%8);
	r[i]=x;

	cout<<x<<endl;

	
}
cout<<"\n";
total1=r[0]+r[1]+r[2];
cout <<"total: "<<total1;
cout<<"\n";

}
void kocok_2(){
	int total2;
	int p[3];
	srand(time(0));
	int q;

	for(int i = 0 ; i < 3 ; i++){
	q=(rand()%8);
	p[i]=q;

	cout<<q<<endl;
	
	
}
cout<<"\n";
total2=p[0]+p[1]+p[2];
cout <<"total: "<<total2;
cout<<"\n";

}
void loading(){
char huruf_k[]= {"loading..."};

for(int a=1;a<=7;a++){

gotoxy(55,11); cout<<"BLACKJACK"<<endl;
gotoxy(57,12); cout<<"GAMES"<<endl;
huruf_k[a-1]=toupper(huruf_k[a-1]);
system("Color 70");
	
gotoxy(55,23);
printf(huruf_k);

huruf_k[a-1]=tolower(huruf_k[a-1]);
gotoxy(0,3);	cout<<"======================================================================================================================="<<endl;
gotoxy(0,4);	cout<<"          /\\           __ __           __           /\\           /\\           __ __           __           /\\         "<<endl;
gotoxy(0,5);	cout<<"        /    \\        /  Y  \\        _|  |_        /  \\        /    \\        /  Y  \\        _|  |_        /  \\        "<<endl;
gotoxy(0,6);	cout<<"       /__  __\\       \\     /       |__  __|       \\  /       /__  __\\       \\     /       |__  __|       \\  /        "<<endl;
gotoxy(0,7);	cout<<"         _||_          \\___/          _||_          \\/          _||_          \\___/          _||_          \\/         "<<endl;
gotoxy(0,8);	cout<<"======================================================================================================================="<<endl;
cout<<"\n";
cout<<"\n";
cout<<"\n";	
cout<<"\n";
gotoxy(0,26);	cout<<"======================================================================================================================="<<endl;
gotoxy(0,27);	cout<<"          /\\           __ __           __           /\\           /\\           __ __           __           /\\         "<<endl;
gotoxy(0,28);	cout<<"        /    \\        /  Y  \\        _|  |_        /  \\        /    \\        /  Y  \\        _|  |_        /  \\        "<<endl;
gotoxy(0,29);	cout<<"       /__  __\\       \\     /       |__  __|       \\  /       /__  __\\       \\     /       |__  __|       \\  /        "<<endl;
gotoxy(0,30);	cout<<"         _||_          \\___/          _||_          \\/          _||_          \\___/          _||_          \\/         "<<endl;
gotoxy(0,31);	cout<<"======================================================================================================================="<<endl;
Sleep(1000);
system("cls");

}
}
void pembatas(){
gotoxy(0,3);	cout<<"======================================================================================================================="<<endl;
gotoxy(0,4);	cout<<"          /\\           __ __           __           /\\           /\\           __ __           __           /\\         "<<endl;
gotoxy(0,5);	cout<<"        /    \\        /  Y  \\        _|  |_        /  \\        /    \\        /  Y  \\        _|  |_        /  \\        "<<endl;
gotoxy(0,6);	cout<<"       /__  __\\       \\     /       |__  __|       \\  /       /__  __\\       \\     /       |__  __|       \\  /        "<<endl;
gotoxy(0,7);	cout<<"         _||_          \\___/          _||_          \\/          _||_          \\___/          _||_          \\/         "<<endl;
gotoxy(0,8);	cout<<"======================================================================================================================="<<endl;
gotoxy(0,26);	cout<<"======================================================================================================================="<<endl;
gotoxy(0,27);	cout<<"          /\\           __ __           __           /\\           /\\           __ __           __           /\\         "<<endl;
gotoxy(0,28);	cout<<"        /    \\        /  Y  \\        _|  |_        /  \\        /    \\        /  Y  \\        _|  |_        /  \\        "<<endl;
gotoxy(0,29);	cout<<"       /__  __\\       \\     /       |__  __|       \\  /       /__  __\\       \\     /       |__  __|       \\  /        "<<endl;
gotoxy(0,30);	cout<<"         _||_          \\___/          _||_          \\/          _||_          \\___/          _||_          \\/         "<<endl;
gotoxy(0,31);	cout<<"======================================================================================================================="<<endl;
}

int main(){
	loading();
	pembatas();
	gotoxy(47,11);	cout<<"welcome to blackjack game!"<<endl;
	cout<<"\n";
	gotoxy(46,23);	cout<<"press any button to continue";
	getch();
	system("cls");

	cout<<"player 1 press any button to spin the roulette"<<endl;
	getch();
	kocok_1();

	cout<<"\n";

	cout<<"player 2 press any button to spin the roulette"<<endl;
	getch();
	kocok_2();
	
}

