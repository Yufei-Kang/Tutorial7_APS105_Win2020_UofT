#include <stdio.h>
#include <string.h>
#include <ctype.h>
void Q1()
{
    printf("Q1:\n");
    //Approach 1
	const int LENGTH = 5; 
    //Declaring and initiallizing a string as a character array
    char str[LENGTH + 1];
    str[0] = 'H';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    str[5] = '\0';
    
    printf("Approach 1: str = %s\n", str);
    
    //Approach 2
    char s[] = "Hello";
    // The length of the string could be ignored.
    // However, if you declare a string without enough space, for example "char s[4] = "Hello";"
    // A compile-time warning and run-time error would occur
    
    printf("Approach 2: s = %s\n", s);
    
    //Approach 3
    char *p = "Hello";
    // Declaring and initializing a string as a character pointer
    printf("Approach 3: p = %s\n", p);
    
    
    //Now try to change the characters in the string s
    printf("\n");
    s[1] = 'E';
    printf("s = %s\n", s);
    // But you cannot change s to point to another string. 
    // For example, "s = "HELLO;" is wrong!!!
    // A compile-time erro, which is "array type is not assignable", will occur
    
    // You can switch the pointer variable p to another string
    p = "HELLO";
    printf("p = %s\n", p);
    // You cannot change characters in the string pointed to by p
    // For example, "p[1] = 'E';" is wrong!
    // It may cuase a segmentation fault or bus error (on Mac OS X)
    
    
    // Compare the pointer values to see where these strings are
    printf("\nThe pointer variable of s: %p\n", s);
    printf("The pointer variable of p: %p\n\n", p);
    
    // Now let p point to s, so that we can safely change the characters
    p = s;
    printf("p = %s\n", p);
    
    p[2] = 'L';
    printf("p = %s\n", p);
    
    }
    
void Q3()
{
    // strchr: Looking for a specific character in a given string
    printf("\nQ3:\n");
    char s[] = "This is a given string";
    char a;
    printf("What are you looking for?\n");
    scanf("%c",&a);
    printf("Looking for the character '%c' in \"%s\"...\n", a, s);
    
    char *p = strchr(s, 's');
    
    while (p != NULL) 
    {
        printf("Found at %ld\n",p - s + 1);
        p = strchr(p + 1, 's');
    }
}
void Q2()
{
    printf("Q2:\n");
    char s[] = "This is a given sentence.";
    int numberOfSpaces = 0;
    
    for(int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
            numberOfSpaces++;
    }
    
    printf("The sentence is:\n");
    puts(s);// We can use puts() to print a string
    printf("The number of words in the given sentence is %d\n",numberOfSpaces + 1);
    }
void Q4()
{
   printf("Q4:\n");
   char s1[99];
   char s2[99];
   
   printf("\nPlease enter a string:\n");
   gets(s1);
   printf("The string you entered is:\n");
   puts(s1);
   
   printf("Length of the string is: %lu\n", strlen(s1));
 
   printf("\nPlease enter another string:\n");
   gets(s2);// Instead of "scanf"
   
   if (strcmp(s1, s2) ==0)
     {
        printf("str1 and str2 are equal.\n");
     }else
      {
         printf("str1 and str2 are different.\n");
      }
   
   printf("\nLet's concatenate these two strings:\n");
   strcat(s1,s2);
   printf("Output string after concatenation: %s\n", s1);
   
   printf("\nLet's copy the string str1 into string str2:\n");
   strcpy(s2,s1);
   printf("Str2 is: %s\n", s2);
   
    }
int main(int argc, char **argv)
{
    //Q1();
    //Q2();
    //Q3();
    Q4();
    return 0;
}
