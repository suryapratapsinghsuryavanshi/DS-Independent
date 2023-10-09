/*
Beautiful_number
----------------
A number whos are greater to both
there consucative number and lessor
to there both first and last element in the list.

[10, 5, 6, 4, 9]
=> so the 5 < 6 > 4 & 10 > 6 < 9 so the 6 is 
beautiful number.
*/

arr = [13, 6, 9, 11, 8, 5, 7, 28]
start_ele = arr[0]
end_ele = arr[arr.length - 1]
res = []

for(i = 2; i < arr.length - 2; i++) {
    if(arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1] && arr[i] < start_ele & arr[i] < end_ele) {
        res.push(arr[i])
    }
}

console.log(res) // [ 11 ]
