/* 由鍵盤輸入字串，並附加到檔案 output.txt */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define ENTER 13
#define MAX 80

int main(void)
{
    FILE* fptr;
    char str[MAX], ch;   // 宣告字元陣列 str，用來儲存由鍵盤輸入的字串
    int i = 0;
    fptr = fopen("output.txt", "a");
    printf("請輸入字串，按 ENTER 鍵結束輸入:\n");
    while ((ch = getche()) != ENTER && i < MAX)   // 按下的鍵不是 ENTER 且 i < MAX
        str[i++] = ch;                            // 一次增加一個字元到字元陣列 str 中
    putc('\n', fptr);                             // 寫入換行字元
    fwrite(str, sizeof(char), i, fptr);
    fclose(fptr);
    printf("\n檔案附加完成!!\n");
    system("pause");
    return 0;
}