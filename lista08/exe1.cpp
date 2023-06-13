#include <iostream>
#include <stdlib.h>

int exe1(int x){
		if (x<5)
		return(3*x);
	else
		return(2*exe1(x-5) + 7);
	}
	
int main(){
	
	std::cout<<exe1(4)<< " ";
	std::cout<<exe1(10)<< " ";
	std::cout<<exe1(12)<< " ";

	
	return 0;
}
