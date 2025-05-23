 #include <stdio.h>
 
 int main() {
int c; // The char type is used for storing characters, but any integer type can hold a character because characters are just numbers.
c = getchar(); //get a file 
 

while (c != EOF) {
    putchar(c);
    c = getchar();
 }



    

}

