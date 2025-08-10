
object Variables extends App
{
    var num1 : Int = 11;
    val num2 : Int = 22;

    num1 = 12;
    // val = 23;  now allowed

    // multiple variable assignments 
    val (val1 : Int, str) = (55, "hello world..");

    println(num1)
    println(num2)
    println(val1)
    println(str)
}