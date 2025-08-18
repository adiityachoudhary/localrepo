let arr = [1, 2, 3, 4, 5];

//reduce function
//it gives a single value based on the operation that has been performed on the elements

let factorial = arr.reduce((a, b) => {
    return a * b;
});
console.log(`reduce function by arrow function: ${factorial}`);







//another way of doing the above
const op = (a, b) => {
    return a * b;
}
let fact = arr.reduce(op);
console.log(`reduce function by using a variable: ${fact}`);