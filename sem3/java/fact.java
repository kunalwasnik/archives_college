class fact{
	public static void main(String args[]){
		int a=5;

		a = factn(5)/fact(3);

		System.out.println(factn(5));

	}

	public static int factn(int f){
		if(f==0)
		return 1;

		else 
		return f*factn(f-1);

	}

}
