

class Demo 
{
    public static int A = 11;
    public int B;

    public Demo()
    {
        this.B = 22;
    }
}

class StaticDemo
{
    public static void main(String arg[])
    {
        Demo obj = new Demo();

        System.out.println(obj.B);
        System.out.println(Demo.A);
    }
}