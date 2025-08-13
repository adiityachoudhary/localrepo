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

function faultycalculator(n1, n2, operator) {
    let random = Math.random() < 0.1;

    if (random) {
        switch (operator) {
            case '+': operator = '-';
                break;
            case '*': operator = '+';
                break;
            case '-': operator = '/';
                break;
            case '/': operator = '**';
                break;
        } console.log("Faulty Calulator activated!!")
    }

    switch (operator) {
        case '+': return n1 + n2;
        case '-': return n1 - n2;
        case '*': return n1 * n2;
        case '/': return n1 / n2;
        default: return "Invalid opeartor";
    }
}

//taking inputs from user
let num1 = parseFloat(prompt("Enter first number: "));
let op = prompt("Enter operation: + ,- ,* ,/ ");
let num2 = parseFloat(prompt("Enter second number: "));

//function call with actual parameters
let result = faultycalculator(num1, num2, op);
alert("Result: " + result);
console.log("Result: " + result);