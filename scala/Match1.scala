object Match
{
    def demoMatch(num : Int) = num match {
        case n if num % 2 == 0 => "Even"
        case n if num % 2 != 0 => "Odd"
        case _                 => "Something Else"
    }

    def main(args : Array[String]) : Unit = {
        println("Enter value to check it is even or odd.");
        var num : Int = readInt()
        println(demoMatch(num))
    }
}