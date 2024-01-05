public class PointerExample {
    public static void main(String[] args) {
        int i = 69;
        int j = i; // Java doesn't have pointers, so we use a simple variable assignment
        System.out.println("Enter the value of i: " + j); // This will print the value of i.
        System.out.println("Enter the address of i: " + System.identityHashCode(i)); // This will print a unique identifier (hash code) for the object i.
    }
}