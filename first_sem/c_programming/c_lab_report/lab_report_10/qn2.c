#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters=0, words=0, lines=0;

    fp = fopen("student.txt","r");

    while((ch=fgetc(fp))!=EOF)
    {
        characters++;

        if(ch==' ' || ch=='\n' || ch=='\t')
            words++;

        if(ch=='\n')
            lines++;
    }

    printf("Characters: %d\n",characters);
    printf("Words: %d\n",words+1);
    printf("Lines: %d\n",lines+1);

    fclose(fp);

    return 0;
}