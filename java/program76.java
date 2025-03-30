import java.util.*;


class program76
{
    public static void Display(int No)
    {
        int i = 0;

        for(i = 1; i <= No; i++)
        {
            System.out.print(i+"\t");
        }
        System.out.println();
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter frequency");
        int No = sobj.nextInt();

        Display(No);
    }
}