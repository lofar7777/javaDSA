public class Pattern1{
  public static void main(String[] args){
    for(int i = 1; i<5; i++){
      for(int j = 0; j <= i; j++){
        int k = i;
        System.out.print(k + " ");
        k= k+10;
      }
      System.out.println();
    }
  }
}
        
