#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string yee;
	cout << "vvedi nazvanie strani chtobi uznat stolitsu " << endl;
	cin >> yee;
	if (yee == "Velikobritania") {
		cout << "LONDON IS THE CAPITAL OF GREAT BRITAIN KAK TI MOG(la) NE ZNAT";
		
	} else if (yee == "Russia")
	{
		cout << "Moscow yay";
	} else if (yee == "Ukraine") {
		cout << "konechno zhe Kiev";
	} else if (yee == "Derevni") {
		cout << "TYUMEN STOLITSA DEREVEN" << endl;
	}
	cout << "xue hua piao piao bei fung xiao xiao";
	return 0;
}
