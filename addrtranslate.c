#include "stdio.h"

void fun(char **string)
{
    *string = "hello world";
}

int main(void)
{
    char *str = NULL;
    fun(&str);
  
    printf("%s",str);
    
}
