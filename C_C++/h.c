#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(){
    srand(time(0));
    float b = ((float)rand()/RAND_MAX);
    float a = 1.0f + ((float)rand()/RAND_MAX);
    printf("%f %f" ,a,b);
    return 0;
}
// x86_64-w64-mingw32-g++ h.c -o h.exe -lws2_32 -static
// ./h.exe
