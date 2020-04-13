import java.io.*;
import java.util.*;
class stringuse{
	public static void main(String args[]){
		String s1 , s2;
		Scanner sc = new Scanner(System.in);
		s1 = sc.nextLine();
		s2 = sc.nextLine();
		
		System.out.println(s1.substring(3,5));
		
		if(s1.equals(s2)){
			System.out.println("Strings are equal.");
		}else{
			
			System.out.println("Strings are not equal.");

		}
			
		System.out.println("String compareto : " + s1.compareTo(s2));
	}


}
