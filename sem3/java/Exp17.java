import java.applet.*;
import java.awt.*;

public class  Exp17 extends Applet 
{
	public void paint(Graphics g) {
	g.setColor(Color.MAGENTA);
	g.drawLine(30,300,200,10);
	
	g.setColor(Color.PINK);
	g.drawOval(250,50,100,100);
	g.setColor(Color.BLUE);
	g.drawRect(400,50,200,100);
   }
}
/*
<HTML>
<HEAD>
	<TITLE>Shapes</TITLE>
</HEAD>
<BODY>
	<APPLET Code="Exp17.class" Width=400 Height=300>
	</APPLET>
</BODY>    
</HTML>
*/
/*
C:\Users\Home\Desktop>javac Exp17.java
C:\Users\Home\Desktop>appletviewer Exp17.html
*/