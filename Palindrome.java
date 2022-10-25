import java.util.Scanner;
public class Q9
{
   static boolean isPalindrome(char arr[])
   {
     boolean flag=true;
     int ln=arr.length;
     char []arrayCopy=new char[ln];
      for(int i=0;i<arr.length;i++)
    {
      arrayCopy[ln-(i+1)]=arr[i];
    }
//      System.out.println("ArrayCopy:");
//      for(int i=0;i<ln;i++)
//      {
//         System.out.print(arrayCopy[i] );
//      }
//      System.out.print("\n" );
      for(int i=0;i<ln;i++)
      {
      if(arrayCopy[i]==arr[i])
        flag=true;
     else
       return false;
      }
      return flag;
   }
  public static void main(String[] args)
  {
    Scanner input=new Scanner(System.in);
    String palindrome="";
    System.out.println("Enter C-String");
    palindrome=input.nextLine();
//    int ln=palindrome.length();
    char []array=palindrome.toCharArray();
//      char []array=new char[ln];
//      for(int i=0;i<ln;i++)
//      {
//        array[i]=palindrome.charAt(i);
//      }
//       System.out.println("Array:");
//      for(int i=0;i<ln;i++)
//      {
//         System.out.print(array[i] );
//      }
//       System.out.print("\n");
//       boolean flag=isPalindrome(array);
//       System.out.print(flag);
     if(isPalindrome(array))
       System.out.println("It’s a palindrome");
        else
       System.out.println("It’s not a palindrome");
        }
}