let a = [1, 5, 8, 88, 93];
for (let i = 0; i < a.length; i++) {
    const element = a[i];
    console.log(element);
}



//for each
a.forEach((value, index, array) => {
    console.log(value, index, array);
});




//for in loop used in context of an object
let obj = {
    "name": "Harry",
    "college": "IIT Kharagpur",
    "role": "Programmer"
}
for (const key in obj) {
    if (Object.prototype.hasOwnProperty.call(obj, key)) {
        const element = obj[key];
        console.log(`${key} : ${element}`);
    }
}




// for of loop used in iterable data structures like array strings etc
let arr = [1, 2, 3, 4, 5]

for (const value of arr) {
    console.log(value);
}






//map() is used to create a new array from an existing array

// let newarr = [];
// for (let i = 0; i < arr.length; i++) {
//     newarr.push(arr[i] ** 2);
// }
// console.log(newarr);
//to create this we use map() to simplify the above

let newarr = arr.map((element) => {
    return element ** 2;
})
console.log(newarr);






//filter() - it creates a new array which passes a test 
let a1 = [3, 41, 5, 7, 3, 50];
console.log(a1.filter(element => {
    if (element > 5)
        return true;
    else
        return false;
}))






//reduce()  - Reduces an array to a single value
let a2 = [1, 2, 3, 4, 5];
console.log(a2.reduce((a, b) => {
    return a * b;
}))






//Array.from("String")     - this will convert the string into an array
console.log(Array.from("Harry")); 
