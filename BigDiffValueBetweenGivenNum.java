import java.util.Scanner;
import java.util.Arrays;
public class BigDiffValueBetweenGivenNum {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter size");
		int n=sc.nextInt();
		System.out.println("Enter numbers");
		int arr[]=new int[n];
		int i;
		for(i=0;i<n;i++){
			arr[i]=sc.nextInt();
		}
		int arr1[]=new int[n-1];
		for(i=0;i<n-1;i++) {
			arr1[i]=Math.abs(arr[i]-arr[i+1]);
		}
		Arrays.sort(arr1);
		System.out.println(arr1[arr1.length-1]);

	}

}
