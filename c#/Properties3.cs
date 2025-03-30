using System;

class Demo
{
    public int age;

    public int Age
    {
        get
        {
            return this.age;
        }
        set
        {
            if(value < 0)
            {
                throw new Exception("Age can not be negative");
            }
            this.age = value;
        }
    }
}

class Properties3
{
    public static void Main()
    {
        Demo obj = new Demo();

        obj.Age = -11;
        Console.WriteLine(obj.Age);
    }
}