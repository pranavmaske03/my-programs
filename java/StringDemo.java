
class StringDemo  
{
    public static void main(String A[])
    {
        String str2 = "Hello";  //  memory allocate in string literal pool

        String str3 = new String("Hello");  // Heap 

        System.out.println(str2);
        System.out.println(str3);

        System.out.println(str2.length());
        System.out.println(str3.length());
    }
}