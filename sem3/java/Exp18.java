import java.awt.*;
import java.applet.*;
import java.awt.event.*;
public class Exp18 extends Applet implements ActionListener
{
int s_age; 
String gender_male,gender_female="";
String s_sex,s_address,s_department;
Button b1=new Button("Print");
Button b2=new Button("Clear");
Label l1=new Label("Name :",Label.LEFT);
Label l2=new Label("Age :",Label.LEFT);
Label l3=new Label("Sex(M/F):",Label.LEFT);
Label l4=new Label("Address:",Label.LEFT);
Label l5=new Label("Department:",Label.LEFT);
Label l6=new Label("Contact No:",Label.LEFT);
Label l7=new Label("DOB :",Label.LEFT);
TextField t1=new TextField();
TextField k1=new TextField();
TextField k2=new TextField();
CheckboxGroup cbg=new CheckboxGroup();
Checkbox ck1=new Checkbox("Male",false,cbg);
Checkbox ck2=new Checkbox("Female",false,cbg);
TextArea t2=new TextArea("",200,150);
TextArea t3=new TextArea("");
Choice department=new Choice();
Choice age=new Choice();
{setForeground(Color.black);
setLayout(null);
add(l1);
add(l2);
add(l3);
add(l4);
add(l5);
add(l6);
add(l7);
add(t1);
add(k1);
add(k2);
add(t2);
add(t3);
add(b1);
add(b2);
b1.addActionListener(this);
b2.addActionListener(this);
add(ck1);
add(ck2);
add(department);
add(age);
department.add("Select");
department.add("COMPS");
department.add("IT");
department.add("EXTC");
department.add("INSTRU");
department.add("CIVIL");
age.add("Select");
age.add("17");
age.add("18");
age.add("19");
age.add("20");
age.add("21");
age.add("22");
age.add("23");
age.add("24");
l1.setBounds(95,145,100,20);
l2.setBounds(95,200,100,20);
l3.setBounds(95,250,100,20);
l4.setBounds(95,340,100,20);
l5.setBounds(95,420,100,20);
l6.setBounds(95,460,100,20);
l7.setBounds(95,500,100,20);
t1.setBounds(200,144,180,30);
k1.setBounds(200,460,180,30);
k2.setBounds(200,500,180,30);
age.setBounds(200,200,180,70);
ck1.setBounds(200,240,70,45);
ck2.setBounds(270,240,70,45);
department.setBounds(200,420,180,40);
t2.setBounds(200,345,180,60);
t3.setBounds(459,135,390,460);
b1.setBounds(160,565,70,30);
b2.setBounds(250,565,70,30);
}
public void paint(Graphics g)
{ 
g.setFont(new Font("Calibari",Font.BOLD,18));
g.setColor(Color.blue);
g.drawString("Student Information",320,80);
g.drawRect(60,115,365,500);
g.drawRect(435,115,440,500);
}
public void actionPerformed(ActionEvent ae)
{
if(ae.getSource()==b1)
{
String name=t1.getText();
String contact=k1.getText();
String dob=k2.getText();
s_address=t2.getText();
int i=age.getSelectedIndex();
int j=department.getSelectedIndex();
switch(i)
{
case 1: s_age=17;
break;
case 2: s_age=18;
break;
case 3: s_age=19;
break;
case 4: s_age=20;
break;
case 5: s_age=21;
break;
case 6: s_age=22;
break;
case 7: s_age=23;
break;
}
if(ck1.getState())
{
s_sex="Male";
}
if(ck2.getState())
{
s_sex="FeMale";
}
switch(j)
{
case 1: s_department="COMPS";
break;
case 2: s_department="IT";
break;
case 3: s_department="EXTC";
break;
case 4: s_department="INSTRU";
break;
case 5: s_department="CIVIL";
break;
}
t3.setText("\n "+" Name\t :"+name+"\n\n"+" Age\t :"+s_age+"\n\n"+" Sex\t :"+s_sex+
"\n\n  Address :"+s_address+
"\n\n Department :"+s_department+"\n\n Contact No :"+contact+"\n\n DOB\t :"+dob);
}
if(ae.getSource()==b2)
{
t1.setText("");
t2.setText("");
t3.setText("");
k1.setText("");
k2.setText("");
}
}
}
/*
C:\Users\Home\Desktop>javac Exp18.java
C:\Users\Home\Desktop>appletviewer Exp18.html
*/
/*
HTML>
<HEAD>
	<TITLE>Student Information</TITLE>
</HEAD>
<BODY>
	<APPLET Code="Exp18.class" Width=930 Height=660>
	</APPLET>
</BODY>    
</HTML>*/
