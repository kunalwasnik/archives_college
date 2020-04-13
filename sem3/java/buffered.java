// Experiment no 1
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class buffered{
	public static void main(String args[]) throws IOException{
		
	BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
	
	
		System.out.println("Enter a number which has to be shifted by 3 bits right");
                int num = Integer.parseInt(reader.readLine());
                System.out.println("After shifting the number " + num +" by three bits we get " + (num>>3) );


	}
}

/*

student@student-desktop:~/kunal/was$ javac buffered.java 
student@student-desktop:~/kunal/was$ java buffered 
Enter a number which has to be shifted by 3 bits right
3
After shifting the number 3 by three bits we get 0
student@student-desktop:~/kunal/was$ java buffered 
Enter a number which has to be shifted by 3 bits right
8
After shifting the number 8 by three bits we get 1


*/
