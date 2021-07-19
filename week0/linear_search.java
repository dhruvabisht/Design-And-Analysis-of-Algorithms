import java.util.*;
public class linear_search
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int n;
		int[]array=new int[10000];
		for(int i=0;i<10000;++i)
			array[i]=i;
		System.out.print("Enter a Number to search : ");
		n=sc.nextInt();
		int flag = 0;
		int i;
		for(i=0;i<10000;++i)
		{
			if(array[i]==n)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)		
			System.out.println("The Number is found at position "+i+" in the Array.");
		else
			System.out.println("Sorry, the number is not present in the array.");
	}
}
