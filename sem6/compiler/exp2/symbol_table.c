#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <regex.h>
#include <ctype.h>
struct node{
	char identifier[20];
	struct node *next;

};

struct node *head= NULL;


void endInsert(char* iden)
{
    //create a new node
   struct node *newNode = malloc(sizeof(struct node));
   struct node *ptr = head;
   

    strcpy(newNode->identifier, iden);


    newNode->next = NULL;

    

    //if head is NULL, it is an empty list
    if(head == NULL)
         head = newNode;

     else{

     	while(ptr->next !=NULL){
     		ptr = ptr->next;
     	}

     	ptr->next = newNode;


     }
    

}

void display(){
	
	struct node *d = malloc(sizeof(struct node));

	d = head;

	while(d!=NULL){
		printf("|\t %*s\t\t|\t%p\t|\n" , 10,d->identifier ,  d);
		d = d->next;

	}
	
}


int main ( ) {

	


   FILE *fp;
   int flag=0,oflag=0, return_value=0;

   regex_t regex;

   char word[50];
   char c[50] = "void";
   char keywords[100][20]={"int" , "main" , "void" , "char" , "float" , "if" , "else" , "switch" 
   					, "for" , "while" , "do" , "printf"};

   char operators[100][20]={"+" , "-" , "/" , "*"  , "="};

   char special[100][20]={"(" , ")" , "[" , "]" , ";" , "#"  , "{" , "}"};
   char done[200] = " ";

   fp = fopen("program.c","r");

   while(1) {
      fscanf(fp, "%s", word); 

      if( feof(fp) ) { 
         break ;
      }
      //printf("%s\n", word);
      
       	 // strcpy(c, keywords[2]);
      	   //printf("'%s' '%s'\n", c , word);

      	 //printf("'%s'\n",word);

      // keywords

      for(int i=0;i<=11;i++){
      	
      
      	 if(strcmp(word , keywords[i])==0){

      	 	printf("Keywords   : \t%s \n" ,word );
      	 	 goto REPEAT;
      	 }

      }


      //operators.
      	
        for(int i=0;i<=4;i++){
      	
	      	// if(i==0 && oflag==0) printf("Operators \n");
	      	// oflag++;
	      	 
	      	if(strcmp(word , operators[i])==0){

	      	 	printf("Operators  : \t%s \n" ,word );
	      	 	 goto REPEAT;
	      	 }
      	}



        for(int i=0;i<=7;i++){
      	
	      	// if(i==0 && oflag==0) printf("Operators \n");
	      	// oflag++;
	      	 
	      	if(strcmp(word , special[i])==0){

	      	 	printf("SpecialChar: \t%s \n" ,word );
	      	 	 goto REPEAT;
	      	 }
      	}

      	// identifier.
	   	

	   	//return_value = regcomp(&regex,"[:lower:]",0);


	   	if( isalpha(word[0])){

	   		//printf("\n first : %c \n\n", word[0]);
	   			// insert into linkedlist.
	      	//printf("identifier: \t%s \n" ,word );

	   		
	

	   		if(strstr(done, word) == NULL) {
    		/* ... */
	   			//printf("first %s\n",word);
	   		   	endInsert(word);
	   		   	//printf("Mateched %s" ,word);
			}

			strcat(done," ");
	   		strcat(done,word);
	   		strcat(done," ");



	    }

	   
   

      	//printf("identifier: \t%s \n" ,word );

 	REPEAT:;
   }




   printf("\n\nSymbol Table \n\n");
   printf("_________________________________________________________\n");
   printf("|\tIdentifier  \t\t|\t Address\t|\n");
   printf("_________________________________________________________\n");

   display();
    printf("_________________________________________________________\n");

   fclose(fp);
   
   printf("\n %s " , done);
   return(0);




}

