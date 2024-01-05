import java.util.Scanner;
public class _06_fibonnaciSeries {
    private int count;
    _06_fibonnaciSeries(int n){
        count=n;
    }
    public void printFibonnaci(){
        int firstTerm=0;
        int secondTerm=1;
        System.out.println("Fibonacci Series upto "+count+" terms is: ");
        for(int i=0;i<count;i++){
            System.out.println(firstTerm+" ");
            int nextTerm=firstTerm+secondTerm;
            firstTerm=secondTerm;
            secondTerm=nextTerm;
        }
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the no. of terms in Fibonacci Series: ");
        int userInput=sc.nextInt();
        _06_fibonnaciSeries fs1 = new _06_fibonnaciSeries(userInput);
        fs1.printFibonnaci();
        sc.close();
    }
}
