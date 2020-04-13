import java.io.*;
import java.util.Scanner;

class matrix{

  public static void main(String args[]){
  
      matop m = new matop();
      m.read();
      m.display();
      m.transpose();
  
  }

}

class matop{

 int a[][] , sum[][] , t[][];
 
 int r , c , i , j;
 
 void read(){
  Scanner sc = new Scanner(System.in);
  System.out.println("Enter no of rows & columns :  ");
  r = sc.nextInt();
    //System.out.println("Enter no of Columns: ");
  c = sc.nextInt();
  a = new int[r][c];
  System.out.println("Enter first Matrix");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        a[i][j] = sc.nextInt();
    
    }
  
  }



 }
 
  void display(){
  
   System.out.println("Displaying Matrix : ");
    for(i=0;i<r;i++){
    for(j=0;j<c;j++){
       System.out.print(a[i][j] + " ");
       
    
    }
       System.out.println();
  
   }
  
  }
  
  void transpose(){
      t = new int[r][c];
      
        
       
    for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        t[i][j] = a[j][i];
       
    
    }
      
   }
   
   
   System.out.println("Transpose of given matrix is : ");
       
    for(i=0;i<r;i++){
    for(j=0;j<c;j++){
       System.out.print(t[i][j] + " ");
       
    
    }
       System.out.println();
  
   }
  
  
  }
  
 




}


/*
  OUTPUT
  
  student@student-desktop:~/kunal$ javac matrix.java 
student@student-desktop:~/kunal$ java matrix 
Enter no of rows & columns :  
2 2
Enter first Matrix
1 2
3 4
Displaying Matrix : 
1 2 
3 4 
Transpose of given matrix is : 
1 3 
2 4 

*/
