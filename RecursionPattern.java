public class RecursionPattern {
    public static void printStars(int j){
        if(j==0)
            return;

        System.out.print("* ");
        printStars(j-1);
    }
    public static void pattern(int i, int j){
        // Base case
        if(i<1){
            return;
        }
        // Recursion to print rightangled pyramid
        printStars(j);
        System.out.println();
        pattern(i-1,j+1);
    }

    public static void main(String[] args) {
        pattern(5, 1);
    }
}
