#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <regex.h>
#include <ctype.h>


int main ( ) {

	


   FILE *fp ;
   int flag=0,oflag=0, return_value=0;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    //char iterator="i";
    int length=0;
    char *ret , *cret;
    char red[100]=" ";
    char actual[200]=" ";

    int wflag=0,cflag=0;


   fp = fopen("program.c","r");
  

    while ((read = getline(&line, &len, fp)) != -1) {
       // printf("Retrieved line of length %zu :\n", read);
        
        // if i is not there in line skip file.

        length = strlen(line);

       
        // opening.
         ret = strstr(line, "while");

       
      
      if (ret){
         // printf("%p" , fp);
          wflag=1;
           //printf("%s\n", line);
               strcat(actual , line);
          continue;
        }

  if(wflag==0){
            // printf("%s\n", line);
                 strcat(actual , line);
         }

   cret = strstr(line, "}");
      if (cret && wflag==1){
         
          
       // printf("%s\n",line );
            strcat(actual , line);
        wflag=0;
        cflag=1;
        }


        if(wflag==1){
               // ret = strstr(line, "i") || strstr(line, "+") || strstr(line, "*") || strstr(line, "/")   ;
      
            if (strstr(line, "i") || strstr(line, "+") || strstr(line, "*") || strstr(line, "/") ){
               
                //printf("%s\n", line);
                strcat(actual , line);

              }else{

                  strcat(red , line);
              }


        }


      //closing


     



    }

   fclose(fp);



   // print second time.

 fp = fopen("program.c","r");
  
  printf("\n");
    while ((read = getline(&line, &len, fp)) != -1) {
       // printf("Retrieved line of length %zu :\n", read);
        
        // if i is not there in line skip file.

        length = strlen(line);

       
        // opening.
         ret = strstr(line, "while");

       
      
      if (ret){
          //printf("%p" , fp);
          wflag=1;
          printf("%s\n" , red);
          printf("%s\n", line);
               //strcat(actual , line);
          continue;
        }

  if(wflag==0){
            printf("%s\n", line);
                 //strcat(actual , line);
         }

   cret = strstr(line, "}");
      if (cret && wflag==1){
         
          
       printf("%s\n",line );
            //strcat(actual , line);
        wflag=0;
        cflag=1;
        }


        if(wflag==1){
               // ret = strstr(line, "i") || strstr(line, "+") || strstr(line, "*") || strstr(line, "/")   ;
      
            if (strstr(line, "i") || strstr(line, "+") || strstr(line, "*") || strstr(line, "/") || strstr(line, "printf") ){
               
                printf("%s\n", line);
               // strcat(actual , line);

              }else{

                  strcat(red , line);
              }


        }


      //closing


     



    }

   fclose(fp);


//printf("Actual code : \n%s" , actual);
//printf("Independent steps place before while loop: %s\n" , red);
   return(0);




}

