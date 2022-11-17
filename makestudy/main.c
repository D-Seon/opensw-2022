#include <stdio.h>
#include "copy.h"
#include <stdlib.h>



int main()
{
    char* str1= "working! Final 4";
    char* str2= copy(str1);
    printf("%s\n" , str2);
    free(str2);
    return 0;


}