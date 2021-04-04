#include <iostream>
using namespace std;
#include "helpers.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string cheta;
	cout <<"priveeeet, ugadai 4 tsifri\n";

	int randomnietsifri[4];
	for(int i = 0; i < 4; i++)
	{
		bool uzhesush = true;
		int cursifra;
		while(uzhesush == true) {
			cursifra = randumber();
			uzhesush = tsiviratel(randomnietsifri, cursifra);
		}
		randomnietsifri[i] = cursifra;
		cout << cursifra << endl;
	} 
	
	bool success = false;
	while(success == false) {
			
	
		
	string userInput;
	cin >> userInput;
	
	int korovi = 0;
	int biki = 0;
	
	
	for(int i = 0; i < 4; i++) 
	{ 
		int converted = userInput[i] - '0';
		for(int j = 0; j < 4; j++) {
			if (converted == randomnietsifri[j]) {
				if (i == j) {
					biki++;
				} else {
					korovi++;
				}
			}
		}
	}
	cout << "Itak, " << userInput << " Korov: " << korovi << " Bikov: " << biki << endl;
	if(biki == 4) {
		cout << "ti krutoi";
		success = true;
	}
}
	return 0;
}
