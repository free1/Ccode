#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void fun(char* str)
{
    char *begin = str;
    char *end   = str + strlen(str);
    char *front, *back, tmp;

    for( front=begin, back=(end-1); front<back; ++front, --back )
    {
        tmp = *front;
        *front = *back;
        *back  = tmp;
    }
}

void main()
{
    char str[200];

    printf("�������ִ�: ");
    gets( str );

    fun( str );
    printf("��ת��: %s\n", str );
}