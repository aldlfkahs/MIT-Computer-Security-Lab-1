#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    long main;
    main = 0x8048c69;
    while(memcmp((void*)main, "/home/httpd/grades.txt", 23)) main++;
    printf("\"/home/httpd/grades.txt\" is at 0x%x \n", main);
    printf("print %s\n", main);
}
