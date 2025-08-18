// write a program to find factorial using for loop in javascript

n=5;
function fact(a) {
    let f = 1;
    for (let i = 1; i <= a; i++) {
        f *= i;
    }
    return f;
}
console.log(`Factorial of ${n}:  ${fact(n)}`);
