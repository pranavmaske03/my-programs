import scala.io.StdIn.{readInt}

class Digit(var num : Int)
{
    private var sum : Int = 0;

    var sumDigit = {
        while(num != 0) {
            var digit = num % 10;
            this.sum += digit;
            num /= 10;
        }
        this.sum;
    }
}

object Demo extends App
{
    println("Enter number : ")
    var num : Int = readInt();

    var obj = new Digit(num);
    println(obj.sumDigit);
}