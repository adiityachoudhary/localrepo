console.log("Hello I am conditional tutorial");

//although semicolon is optional in javascript yet it is a good idea to use it
//also use blocks {...} to write your code

let age = 45;
console.log("Your age is " + age)
if (age > 18) {
    console.log("You can drive");
}
else {
    console.log("You're too young to drive");
}

//operators
let a = 4;
let b = 3;
console.log(a + b);
console.log(a - b);
console.log(a * b);
console.log(a / b);
console.log(a % b);
console.log(a ** b);


let n = 25;

if (n % 2 == 0) {
    console.log(n + " is an EVEN no.");
}
else {
    console.log(n + " is an ODD no.");
}

/*comparison operators
== checks if its equal or not
=== checks the value and the data type 
!== checks the value and data type as well
(contition? if_true : if_false) : ternary operator ?
 */

c = (a > b) ? (a - b) : (b - a)
console.log("The difference between a and b is " + c);


//this will do the same job as above ternary operator
console.log("Value of a: " + a)
console.log("Value of b: " + b)
if (a > b) {
    console.log(a - b);
}
else {
    console.log(b - a)
}


