import java.util.Scanner;
public class ExtensionOfAGivenStringFile {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		String str=sc.next();
		int i;
		for(i=0;i<str.length();i++) {
			if(str.charAt(i)=='.') {
				System.out.println(str.substring(i+1));
			}
		}
	}
}
