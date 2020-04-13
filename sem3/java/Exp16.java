import java.awt.*;
import java.applet.*;
public class Exp16 extends Applet
{
		TextField t1, t2;
		public void init()
        {
                t1 = new TextField(10);
                t2 = new TextField(10);

                add(t1);
                add(t2);

                t1.setText("");
                t2.setText("");
        }
        public void paint(Graphics g)
        {
                
                String str1,str2;

                g.drawString("Enter Name and Roll No. in above Boxes: ",50,50);
		 str1=t1.getText();
		 str2=t2.getText();
               
                

                g.drawString("Name : ",50,100);
                g.drawString(str1,100,100);
		g.drawString("Roll No : ",50,125);
                g.drawString(str2,100,125);
        }
}
/*

C:\Users\Home\Desktop>javac Exp16.java

C:\Users\Home\Desktop>appletviewer Exp16.html

*/
/*
<HTML>
<HEAD>
	<TITLE>Getting Input from the User</TITLE>
</HEAD>
<BODY>
	<APPLET Code="Exp16.class" Width=400 Height=300>
	</APPLET>
</BODY>    
</HTML>
*/