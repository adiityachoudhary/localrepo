n = 5;
let a = [];
for (let i = 0; i < n; i++) {
    a[i] = i + 1;
}
console.log(a);

let sum = a.reduce((a, b) => {
    return a + b;
})

let factorial = a.reduce((a, b) => {
    return a * b;
})


console.log(`Sum of digits upto ${n} is = ${sum}`);
console.log(`Factorial of ${n} is = ${factorial}`);