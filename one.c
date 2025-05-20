#include <stdio.h> // includes the standard library - yet to dive into what it actually is.

main() //main function that encloses the main programs 
{
   int fahr, celsius;
   int lower, upper, step; //declare all data types and then names

   lower=0;
   upper=300;
   step=20;

   fahr=lower;
   //make a while loop- while fahr is lower than or equal to the upper limit of the fahrenheit temp - calculate celsiur conversion and then print them out, after that add step - that is 20 - to the fahrenheit. all of this happens inside the while{} function 
   while (fahr<=upper) {   
    celsius =5 * (fahr-32)/ 9;
    printf("%d\t%d\n", fahr, celsius); // print Fahrenheit-Celsius table - for fahr = 0, 20, ..., 300
    fahr=fahr+step;
   }



}



