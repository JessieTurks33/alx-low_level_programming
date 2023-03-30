<<<<<<< HEAD
#include "main.h"                                                                                                                  
#include <unistd.h>                                                                                                                     
                                                                                                                                        
/**                                                                                                                                     
 * _putchar - writes the character c to stdout                                                                                          
 * @c: The character to print                                                                                                           
 *                                                                                                                                      
 * Return: On success 1.                                                                                                                
 * On error, -1 is returned, and errno is set appropriately.                                                                            
 */                                                                                                                                     
int _putchar(char c)                                                                                                                    
{                                                                                                                                       
        return (write(1, &c, 1));                                                                                                       
}

=======
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
>>>>>>> e1ff0c3fe22290393349dbc85d554c463b919b05
