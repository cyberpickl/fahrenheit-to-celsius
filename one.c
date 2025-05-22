#include <stdio.h> // includes the standard library - yet to dive into what it actually is.

int main() //main function that encloses the main programs 

{
   float fahr, celsius;
   float lower, upper, step; //declare all data types and then names

   lower = 0;
   upper = 300;
   step = 20;

   fahr = lower;
   //make a while loop- while fahr is lower than or equal to the upper limit of the fahrenheit temp - calculate celsiur conversion and then print them out, after that add step - that is 20 - to the fahrenheit. all of this happens inside the while{} function 
   
   for (fahr = lower;fahr <= upper; fahr = fahr + 20){
      celsius = (5.0/9.0)*(fahr-32);
      printf ("%3.0f %6.1f\n", fahr, celsius);


   }
   
    return 0;
}



