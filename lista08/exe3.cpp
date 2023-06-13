#include <iostream>
#include <stdlib.h>

int exe3(int x, int y)
{
if (x > y)
return(-1);
else
{
if (x=y)
return(1);
else
return(x*exe3(x+1, y));
}
}

int main(){
	
	std::cout << exe3(10,4)<< " ";
	std::cout << exe3(4,3)<< " ";
	std::cout << exe3(4,7)<< " ";
	std::cout << exe3(0,0)<< " ";
	
	return 0;
}
