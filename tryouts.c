#include <stdio.h>

#define SHC_AUTHREQ 15

int main()
{
    
    int msg,i;

        msg=SHC_AUTHREQ;
    
        for(i=0;i<13;++i){
            if(msg==SHC_AUTHREQ){
                printf("Igualdad %d \n", msg);
            }
            else
                ;
        }

    
    return 0;
}
