 Static libraries are just collections of object files 
 that are linked into the program
 during the linking phase of compilation,
 and are not relevant during runtime.
 
 In order to create a static library, we can use a command like this:
(ar rc libutil.a util_file.o util_net.o util_math.o)

How to make static library:
1: compile all .c files to get our object files .o files. gcc -c *canThen we create our
static library from our object files.
2: create static library from object files.
3: confirm if static library was created. ( ar -t filename.a)
4: confirm if our object files were linked successfuly. nmfilenmae.H
5: compile the main code to test static libray with this:
gcc -std=gnu89 main.c -L. - filename -o quote

CODES
ar rc libmy.a *.o 
ar rc libmy.a *o> This creates the static libray "libmy.a"
ar -t libmy.a > This lists all files in libmy.a 
ranlib libmy.a> this converts to random library
gcc -c*.c> This converts .c files to .o(object) files





For my task 0 it wants to to create a static library containing a list of functions
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);