using System;

namespace ObjectX
{
    class RectangleX
    {
        public int Length;
        public int Breadth;

        public RectangleX()
        {
            this.Length = 10;
            this.Breadth = 11;
        }

        public RectangleX(int no1,int no2)
        {
            this.Length = no1;
            this.Breadth = no2;
        }

        public int Area()
        {
            return Length * Breadth;
        }
    }

    class Object_Creation
    {
        public static void Main(String[] arg)
        {
            int length = 10;
            int breadth = 15;

            RectangleX obj = new RectangleX(length,breadth);
            int ret = obj.Area();

            var obj1 = new RectangleX();
            int ret1 = obj1.Area();

            Console.WriteLine("Area of rectangal is : "+ret);
            Console.WriteLine("Area of rectangal is : "+ret1);
            Console.WriteLine(obj.Length);
            Console.WriteLine(obj.Breadth);
        }
    }
}