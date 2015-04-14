/* saca por la salida la entrada estandar con los tabuladores, espacios, y barras invertidas visibilizadas
   Protto, Walter Fabián
   15/04/2015 */
  
#include<stdio.h>

main (void)
{
int c;

while ((c=getchar())!=EOF)
	if ((c!='\t')&&(c!='\\')&&(c!=' '))
	putchar(c); else
			if (c=='\t')
		 		{
				putchar('\\');
				putchar('t'); 
				} else
					if (c==' ')
						putchar('_'); else  /*Lo cambie por que dice el \b (backspace)*/
							{
							putchar('\\');
							putchar('\\');
							}			 				
}		
