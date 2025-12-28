Print name N times using recursion

  void f(int i, int n){
    if(i>n){
      return;
    }
  System.out.println("Raj");
  f(i+1, n);
}
  public static void main(String[] args){
    int n = 5;
    f(1, n);


This will print the name Raj upto n times using recursion
  The time complexity of this code is O(N). 
  And the space complexity is also O(N).
I am adding the handwritten notes in this repository named as recursion2 (image).
