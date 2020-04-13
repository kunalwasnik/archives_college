// Experiement no 1
import java.io.*;
import java.util.Scanner;

class rightShiftScanner{
	
	public static void main(String args[]){
		int num;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number which has to be shifted by 3 bits right");
		num = sc.nextInt();

		System.out.println("After shifting the number " + num +" by three bits we get " + (num>>3) );
		
	

	}
	

}

/*
student@student-desktop:~/kunal$ javac rightShift.java 
student@student-desktop:~/kunal$ java rightShift 
Enter a number which has to be shifted by 3 bits right
8
After shifting the number 8 by three bits we get 1
student@student-desktop:~/kunal$ java rightShift  
Enter a number which has to be shifted by 3 bits right
16
After shifting the number 16 by three bits we get 2

*/
