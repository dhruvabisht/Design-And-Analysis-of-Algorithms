/*
 * Name: DHRUVA BISHT
 * Class Roll no.: 25
 * University Roll no.: 2015162
 * Week1-problem1
*/
import java.util.Scanner;
public class Linear_search_
{
	public static void main(String args[])
	{
		int[]z=new int[1000];
		int zz=0;
		int[]g=new int[1000];
		int gg=0;
		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=0;i<n;++i)
		{
			int s=sc.nextInt();
			int[]a=new int[s];
			for(int j=0;j<s;++j)
			{
				a[j]=sc.nextInt();
			}
			int target=sc.nextInt();
			int flag=0;
			int j;
			for(j=0;j<s;++j)
			{
				if(a[j]==target)
				{
					flag =1;
					break;
				}
			}
			if(flag==1) 
			{
				z[zz++]=1;
				g[gg++]=j;
			}
			else
			{
				z[zz++]=0;
				g[gg++]=j;
			}
		}
		for(int i=0;i<n;++i)
		{
			if(z[i]==1)
				System.out.println("Present "+ (g[i]+1));
			else
				System.out.println("Not Present "+ g[i]);
		}
	}
}
