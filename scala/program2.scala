import scala.io.StdIn.{readInt}

class Addition(var no1 : Int,var no2 : Int)
{
    def Arithmatic(): Int = {
        var ans = this.no1 + this.no2
        return ans;
    }
}

object Demo
{
    def main(args : Array[String])
    {
        println("Enter first number.");
        var no1 : Int = readInt()
        println("Enter second number.")
        var no2 : Int = readInt()

        var obj = new Addition(no1,no2);
        var res = obj.Arithmatic();

        println("Output : "+res);
    }
}