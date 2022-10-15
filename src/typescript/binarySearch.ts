const binary_search = (arr: number[], low: number, high: number, x: number): number => {
    if (high >= low) {
        const mid = Math.floor((high + low) / 2)

        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] > x) {
            return binary_search(arr, low, mid - 1, x);
        } else {
            return binary_search(arr, mid + 1, high, x);
        }
    } else {
        return -1;
    }
};


const arr = [ 2, 4, 6, 10, 30 ];
const x = 6;

const result = binary_search(arr, 0, arr.length - 1, x);
 
if (result != -1){
    console.log("Element is present at index", result);
} else {
    console.log("Element is not present in array");
}