public class TryCatch {
    public static int divide(int a, int b){
        // Made by harry
        int result = a/b;
        return result;
    }
    public static void main(String[] args){
        // shivam - uses divide function created by harry
        try{
            int c = divide(6, 0);
            System.out.println(c);
        }
        catch (Exception e){
            System.out.println("Exception");
        }
    }
}
