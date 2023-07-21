import java.util.Scanner;
public class Insertion {
    int i, j, n, temp;
    void InsertionSort(int arr[]){
        for(i=1; i<n; i++){
            temp = arr[i];
            j=i-1;
            while(j>=0 && arr[j]>temp){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = temp;
        }
    }
    void PrintArray(int arr[]){
        for(i=0; i<n; i++){
            System.out.print(arr[i]+"\t");
        }System.out.println();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Insertion obj = new Insertion();
        System.out.println("Enter Array Size: ");
        obj.n=sc.nextInt();
        int arr[] = new int[obj.n];
        System.out.println("Enter "+obj.n+" Number:");
        for(int i=0; i<obj.n; i++){
            arr[i] = sc.nextInt();
        }
        System.out.println("Befor Sort: ");
        obj.PrintArray(arr);
        obj.InsertionSort(arr);
        System.out.println("After Insertion Sort: ");
        obj.PrintArray(arr);
    }
}
