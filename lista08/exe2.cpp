#include <iostream>
#include <stdlib.h>

int exe2 (int x, int y)
{
if (x<y)
return(-3);
else
return(exe2(x-y,y+3)+y);
}

int main(){
	
	std:: cout << exe2(2,7)<< " ";
	std:: cout << exe2(5,3)<< " ";
	std:: cout << exe2(15,3)<< " ";
	
	return 0;
}
