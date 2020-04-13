import java.util.*;
class exp13{

public static void main(String args[]){

student s = new student();
s.marks();
s.display();

}


}


class student extends acad implements sports{
int total;
void display(){
total = am + sp;
System.out.println("Total marks are : " + total);
}

}

class acad{
int am;
void marks(){

Scanner sc = new Scanner(System.in);
System.out.print("Enter academic marks :");
am = sc.nextInt();
}

}

interface sports{
int sp=40;


}

/* OUTPUT
(base) [kunal@localhost clss]$ javac exp13.java 
(base) [kunal@localhost clss]$ java exp13 
Enter academic marks :52
Total marks are : 92



*/
