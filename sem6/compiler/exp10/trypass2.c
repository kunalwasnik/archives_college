#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <regex.h>
#include <ctype.h>

char bin[10];
char temp[10];

int start=100;
int startl=100;
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

void binary(unsigned n)
{
    /* step 1 */
    if (n > 1)
        binary(n / 2);
 
    /* step 2 */
    //printf("%d",n%2);
    
     sprintf(temp, "%d", n%2);
     strcat(bin,temp);

}




void display(){
	
	struct node *d = malloc(sizeof(struct node));

	d = head;

	while(d!=NULL){
		//printf("%*s %18p\n" , 10,d->identifier ,  d);
		d = d->next;

	}
	
}


int main ( ) {

	


   FILE *fp,*fpn;
   int flag=0,oflag=0, return_value=0;

   regex_t regex;

   int opcode = 0;

int a[10];

char buffer[10];
   char word[50];
int move=0;
int k;
    char wordn[50];
   char c[50] = "void";
   // char keywords[100][20]={"START" , "STOP" , "END"};
   char ad[100][20]={"START" , "STOP" , "END" , "PRINT"};

   char is[100][20]={"MOVER" , "MOVEM" , "ADD"};

   char  var[100][20]={""};
   int vint[10];
   int v=0;
   //imperative statement.

   char ds[100][20]={"DS" , "DC"};

   char reg[100][20]={"AREG"};
   char done[200] = " ";

   fp = fopen("program","r");

  int mflag=0,lflag=0;




   fpn = fopen("program","r");

    while(1) {
      fscanf(fpn, "%s", wordn); 


      if( feof(fpn) ) { 
         break ;
      }
      //printf("%s\n", word);
      
         // strcpy(c, keywords[2]);
           //printf("'%s' '%s'\n", c , word);

         //printf("'%s'\n",word);

      // keywords

    if(lflag==0){
   //      printf("\n\nLITERAL Table \n\n");
   // //printf("_________________________________________________________\n");
   //    printf("%2s  %15s \n\n" ,"LITERAL" , "LENGTH" );
    lflag++;

    }

    for(int i=0;i<4;i++){
      if(strcmp(word , ad[i])==0 || strcmp(word , is[i])==0 ){
            startl++;
                     
                     }


        
      }
       
         if(strncmp(wordn , "=" , 1)==0){

         // printf("%5s %15d \n" ,wordn ,1);
         // strcat(var , wordn);
          //vint[v++] = startl;

         // printf("THIS:: %d\n" , startl);
          
         }
        

         // startl++;





  }
fclose(fpn);


 
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

            if(mflag==0){
             //   printf("\n\nMachine OPCODE Table \n\n");
           //printf("_________________________________________________________\n");
             // printf("%2s  %15s %15s  %15s \n\n" ,"MNEMONIC" ,"OPCODE" ,  "TYPE" , "LENGTH" );
            mflag++;

            }

              for(int i=0;i<=4;i++){
                    
                   
                    char c1[2] = "AD";
                    char c2[2] = "IS";
                    char c3[2] = "DS";
                  
                  strncpy(bin, "", sizeof(bin));
                  strncpy(temp, "", sizeof(temp));


                     if(strcmp(word , ad[i])==0){

                      binary(opcode);

                      printf("%d %s\n" , start++ , bin );
    
                    //  printf("%5s %15s %15s %15d \n" ,word ,bin, c1,2);
                      opcode++;
                       goto REPEAT;
                     }

                     if(strcmp(word , is[i])==0){
                       binary(opcode);
                       move = start;


                      printf("%d %s " , start++ , bin   );

                      

                      // printf("%d \n" , startl );
                      //printf("%5s %15s %15d  \n" ,word , c3,2);
                      
                     


                     
                      //printf("%5s %15s %15s %15d  \n" ,word,(bin) , c2,2);
                      opcode++;
                       goto REPEAT;
                     }



                     if(strcmp(word , reg[i])==0){
                       //binary(opcode);


                      printf(" %d \n" , 1    );



                       goto REPEAT;
                     }





                     if(strcmp(word , ds[i])==0){
                       binary(opcode);

                          printf("%d %s\n" , start++ , bin );


                     // printf("%5s %15s %15s %15d  \n" ,word,(bin), c3,2);
                      opcode++;
                       goto REPEAT;
                     }


                   if(strcmp(word , reg[i])==0){

                          printf("%d %s\n" , start++ , bin );
                      //printf("%5s %15s %15d  \n" ,word , c3,2);
                       goto REPEAT;
                     }




                }








    


  


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




  //  printf("\n\nSymbol Table \n\n");
  // // printf("_________________________________________________________\n");
  // printf("%s  %15s   \n\n" ,"IDENTIFIER" , "ADDRESS" );
  //  //printf("_________________________________________________________\n");

  //  display();
    //printf("_________________________________________________________\n");

   fclose(fp);





        //printf("identifier: \t%s \n" ,word );




  // printf("\n %s " , done);
   return(0);




}

