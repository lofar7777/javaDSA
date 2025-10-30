import java.util.ArrayList;

class Main {
    public static void main(String[] args) {
        // ArrayList<Integer> nums = new ArrayList<>();
        // nums.add(12);
        // nums.add(23);
        // nums.add(22);
        
        // for(int i = 0; i<nums.size();i++){
            
        // }
    
        // int[] arr = new int[6];
        int arr[] = {12, 43, 11, 65, 98, 9};
        int max =0;
        
        // min
        for(int i = 0; i<arr.length-1; i++){
            if(arr[i] < arr[i+1]){
                max = arr[i];
            }
            
        }System.out.println("Max num is: " + max);
    }
}










// Not final need to be checked
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        // int[][] arr = new int[5][];
        // arr[0] =new int[]{2,4, 5, 6};
        
        // System.out.println(arr[0][2]);
        // System.out.println(arr[0].length);
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length of the outer array");
        int outerLength = sc.nextInt();
        System.out.println("Enter the length of the inner array");
        
        // int innerLength = sc.nextInt();
        int jagged[][] = new int[outerLength][];
        for(int i = 0; i<outerLength;i++){
            System.out.println("Enter length of the jagged "+ i+ " index.");
            
            int innerLength = sc.nextInt();
            for(int j = 0; j<innerLength;j++){
                jagged[i][j] = sc.nextInt();
            }
        }
        
        
        
        // jagged[0] = new int[] {1, 2, 3};
        // jagged[1] = new int[] {4, 5};
        // jagged[2] = new int[] {6, 7, 8, 9, 10};
        // jagged[3] = new int[] {11, 12, 13};
        // jagged[0][0] = 1;
        // jagged[0][1] = 2;
        // jagged[0][2] = 3;
        // jagged[1][0] = 4;
        // jagged[1][1] = 5;
        // jagged[1][2] = 6;
        // jagged[1][3] = 7;
        // jagged[1][4] = 8;
        // jagged[2][0] = 9;
        // jagged[2][1] = 10;
        // jagged[3][0] = 11;
        // jagged[3][1] = 12;
        // jagged[3][2] = 13;
        
        for(int i = 0; i<jagged.length;i++){
            for(int j = 0; j<jagged[i].length;j++){
                System.out.print(jagged[i][j] + " ");
            }System.out.println();
        }
        
        
    }
}
