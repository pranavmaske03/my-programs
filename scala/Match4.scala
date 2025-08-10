
object Match
{
    def Greet(name : String) = {
        val msg = s"Hello, $name"
        msg.toUpperCase()
    }
    def main(args : Array[String]) {
        println(Greet("pranav"));
    }
}