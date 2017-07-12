import java.util.Scanner;
public class Helwrd {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		String str=sc.next();
		int n=sc.nextInt();
		String str1="";
		int i;
		for(i=0;i<str.length();i++) {
			if(i==n) {
				str1=str1+"";
				n+=2;
			}
			else {
				str1=str1+str.charAt(i);
			}
		}
		System.out.println(str1);

	}

}
