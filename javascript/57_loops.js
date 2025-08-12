// loops in javascript 
// 1. for 
// 2. for in 
// 3. for of
// 4. for each

//while loop
let num = 4;
while (num > 0) {
    console.log("No. is: " + num);
    num--;
}

//do while loop
let x = 0;
do {
    console.log("This will run at least once " + x);
    x++;
} while (x <= 5);


//for loop  
let table_of = 5;
for (let i = 1; i <= 10; i++) {
    console.log(table_of * i);
}

//for in loop (used with objects)

let obj1 = { name: "Aditya", role: "Web developer", company: "Prishal Technolabs" };
obj1.salary = 50000;

for (const key in obj1) {
    const element = obj1[key];
    console.log(key, "-->", element);
}


//for of (used with iterable data structures like array, strings etc)
let fruits = ["Apple", "Banana", "Grapes"];

for (const fruit of fruits) {
    console.log(fruit);
}

//string
let message = "Hello World";
for (const char of message) {
    console.log(char);
}

