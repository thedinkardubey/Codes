import java.util.Scanner;
public class _08_oddOrEven {
    public int number;
    _08_oddOrEven(int n){
        number = n;
    }
public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter a number: ");
     int userInput= sc.nextInt();
    _08_oddOrEven obj = new _08_oddOrEven(userInput);
    if(obj.number%2==0){
        System.out.println("The "+obj.number+" is even!!!");
    }
    else{
        System.out.println("The "+obj.number+" is odd!!!");
    }
}
}
