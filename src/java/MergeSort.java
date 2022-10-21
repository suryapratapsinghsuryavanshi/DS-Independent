import java.util.Arrays;

public class MergeSort {
    public static void main(String[] args) {
        int[] arr = {8, 3, 4, 12, 5, 6};
        int[] ans = mergeSort(arr);
        System.out.println(Arrays.toString(ans));
    }

    static int[] mergeSort(int[] arr) {
        if (arr.length == 1) {
            return arr;
        }

        int s = 0, e = arr.length;
        int mid = s + (e - s) / 2;

        int[] left = mergeSort(Arrays.copyOfRange(arr, s, mid));
        int[] right = mergeSort(Arrays.copyOfRange(arr, mid, e));
        return merge(left, right);
    }

    static int[] merge(int[] left, int[] right) {
        int[] ans = new int[left.length + right.length];
        int i = 0, j = 0, k = 0;    // i tracks left, j tracks right, k tracks ans
        while (i < left.length && j < right.length) {
            if (left[i] < right[j]) {
                ans[k] = left[i];
                i++;
            } else {
                ans[k] = right[j];
                j++;
            }
            k++;
        }

        // if right gets finished and left is remaining
        while (i < left.length) {
            ans[k] = left[i];
            i++;
            k++;
        }

        // if left gets finished and right is remaining
        while (j < right.length) {
            ans[k] = right[j];
            j++;
            k++;
        }
        
        return ans;
    }
}
