/*Checking user-input character for vowel or constant*/

#include <stdio.h>
int main(void)

{
	char ch;
	printf("Enter a character(no digits)\n");
	scanf("%c",&ch);
	

    if (ch>='a' && ch<='z')
       {
      printf("Input %c is lowercase\n",ch);

        
        		switch(ch)
                 {

			     	case 'a':
			     	     printf("%c is vowel1\n",ch);
			     	     break;

			     	case 'e':
			     	     printf("%c is vowel2\n",ch);     
			             break;

			        case 'i':
			             printf("%c is vowel3\n",ch);
			             break;

			        case 'o':
			             printf("%c is vowel4\n",ch);
			             break;

			        case 'u':
			             printf("%c is vowel5\n",ch);
			             break;

			        default:
			             printf("%c is a consonant\n",ch);
			             break;
			        	} 	
			         	
		}
         
         
       
   
    else if (ch>='A' && ch<='Z')
       {
      printf("Input %C is uppercase\n",ch);

      	
	        	switch(ch)              
			       {
			        case 'A':
			     	     printf("%C is VOWEL1\n",ch);
			     	     break;

			     	case 'E':
			     	     printf("%C is VOWEL2\n",ch);     
			             break;

			        case 'I':
			             printf("%C is VOWEL3\n",ch);
			             break;

			        case 'O':
			             printf("%C is VOWEL4\n",ch);
			             break;

			        case 'U':
			             printf("%C is VOWEL5\n",ch);
			             break; 

			        default:
			             printf("%C is a CONSONANT\n",ch);
			             break;
			             }
			             
                       
		}                     
     

    else {printf("%c is not alphabetic\n",ch);} 	
     

 return 0;      

}       

     
    

    

    
       
