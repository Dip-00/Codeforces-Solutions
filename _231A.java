
import java.util.Scanner;


public class _231A {
    public static void main(String[] args) {
        
        Scanner in =new Scanner (System.in);
        int n=in.nextInt();
        int a[]=new int[5];
        int count=0;
        int temp=0;
        for(int i =0;i<n;i++)
        {
           for(int j =0;j<3;j++)
            {
                a[j]=in.nextInt();
                if(a[j]==1)
                {
                    count++;
                }               
            }
           if(count>=2)
           {
               temp++;
           }
           count=0;
        }
        
        System.out.println(temp);
    }
}
