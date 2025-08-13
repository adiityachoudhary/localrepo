/*create a faulty calculator using javascript
1. It takes two numbers from the user 
2. It performs wrong operations as follows:

+ --> -
* --> +
- --> /
/ --> **

It performs wrong operation 10% of the times

Hint:
use function : Math.random()

*/


let n1 = parseFloat(prompt("Enter first no.:"));
let opt = prompt("Enter operation(+,-,*,/) :");
let n2 = parseFloat(prompt("Enter first no.:"));

let is_true = Math.random() < 0.10;
console.log(`Faulty calculator is activated: ${is_true}`);

let obj = {
    "+": "-",
    "*": "+",
    "-": "/",
    "/": "**",
};

if (is_true) {
    opt = obj[opt];
    console.log(`Result is : ${n1} ${opt} ${n2}`);
    alert(`Result is : ${eval(`${n1} ${opt} ${n2}`)}`);  //eval() is a function which evaluates the expression and gives the result
}
else {
    console.log(`Result is : ${n1} ${opt} ${n2}`);
    alert(`Result is : ${eval(`${n1} ${opt} ${n2}`)}`);
}