#include <iostream>
using namespace std;
string commandlineinput;
void commandline(){
	cout<<">";
	getline(cin, commandlineinput);
	if (commandlineinput == "help"){
		cout<<"help - help"<<endl;
		cout<<"clear - clears the screen"<<endl;
		cout<<"quit - exits terminal"<<endl;
		cout<<"text - prints a hello world"<<endl;
		cout<<endl;
		commandline();
	} else if (commandlineinput == "clear"){
		system("cls");
		cout<<endl;
		commandline();	
	} else if (commandlineinput == "quit"){
		system("exit");
	} else if (commandlineinput == "text") {
		cout<<"hello world!"<<endl;
		cout<<endl;
		commandline();
	} else {
		commandline();
	}
}
int main(){
	cout<<"Terminal - type help"<<endl;
	cout<<endl;
	commandline();
}
