import java.awt.*;

class gra{
	public static void main(String args[]){
		Frame f = new Frame("Kunal");
		Button b = new Button("click me");
		Button c = new Button("he");
		f.setLayout(new FlowLayout());
		b.setSize(50,150);
		b.setLocation(100,100);
		c.setSize(50,150);
		f.setSize(500,500);
		f.add(b);
		f.add(c);
		f.setVisible(true);


	}


	


}
