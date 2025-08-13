import scala.io.StdIn._

class Number
{
    var num : Int = 0

    def this(num : Int) {
        this()
        this.num = num;
    }

    def sumFactors(): Int = {
        var sum: Int = 0

        for(i <- 1 to (this.num/2))
        {
            if(num % i == 0) {
                sum += i;
            }
        }
        sum;
    }

    def checkPerfect(): Boolean = {
        var result = sumFactors();
        var flag = if(result == this.num) true else false
        flag;
    }
}

object Demo extends App
{
    println("Enter number to check its perfect or not : ")
    var num  = readInt()

    var obj = new Number(num)
    if (obj.checkPerfect()) {
        println("Number is perfect..")
    } else {
        println("Not perfect...")
    }
}