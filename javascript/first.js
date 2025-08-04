console.log("Hello World")
alert("Hello world")

console.log(4 + 5)
console.log(10 * 50)
let c = 2 //let is always used in javascript rather than var due to hoisting problem
var a = 5
var b = 15
console.log(a)
{
    let c = a + b
    var a = 4
    console.log(c)
}
console.log(c)
console.log(a)

let n = prompt("Enter a no. ")
if (n % 2 == 0) {
    alert(n+" is even")
}
else {
    alert(n+" is odd")
}

let istrue=confirm("Are you waiting for GTA 6")
if (istrue) {
    alert("So am I")
}
else {
    alert("Oldie")
}

document.title= "Aditya" //change the title of tab from js

document.body.style.backgroundColor="red" //change bg color of body from js
