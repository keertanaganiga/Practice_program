import java.io.*;
import java.util.*;
class A
{
int a;
int b;
A(int x,int y)
{
a=x;
b=y;
}
public void add()
{
int sum=a+b;
System.out.println(sum);
}
}
class main
{
public static void main(String args[])
{
A ob=new A(10,20);
ob.add();
}
}
