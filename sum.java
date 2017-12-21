import java.io.*;
class sum
{
    public static void main(String args[]) throws IOException
    {
        int i,n,sum=0;
        DataInputStream dis= new DataInputStream(System.in);
        n=Integer.parseInt(dis.readLine());
        for(i=1;i<=n;i++)
        {
            sum=sum+i;
        }
        System.out.println("The result is "+sum);
    }
}
