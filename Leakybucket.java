import java.util.*;
public class Leakybucket
{
public static void main(String args[])
{
Scanner m=new Scanner(System.in);
int no_groups,bucket_size;
System.out.println("\n Enter the bucket size\t");
bucket_size=m.nextInt();
System.out.println("\n Enter the root groups \t");
no_groups=m.nextInt();
int no_packet[]=new int[no_groups];
int in_bw[]=new int[no_groups];
int out_bw,reqd_bw=0,tot_packet=0;
for(int i=0;i<no_groups;i++)
{
System.out.println("\n Enter number of paclet for group"+(i+1)+"\t");
no_packet[i]=m.nextInt();
System.out.println("\n Enter the input bandwidth for the group"+(i+1)+"\t");
in_bw[i]=m.nextInt();
if(tot_packet+no_packet[i]<=bucket_size)
{
tot_packet=no_packet[i];
}
else
{
do
{
System.out.println("Bucket overflow");

System.out.println("Enter values less than"+(bucket_size-tot_packet));
no_packet[i]=m.nextInt();
}
while(tot_packet+no_packet[i]>bucket_size);
tot_packet+=no_packet[i];
}
reqd_bw+=(no_packet[i]*in_bw[i]);
}
System.out.println("\n the total required bandwidth"+reqd_bw);
System.out.println("Enter the output bandwidth");
out_bw=m.nextInt();
while((out_bw<=reqd_bw)&&(tot_packet>0))
{
System.out.println("Data sent \n"+(tot_packet)+"packet remaining");
System.out.println("Remaining bandwidth"+(reqd_bw-=out_bw));
if((out_bw>reqd_bw)&&(tot_packet>0))
System.out.println(tot_packet+"packet(s) discard due to insufficient bandwidth");
}
}
}

