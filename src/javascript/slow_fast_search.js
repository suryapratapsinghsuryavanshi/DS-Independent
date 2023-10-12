/*
Slow fast search: the slow fast search are a techniqe of search where we 
search with the help of two pointers, the use of two pointers are the fist
pointer increment one by one and second pointer are incress with 2 so at the
end result the anyone are get the value the retrive either it take O(n) time.
*/

search_element = 5;
list = [ 2, 8, 11, 36, 20, 11, 9, 8, 5, 3, 4, 32, 21, 8, 0, 2, 1]
let itration_count  = 0;

fast = 2;

for(let slow = 0; slow < list.length; slow++) {
    itration_count += 1;
    if(list[slow] == search_element || list[fast] == search_element) {
        console.log("Find: " + list[slow]);
        break;
    }
    slow += 1;
    fast += 2;
}

console.log("Itration Count: " + itration_count);
