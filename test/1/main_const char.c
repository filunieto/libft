
// C program to illustrate
// char const *p
#include<stdio.h>
#include<stdlib.h>
 
int main()
{
    char a ='A';
	char b ='B';
    const char *ptr1;
    const char *ptr2;
	char *str;
     
	ptr1 = &a;
	ptr2 = &b;
	str = &a;
	
    //*ptr1 = b; illegal statement (assignment of read-only location *ptr1)
     
    // ptr1 can be changed
    printf( "value pointed to by ptr1: %c\n", *ptr1);
    printf( "pointer  ptr1: %s\n", ptr1);
    ptr1 = &b;
	printf( "value pointed to by ptr1: %c\n", *ptr1);
    printf( "value pointed to by ptr2: %c\n", *ptr2);
	printf( "value pointed to str: %c\n", *str);
}

 
int main()
{
    char a ='A', b ='B';
    char *const ptr = &a;
    printf( "Value pointed to by ptr: %c\n", *ptr);
    printf( "Address ptr is pointing to: %p\n\n", ptr);
 
    ptr = &b; //illegal statement (assignment of read-only variable ptr)
 
    // changing the value at the address ptr is pointing to
    *ptr = b;
    printf( "Value pointed to by ptr: %c\n", *ptr);
    printf( "Address ptr is pointing to: %p\n", ptr);
}

// int main()
// {
//     char a ='A', b ='B';
//     const char *const ptr = &a;
     
//     printf( "Value pointed to by ptr: %c\n", *ptr);
//     printf( "Address ptr is pointing to: %d\n\n", ptr);
 
//     // ptr = &b; illegal statement (assignment of read-only variable ptr)
//     // *ptr = b; illegal statement (assignment of read-only location *ptr)
 
// }