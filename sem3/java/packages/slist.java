import java.io.*;
import java.util.*;
class slist{

	public static void main(String args[]){
		int i=2;
		list[] l = new list[10];
		for(i=0;i<2;i++){
			l[i] = new list();
			l[i].data();

		
		}

		for(i=0;i<2;i++){

			l[i].display();

		}

	
	
	}


}

class list{
int marks ,time;
String name;
	void data(){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter name : ");
		name = sc.nextLine();

		System.out.println("Enter marks : ");
		marks = sc.nextInt();

		
		System.out.println("Enter time taken for exam : ");
		time = sc.nextInt();	

	}

	void display(){
		
		System.out.println("Name : " + name);
		System.out.println("Marks: " + marks);
		System.out.println("Time Taken : " + time);

	}


}
