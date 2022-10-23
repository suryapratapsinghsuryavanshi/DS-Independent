public class Main {
    public static void main(String args[]) {
        int n, max, min, i;
        int[] array = new int[50];
   
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of elements:");
        n = sc.nextInt();
        
        System.out.println("Enter " + n + " elements:");
        for(i = 0; i < n; i++) {
            array[i] = sc.nextInt();
        }
   
        max = min = array[0];
        for(i = 1; i < n; i++) {
            if(array[i] > max)
                max = array[i];
            else if (array[i] < min)
                min = array[i];
                
        }
        System.out.println("Largest element in array : " + max);
        System.out.println("Smallest element in array : " + min);
    }
}
