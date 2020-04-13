// Experiment 5

import java.io.*;
import java.util.*;

class complexMain{
        public static void main(String args[]){
	complex c1 , c2,c3;

	
	c1 = new complex(2,3);

		
				
	c2 = new complex(4,5);

	c3 = new complex(c1 , c2);


	System.out.println("Addition of both complex number is " + c3.real + " + " + c3.img+"i");	 

}


}

class complex{

        float real , img;
	
	
         complex(float r , float i){
                real = r;
		img = i;
				

        }

	complex (complex c1 , complex c2){
		double aimag , areal;	
		real = c1.real + c2.real;
		img = c1.img + c2.img;


	}


}

/*
OUTPUT : 

student@student-desktop:~/kunal/was$ javac complexMain.java 
student@student-desktop:~/kunal/was$ java complexMain 
Enter real and Imaginary part of number : 3 4
Enter real and Imaginary part of number : 2 5
Addition of both complex number is 5.0 + 9.0i
student@student-desktop:~/kunal/was$ 




*/
 
