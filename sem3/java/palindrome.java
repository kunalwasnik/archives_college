import java.io.*;
import java.util.*;

class palindrome{
  public static void main(String args[]){

    String str = new String();
    String rev = new String();
    
   StringBuffer str1 =  new StringBuffer();
    
    
    System.out.println("Enter a string : ");
    Scanner sc = new Scanner(System.in);
    
    str = sc.nextLine(); 
    str1.append(str);
    str1.reverse();
    rev = str1.toString();
    
    if(str.equalsIgnoreCase(rev))
      System.out.println("Yes");
    else
     System.out.println("No");
       
  
  
  }


}

/*

OUTPUT 

student@student-desktop:~/kunal$ javac palindrome.java 
student@student-desktop:~/kunal$ java palindrome 
Enter a string : 
pop
Yes
student@student-desktop:~/kunal$ java palindrome 
Enter a string : 
hello
No

student@student-desktop:~/kunal$ java palindrome 
Enter a string : 
noon
Yes
student@student-desktop:~/kunal$ 


*/
