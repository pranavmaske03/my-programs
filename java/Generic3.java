class Demo <T>
{
    public T Value;

    Demo()
    {
        System.out.println("Inside default constructor ");
    }

    public void Accept(T no)
    {
        Value = no;
    }
    public void Display()
    {
        System.out.println(Value);
    }
}
class Generic3
{
    public static void main(String Arg[])
    {
        Demo <Integer> obj1 = new Demo<>();
        obj1.Accept(11);
        obj1.Display();

        Demo <Double> obj2 = new Demo<Double>();
        obj2.Accept(10.56);
        obj2.Display();

        String str = "pranav";
        Demo obj = new Demo();
        obj.Accept(str);
        obj.Display();
    }
}