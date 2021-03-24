#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_string(const char* str)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 0)
            break;
        printf("%c ", str[i]);
    }
}

int main()
{
    const char* a = "abcd";
    print_string(a);
    return 0;
}
// 输入一个字符串，然后将 每一个字符打印显示，然后中间加一个空格 
