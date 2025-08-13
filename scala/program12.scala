import scala.io.StdIn.{readInt}

object Demo 
{
    def checkDigit(num : Int): Int = {
        var count = 0
        var temp = num;
        while(temp != 0)
        {
            var digit = temp % 10
            if(digit == 7) count += 1
            temp /= 10
        }
        return count
    }

    def main(args : Array[String])   
    {
        println("Enter number : ")
        var num : Int = readInt()

        var freq = checkDigit(num);
        println("Frequency of the 7 is : "+freq)
    }
}