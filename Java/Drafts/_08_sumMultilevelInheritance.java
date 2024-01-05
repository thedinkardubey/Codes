class Add1 {
    public int number1;

    Add1(int n1) {
        number1 = n1;
    }
}

class Add2 extends Add1 {
    public int number2;

    Add2(int n1, int n2) {
        super(n1); // Call the constructor of the superclass
        number2 = n2;
    }

    public int add() {
        return number1 + number2;
    }
}

class Add3 extends Add2 {
    public int number3;

    Add3(int n1, int n2, int n3) {
        super(n1, n2); // Call the constructor of the immediate superclass
        number3 = n3;
    }

    public int addAll() {
        return number1 + number2 + number3;
    }
}

public class _08_sumMultilevelInheritance {
    public static void main(String[] args) {
        Add3 add3 = new Add3(5, 9, 3);
        
        System.out.println("The sum of two numbers is: " + add3.add());
        System.out.println("The sum of three numbers is: " + add3.addAll());
    }
}




