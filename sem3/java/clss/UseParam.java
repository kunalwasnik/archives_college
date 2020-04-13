import java.applet.Applet;  
import java.awt.Graphics;  
      
public class UseParam extends Applet{  
      
public void paint(Graphics g){  
	setSize(300,100);
	String name=getParameter("name");  
	String roll_no=getParameter("roll_no"); 
	g.drawString(name,50, 50); 
	g.drawString(roll_no,50, 70);  
    }  
      
  }  
