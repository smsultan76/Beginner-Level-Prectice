import java.util.Scanner;
class SelectionSort{
    void Selection(int Arr[]){
        int i,j,Min,temp;
        for(i=0; i<Arr.length-1; i++){
            Min =i;                     // Let First has minimum value of the array
            for(j=i+1; j<Arr.length; j++){
                if(Arr[Min]>Arr[j])
                    Min =j;             // If found minimum value more thah that(first Min) change location to that.
            }
            // Swap minimum value with present index address.
            temp = Arr[i];
            Arr[i] = Arr[Min];
            Arr[Min] = temp;
        }   
    }
    void PrintArray(int Arr[]){
        for(int i=0; i<Arr.length; i++)
            System.out.print(Arr[i]+"  ");
        System.out.println();
    }
    public static void main(String[] args) {
        int n,i;
        Scanner Sc = new Scanner(System.in);
        SelectionSort obj = new SelectionSort();
        System.out.println("Enter Size of Array:");
        n = Sc.nextInt();
        int Arr[] = new int[n];
        System.out.println("Enter "+n+" Number");
        for(i=0; i<n; i++)
            Arr[i] = Sc.nextInt();
        System.out.println("Befor Sort:");
        obj.PrintArray(Arr);
        obj.Selection(Arr);
        System.out.println("After Selection Sort:");
        obj.PrintArray(Arr);
    }
}
