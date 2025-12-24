#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* in, * out;
    int cnt;
    char str[100];
    in = fopen("welcome.txt", "r");
    out = fopen("output.txt", "w");
    while (!feof(in))
    {
        cnt = fscanf(in, "%s", str);  // 讀取檔案
        if (cnt > 0)
            fprintf(out, "%s\n", str);// 寫入檔案
    }
    fclose(in);
    fclose(out);
    system("pause");
    return 0;
}