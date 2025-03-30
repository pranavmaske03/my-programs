using System;
//using first;
//using second;

namespace first
{
    class Demo
    {
        public void fun()
        {
            Console.WriteLine("Inside fun of first namespace...");
        }
    }
}
namespace second
{
    class Demo
    {
        public void fun()
        {
            Console.WriteLine("Inside fun of second namespace...");
        }
    }
}

class Namespace5
{
    public static void Main(string[] args)
    {
        first.Demo obj1 = new first.Demo();
        second.Demo obj2 = new second.Demo();
        obj1.fun();
        obj2.fun();
    }
}