#include <stdio.h>
int main(int argc, char *argv[]){char nl=0x0a; char q=0x22; char *a = "#include <stdio.h>%cint main(int argc, char *argv[]){char nl=0x0a; char q=0x22; char *a = %c%s%c;printf(a, nl, q, a, q, nl);return 0;}%c";printf(a, nl, q, a, q, nl);return 0;}
