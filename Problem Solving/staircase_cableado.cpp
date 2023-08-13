#include <iostream>

void staircase(int n) {

    for(int i=0;i<n-1;i++){
    	std::cout << '#';    
    }

}


int main(){

	int n=4;

	staircase(n);

	return 0;
}