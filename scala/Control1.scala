
object Control extends App 
{
    var num : Int = 12;
    var result = if(num % 2 == 0) {
        "Even"
    } else {
        "Odd"
    }
    println("Number is : "+result);
}   