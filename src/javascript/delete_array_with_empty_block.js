// using slow fast

search_element = 5;
list = [ 2, 8, 11, 36, 20, 11, 9, 8, 5, 3, 4, 32, 21, 8, 0, 2, 1]
let itration_count  = 0;

fast = 2;

for(let slow = 0; slow < list.length; slow++) {
    itration_count += 1;
    if(list[slow] == search_element || list[fast] == search_element) {
        if(search_element == list[slow]) {
            console.log("Find: " + list[slow]);
            list[slow] = null;
        }else {
            console.log("Find: " + list[fast]);
            list[fast] = null;
        }
        break;
    }
    slow += 1;
    fast += 2;
}

console.log("Itration Count: " + itration_count);
console.log("List: ", list);