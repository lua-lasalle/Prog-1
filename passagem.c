#include<stdio.h>

/* Unilasalle - Sistemas de Informação - Noite
 Aluna: Luana da Costa Bueno
 Matricula: 0050014451 */

int main()
{
      int local;
	    int destino;
  
          printf("\n Ola, eu sou Luana! Onde você está?\n");
          printf("\n 1-RJ  \n 2-SP  \n 3-SSA \n");
          scanf("%d", &local);
   
  
        switch(local)
        
	     	{ case 1:
                   printf("\n Entendi, voce esta no Rio de Janeiro. \n");
                   printf("\n Qual seu destino? \n");
                   printf("\n 1-RJ  \n 2-SP  \n 3-SSA \n");
                   scanf("%d", &destino);

  	switch (destino)
	
    	{ case 1:
	          printf("\n Ops! O destino tem que ser diferente do seu local! \n");
            printf("\n Qual seu destino? \n");
            printf("\n 2-SP  \n 3-SSA \n");
            scanf("%d", &destino);
          
            if (destino == 2)
	       { 
           printf("\n Sao Paulo!\n");
           printf("\nValor da passagem RJ -> SP = R$150,00 ou US$= 44,11!\n");
           printf("\n Obrigada e Boa viagem! \n");}

            if (destino == 3)
        {	
          printf("\n Salvador!\n");
          printf("\n Valor da passagem RJ -> SSA = R$300,00 ou US$= 88,23 \n"); 
          printf("\n Obrigada e Boa viagem! \n");}
            
          break;}

         if (destino == 2)
	       { 
           printf("\n Sao Paulo!\n");
           printf("\nValor da passagem RJ -> SP = R$150,00 ou US$= 44,11!\n");
           printf("\n Obrigada e Boa viagem! \n");}

            if (destino == 3)
        {	
          printf("\n Salvador!\n");
          printf("\n Valor da passagem RJ -> SSA = R$300,00 ou US$= 88,23 \n"); 
          printf("\n Obrigada e Boa viagem! \n");}
  
           break;
  
  
        case 2:
        
         printf("\n Entendi, voce esta em Sao Paulo \n");
         printf("\n Qual seu destino? \n");
         printf("\n 1-RJ  \n 2-SP  \n 3-SSA \n");
         scanf("%d", &destino);
	       
         if (destino == 1)
	       { 
           printf("\n Rio de Janeiro!\n");
           printf("\nValor da passagem SP -> RJ = R$160,00 ou US$= 47,05!\n");
           printf("\n Obrigada e Boa viagem! \n");}
    
        	switch(destino)
      
			    {case 2:
	
            printf("\n Ops! O destino tem que ser diferente do seu local! \n");
            printf("\n Qual o seu destino? \n");
            printf("\n 1-RJ  \n 3-SSA \n");
            scanf("%d", &destino);
             
           if (destino == 1)
	       { 
           printf("\n Rio de Janeiro!\n");
           printf("\n Valor da passagem SP -> RJ = R$160,00 ou US$= 47,05!\n");
           printf("\n Obrigada e Boa viagem! \n");}
          
          if (destino == 3)
        {	
          printf("\n Salvador!\n");
          printf("\n Valor da passagem SP -> SSA = R$180,00 ou US$= 52,94 \n"); 
          printf("\n Obrigada e Boa viagem! \n");} 
  
          break;}

         if (destino == 3)
        {	
          printf("\n Salvador!\n");
          printf("\n Valor da passagem SP -> SSA = R$180,00 ou US$= 52,94 \n"); 
          printf("\n Obrigada e Boa viagem! \n");}
  
         break;
            
         case 3:
                   
         printf("\n Entendi, voce esta em Salvador \n");
         printf("\n Qual seu destino? \n");
         printf("\n 1-RJ  \n 2-SP  \n 3-SSA \n");
         scanf("%d", &destino);
	
	       if (destino == 1)
        {	
          printf("\n Rio de Janeiro!\n");
          printf("\n Valor da passagem SSA -> RJ = R$280,00 ou US$= 82,35 \n"); 
          printf("\n Obrigada e Boa viagem! \n");}
            
          if (destino == 2)
	       { 
           printf("\n Sao Paulo!\n");
           printf("\n Valor da passagem SSA -> SP = R$175,00 ou US$= 51,47!\n");
           printf("\n Obrigada e Boa viagem! \n");}
           
	
	 	      switch(destino)
	      
	      {case 3:
	
     	     printf("\n Ops! O destino tem que ser diferente do seu local! \n");
           printf("\n Qual seu destino? \n");
           printf("\n 1-RJ  \n 2-SP \n");
           scanf("%d", &destino);
            
            
      	if (destino == 1)
        {	
          printf("\n Rio de Janeiro!\n");
          printf("\n Valor da passagem SSA -> RJ = R$280,00 ou US$= 82,35 \n"); 
          printf("\n Obrigada e Boa viagem! \n");}
            
           if (destino == 2)
	       { 
           printf("\n Sao Paulo!\n");
           printf("\n Valor da passagem SSA -> SP = R$175,00 ou US$= 51,47!\n");
           printf("\n Obrigada e Boa viagem! \n");}
           
         break;}
	    
         break; }

    return 0;
}