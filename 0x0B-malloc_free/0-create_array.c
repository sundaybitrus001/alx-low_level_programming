nclude "main.h"
 #include <stdio.h>
 /**
  * *create_array _ creates an array of chars and initializes it with 
  * *a specific char.
  * *@size: size of array.
  * *@c: char to initialize array with. 
  * *
  * *Return: NULL if it fails or 
  * *pointer to array.
  * */
Char  *create_array(unsigned int size, char c)
{
	            char *arr;
		               unsigned int i;

			                  if  (size == 0)
						             {
								                          return   (Null);
											             }

					             arr = malloc(sizeof(char) * size);

						                /* check if malloc was successful */

						               if (arr == Null)
								                        return (Null);

							                 for (i = 0; i < size; i++)
										           {
												                    arr[i] = c;
														              }

									           return (arr) 

}

