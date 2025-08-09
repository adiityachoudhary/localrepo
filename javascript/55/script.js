//var is globally scoped 
//let is block scoped can't be accessed outside the block

var a = 78
let c = 45
{
    let a = 5
    let b = 7.5
    let c = "javascipt"
    console.log(a + b)
    console.log(typeof (c), typeof (b), (typeof (a))) //typeof() is a function which shows the datatype of a varaiable
}

let x = 22; // this is number
let y = 25.50;
let z = "ECMA Script"; //this is string
let p = true; // this is boolean
let q = undefined;  // this is null
let r = null; // this is not a null but this is an object

console.log(x, y, z, p, q, r)
console.log(typeof (x), typeof (y), typeof (z), typeof (p), typeof (q), typeof (r))


//object
let o = {
    name: "Aditya", //without blank space there is no need to add double quotes
    "job role": "web intern", // it is mandatory to add double quotes in name with space
    "roll no": 12345,
    "is_adult": true
}
console.log(o) //an object in js is like multiple properties about an entity
console.log(typeof (o))

//an object can be updated as well
o.salary = 50000;
console.log(o);

o.salary = 80000;
console.log(o);

o.salary = 99999;
console.log(o);