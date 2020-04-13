// Experiment 6

import java.io.*;
import java.util.*;

class shapes
{

	public static void main(String args[])
	{
		double r , l,b , answer;
		int a,ch;
		shapesArea s1;
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Calculate area of :");
		System.out.println("   1:Circle\n   2:Square\n   3:Rectangle");
		System.out.print("Enter choice : ");
		ch = sc.nextInt();		
		switch(ch){
		
			case 1:
			    System.out.print("Enter radius of circle : ");	
		  	    r = sc.nextDouble();
		   	    s1 = new shapesArea(r);
		     	break;

			case 2:
				System.out.print("Enter side  of square : ");	
				a = sc.nextInt();
				s1 =  new shapesArea(a);
				break;
	
			case 3:
				System.out.print("Enter Length and Breadth of Rectangle : ");	
				l = sc.nextDouble();
				b = sc.nextDouble();
				s1 = new shapesArea(l,b);
				break;
			
			default :
				
				System.out.print("Enter Valid choice. ");	


		}
		
	


	
	

	}


}

class shapesArea{
	double area;
	
	shapesArea( double r){
		area =  3.14*r*r;
		System.out.println("Area of the circle is +  "  + area);	

	}

	shapesArea(int a){
		area=  a*a;
		System.out.println("Area of the square is +  "  + area);

	}
	shapesArea(double l , double b){
		area= l*b;
		System.out.println("Area of the rectangle is   "  + area);

	}


}


/*
Output : 


student@student-desktop:~/kunal/was$ javac shapes.java 
student@student-desktop:~/kunal/was$ java shapes
Calculate area of :
   1:Circle
   2:Square
   3:Rectangle
Enter choice : 1
Enter radius of circle : 3
Area of the circle is +  28.259999999999998
student@student-desktop:~/kunal/was$ java shapes
Calculate area of :
   1:Circle
   2:Square
   3:Rectangle
Enter choice : 2
Enter side  of square : 3
Area of the square is +  9.0
student@student-desktop:~/kunal/was$ java shapes
Calculate area of :
   1:Circle
   2:Square
   3:Rectangle
Enter choice : 3
Enter Length and Breadth of Rectangle : 3 4
Area of the rectangle is   12.0


*/

