// Experiement no 1
import java.io.*;


class argument{
	
	public static void main(String args[]){
		int a = Integer.parseInt(args[0]);
		

		System.out.println("After shifting the number " + a +" by three bits we get " + (a>>3) );
		
	

	}
	

}

/*
student@student-desktop:~/kunal$ javac argument.java 
student@student-desktop:~/kunal$ java argument 8
After shifting the number 8 by three bits we get 1
student@student-desktop:~/kunal$ java argument 16
After shifting the number 16 by three bits we get 2


*/
