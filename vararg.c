#include<stdarg.h>
#include<stdio.h>

void p(const unsigned int i,...){
    int j;
    va_list argp;
    char fmtbuf[256];
    va_start(argp, i);
    for(j=i;j--;){

            printf("%d ",va_arg(argp,int));
    }
    va_end(argp);
}

int main(){
    p(9,1,2,3,4,5,6,7,8,9);
    return 0;
}
