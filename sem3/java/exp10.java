import java.util.*;
class exp10{

public static void main(String args[])
{
int n;
student s = new student();
Scanner sn= new Scanner(System.in);

System.out.println("Enter number of records : ");
n = sn.nextInt();

for(int i=0;i<n;i++){
	s.info();
}

s.display();



	

}


}


class student{

Vector<String> v = new Vector<String>();
String data;

void info(){
	
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter student name : ");
	data = sc.nextLine();
	v.add(data);
	
	System.out.print("Enter student roll no : ");
	data = sc.nextLine();
	v.add(data);
	
	System.out.print("Enter student age : ");
	data = sc.nextLine();
	v.add(data);

	System.out.print("Enter student number : ");
	data = sc.nextLine();
	v.add(data);


}

void display(){
System.out.println(v);
}



}
/*
Enter number of records : 
2
Enter student name : kunal
Enter student roll no : 1
Enter student age : 20
Enter student number : 123
Enter student name : dilpreet
Enter student roll no : 2
Enter student age : 21
Enter student number : 124 
[kunal, 1, 20, 123, dilpreet, 2, 21, 124]


*/

