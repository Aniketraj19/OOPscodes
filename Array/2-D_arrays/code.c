#include <stdio.h> // header file for Standard Input Output
#include <stdlib.h> // header file for Standard Library

int main() {

	int M,Y,R,G,output=0;
    scanf("%d %d %d %d",&M,&Y,&R,&G);
    
        if((M>Y) && (Y+R>M || Y*G>M) )
        {
            output = 1;
        }
    
    printf("%d",output);
	return 0;
}