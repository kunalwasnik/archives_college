import java.util.Scanner;

    class OddNumberException extends Exception 
    {
        OddNumberException()
        {
            System.out.print("Odd number exception\n");
        }
      
    }

    class exp14
    {
        public static void main(String[] args)
        {
            int num;

            Scanner Sc = new Scanner(System.in);

            System.out.print("Enter any number : ");
            num = Integer.parseInt(Sc.nextLine());

            try
            {
                if(num%2 != 0)
                    throw(new OddNumberException());   
                else
                    System.out.print("Square of number is : "+num * num+"\n" );
            }
            catch(OddNumberException Ex)
            {
                System.out.print("Error : " + Ex.getMessage());
            }

           
        }
    }


/*
OUTPUT
(base) [kunal@localhost clss]$ javac exp14.java 
(base) [kunal@localhost clss]$ java exp14 
Enter any number : 3
Odd number exception
Error : null(base) [kunal@localhost clss]$ java exp14 
Enter any number : 4
Square of number is : 16
(base) [kunal@localhost clss]$ 

*/
