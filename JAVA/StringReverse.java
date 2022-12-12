import java.util.Scanner;
public class StringReverse 
{
    public static String revString(String str) {
        String revStr = "";
        for (int i = str.length() - 1; i >= 0; i--) {
            revStr = revStr + str.charAt(i);
        }
        return revStr;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.print("Enter the String: ");
        String str = in.nextLine();
        System.out.println("Reverse of your entered string is: " + revString(str));
        in.close();
}
}