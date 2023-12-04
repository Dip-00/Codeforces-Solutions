import java.util.Scanner;


public class _71A {
    public static void main(String[] args) {
        
        Scanner in =new Scanner (System.in);
        
        int n=in.nextInt();
        String[] a=new String[n];
        
        for(int i=0;i<n;i++)
        {
            a[i]=in.next();
        }
        
        for(int i=0;i<n;i++)
        {
            if(a[i].length()>10)
            {
                System.out.println(a[i].charAt(0)+""+(a[i].length()-2)+""+a[i].charAt(a[i].length()-1));
            }
            else
            {
                System.out.println(a[i]);
            }
        }
    }
}