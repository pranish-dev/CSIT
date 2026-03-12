#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    long pos;

    fp = fopen("data.txt","w+");

    fputs("Hello World", fp);

    rewind(fp);

    ch = fgetc(fp);
    printf("%c\n", ch);

    pos = ftell(fp);
    printf("%ld\n", pos);

    fseek(fp, 6, SEEK_SET);

    ch = fgetc(fp);
    printf("%c\n", ch);

    pos = ftell(fp);
    printf("%ld\n", pos);

    rewind(fp);

    pos = ftell(fp);
    printf("%ld\n", pos);

    fclose(fp);

    return 0;
}