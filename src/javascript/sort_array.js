array = [2, 1, 3, 5, 9, 8, 6]

// Sort array
array.sort()
console.log(array)

// but the above solution are not work with two digit number so we want to use Higher order function(HOF)

arr = [2, 1, 3, 5, 9, 11, 8, 6]
arr.sort((a, b) => a - b) // return the diffrence between two so the sort method identify which one are smaller
console.log(arr)
