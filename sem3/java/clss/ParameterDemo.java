import java.applet.*;  
import java.awt.*;  
      
public class ParameterDemo extends Applet{  
      
public void paint(Graphics g){  
	
	
	Font f = new Font("Source Code Pro", Font.BOLD,20);
	Color blue = new Color(0,0,255);
	setSize(300,100);
	g.setFont(f);
	g.setColor(Color.blue);
	String name=getParameter("name");  
	String roll_no=getParameter("roll_no"); 
	g.drawString(name,50, 50); 
	g.drawString(roll_no,50, 80);  
    }  
      
  }  
