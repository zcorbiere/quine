#include <stdio.h>
int main(int argc, char *argv[]){char *a = "#include <stdio.h>%cint main(int argc, char *argv[]){char *a = %c%s%c;printf(a, 0xa, 0x22, a, 0x22, 0xa);return 0;}%c";printf(a, 0xa, 0x22, a, 0x22, 0xa);return 0;}
