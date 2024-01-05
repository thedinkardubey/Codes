class add1 {
    public int number1;

    add1(int n1) {
        number1 = n1;
    }
}

class add2 extends add1 {
    public int number2;

    add2(int n1, int n2) {
        super(n1); // Call the constructor of the superclass
        number2 = n2;
    }

    public int add() {
        int sum = number1 + number2;
        return sum;
    }
}

public class _07_sumSingleInheritance {
    public static void main(String[] args) {
        _07_sumSingleInheritance ssi1 = new _07_sumSingleInheritance();
        add2 addd = new add2(5, 9);
        System.out.println("The sum is: " + addd.add());
    }
}
