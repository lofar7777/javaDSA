// To print numbers form 1 to N using Recursion
public class Recursion4{
  static void printNums(int i, int n){
    // Base case
    if(i>n){
      return;
    }
    System.out.println(i);
    printNum(i+1, n);
  }
  public static void main(String[] args){
    int i = 1, n = 4;
    printNum(i, n);
  }
}

// Output : 1
// 2
// 3
// 4

