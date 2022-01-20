//Sorting:// 

#include <stdio.h> 

int main() { 

   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10}; 

   int i, large; 

   large = array[0]; 

      for(i = 1; i < 10; i++) { 

      if( large < array[i] )  

         large = array[i]; 

   } 

   printf("Largest element of array is %d", large);    

      return 0; 

} 

 