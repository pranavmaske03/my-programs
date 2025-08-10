
object Match
{
    def main(args : Array[String])
    {
        var day = "Wed"
        var result = day match {
            case "Mon" => "Today is Monday"
            case "Tue" => "Today is Tuesday"
            case "Wed" => "Today is Wedenesday"
            case _     => "Today is Nothing"
        }

        println(result)
    }
}