import java.util.*;
public class _04_addToNo {
    public static void main(String[] args){
        System.out.println("Function to add numbers: ");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first no.: ");
        int firstNo=sc.nextInt();
        System.out.println("Enter the second no.: ");
        int secondNo=sc.nextInt();
        sc.close();
        int sum=firstNo+secondNo;
        System.out.println("The sum of the two numbers are: "+ sum);
    }
}
