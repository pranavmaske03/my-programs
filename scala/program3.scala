import scala.io.StdIn.{readInt}

class Check(var num : Int)
{
    def checkDigit() : Boolean = {
        var no = num;
        var flag = false;
        while(no != 0 && !flag) {
            var digit = no % 10;
            if(digit == 8) flag = true;
            no /= 10;
        }
        flag;
    }
}

object Demo
{
    def main(args : Array[String])
    {
        println("Enter number :");
        var num : Int = readInt();

        var obj = new Check(num);
        var bRet = obj.checkDigit();

        if(bRet == true) {
            println("8 is present")
        } else {
            println("8 is not present..")
        }
    }
}