#include <iostream>
#include <string>
#include "unistd.h"

using namespace std;

int main(int argc, char const* argv[])
{
	if(argc!=2){
		cout<<"Argument Error"<<endl;
		return 0;
	}

	string command=string("cat ")+argv[1];

	int count=0;
	while (++count) {
		printf("\x1b[%dm\x1b[1m",31+count%7);
		system(command.c_str());
		cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
		usleep(200000);
		system("clear");
	}
	return 0;
}
