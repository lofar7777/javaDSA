public class Recursion4{
  // Function to print numbers from 1 to N usring Recursion
  static void printNums(int i, int n){
    // Base case
    if(i>n){
      return;
    }
    System.out.println(i);
    printNum(i+1, n);
  }

  //Function to print numbers from N to 1 using Recursion
  public static void printNums(int n){
    if(n<1){
      return;
    }
    System.out.println(n);
    printNums(n-1);
  }

  //Function to pritn numbers 1 to N using backtracking
  public static void backtrack(int i, int n){
    if(i<1){
      return;
    }
    backtrack(i-1, n);
    System.out.println(i);
  }

  // Function to print numbers N to 1 using backtracking
  public static void backtrack2(int i, int n){
    if(i>n){
      return;
    }
    backtrack(i+1, n);
    System.out.println(i);
  }


    
  public static void main(String[] args){
    // int i = 1, n = 4;
    printNums(1, 10);
    printNums(10);
    backtrack(1, 10);
    backtrack2(1, 10);
  }
}

// Output : 1
// 2
// 3
// 4
// 
