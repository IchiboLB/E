#include <iostream>
using namespace std;

int findmax(int source[]) {
	int max = -1000000;
	for(int i = 0; i < 5; i++) {
		if(max < source[i]) {
			max = source[i];
		} 
		
	}
	return max;
}
