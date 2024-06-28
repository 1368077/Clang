#include<stdio.h>
main()
{
    char data[100];
    int cnt, i;
    printf("‰ñ”‚Æ•¶š—ñ‚ğ“ü—Í:");
    scanf("%d%s", &cnt, data);
    for (i = 0; i < cnt; i++) {
        printf("%s\t", data);
    }
}