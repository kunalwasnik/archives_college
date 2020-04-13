import java.io.*;
class arm{

public static void main(String args[]){
	int a,r=0,s,f=0,b;
	
	a = Integer.parseInt(args[0]);
	b = a;
	
	for(int i=1;i<=3;i++){
		r = a%10;
		f = f+ r*r*r;
		a = a/10;
		
	}

if(f==b)
System.out.println(b + " is an armstrong number.");
else
System.out.println(b + " is not an armstrong number.");

	

}


}
