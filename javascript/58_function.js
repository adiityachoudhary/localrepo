//function

// console.log("Hey Harry");
// console.log("Hey Harry your are nice!");
// console.log("Hey Harry your tshirt is cool!");
// console.log("Hey Harry your course is good");

function nice(name) {
    console.log("Hey " + name);
    console.log("Hey " + name + " your are nice!");
    console.log("Hey " + name + " your tshirt is cool!");
    console.log("Hey " + name + " your course is good");
}

nice("Harry");
nice("Aditya");


//sum function
function sum(a, b) {
    return a + b;
}
let a = sum(30, 55);
console.log("The sum of two numbers are: ", a);

//arrow function
//it is a function encapsulated inside a variable
const fun1 = (x) => {
    console.log("this is an arrow function " + x);
}
fun1(1);
fun1(3);
fun1(18);