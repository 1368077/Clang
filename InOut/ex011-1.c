#include<stdio.h>

main()
{
	char m1, m2, m3, m4, m5, m6, m7, m8, m9, m10;

	m1 = 'A';
	m2 = 'B';
	m3 = 'C';
	m4 = 'a';
	m5 = 'b';
	m6 = 'c';
	m7 = '0';
	m8 = '1';
	m9 = '2';
	m10 = ' ';

	printf("%c: %d 0x%x %c:%d 0x%x \n", m1, m1, m1, m2, m2, m2);
	printf("%c: %d 0x%x %c:%d 0x%x \n", m3, m3, m3, m4, m4, m4 );
	printf("%c: %d 0x%x %c:%d 0x%x \n", m5, m5, m5, m6, m6, m6 );
	printf("%c: %d 0x%x %c:%d 0x%x \n", m7, m7, m7, m8, m8, m8 );
	printf("%c: %d 0x%x %c:%d 0x%x \n", m9, m9, m9, m10, m10, m10 );
}
