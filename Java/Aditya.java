class Aditya
{
	public static void main(String args[])
	{
		float p,r,t,si;
		System.out.println("Jay Shree Ram");
		p=Float.parseFloat(args[0]);
		r=Float.parseFloat(args[1]);
		t=Float.parseFloat(args[2]);
		si=(p*r*t)/100;
		System.out.println("Simple interest= "+ si);
	}
}