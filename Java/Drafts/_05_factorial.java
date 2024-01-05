import java.util.Scanner;
public class _05_factorial {
    
        private int number;
        private long factorial=1;
        public _05_factorial(int number){
            this.number=number;
            this.factorial=factorialFinder();
            
        }
        private long factorialFinder(){
            long result =1;
            for(int i=1; i<=number; i++){
                result=result*i;
            }
            return result ;
        }
        public void showData(){
            System.out.println("The factorial of the "+number+" is: "+factorial);
        }
        public static void main(String[] args){
            Scanner f = new Scanner(System.in);
            System.out.println("Enter the number to calculate its factorial: ");
            int userInput = f.nextInt();
            _05_factorial f1 = new _05_factorial(userInput);
            f1.showData();
            f.close();
    }
}
