// write a program to find factorial using reduce or for in javascript


let n = 5;
let arr = [];

for (let i = 0; i < n; i++) {
    arr[i] = n - i;
}
console.log(arr);

let factorial = arr.reduce((a, b) => {
    return a * b;
});

console.log(`Factorial of ${n}: ${factorial}`)