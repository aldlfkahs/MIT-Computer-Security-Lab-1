#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    long shell;
    shell = 0xb7e6b100;
    while(memcmp((void*)shell, "/bin/sh", 8)) shell++;
    printf("\"/bin/sh\" is at 0x%x \n", shell);
    printf("print %s\n", shell);
}
