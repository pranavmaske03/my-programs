
class Marvellous    // class Marvellous extends Object
{

}

class Demo // class Demo extends Object
{

}

class GetClassDemo  // class GetClassDemo extends Object
{
    public static void main(String A[])
    {
        Marvellous mobj = new Marvellous();
        System.out.println("Name of the class is : "+mobj.getClass());

        Demo obj = new Demo();
        fun(obj);
    }
 
    public static void fun(Object ref)
    {
        System.out.println("Name of the class is : "+ref.getClass());
    }
}