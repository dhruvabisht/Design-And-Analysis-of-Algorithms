/*
 * Name: DHRUVA BISHT
 * Class Roll no.: 25
 * University Roll no.: 2015162
 * Week1-problem2
*/
import java.util.Scanner;
public class Binary_search
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
			
			int flag =0;
			int fr=0;
			int bh=s-1;
			int mid=0;
			while(fr<=bh)
			{
				mid=(fr+bh)/2;
				if(a[mid]==target)
				{
					flag=1;
					break;
				}
				else if(a[mid]>target)
				{
					bh=mid-1;
				}
				else
				{
					fr=mid+1;
				}
					
			}
			if(flag==1) 
			{
				z[zz++]=1;
				g[gg++]=mid;
			}
			else
			{
				z[zz++]=0;
				g[gg++]=mid;
			}
		}
		for(int i=0;i<n;++i)
		{
			if(z[i]==1)
				System.out.println("Present "+ (g[i]+1));
			else
				System.out.println("Not Present "+(g[i]+1));
		}
	}
}
