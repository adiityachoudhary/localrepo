//strings
//javascript is a forgiving programming language and throws as minimum errors as possible
// strings are immutable in javascript  and cannot be changed in the original string


console.log("This is a string tutorial");
let a = "Harry";
console.log(a[0]);
console.log(a[1]);
console.log(a[2]);
console.log(a[3]);
console.log(a[4]);
console.log("character at index 4 : "+a.charAt(4)); //prints character at index 4
console.log("character at index 2 : "+a.charAt(2));//prints character at index 2
console.log("index of \"a\" : "+a.indexOf("a"));//prints character at index 2


console.log(a.length); //calculates the length of the string

let name1 = "Harry";
let friend = "Rohan";

console.log("His name is " + name1 + " and his friend's name is " + friend);

//template literals to add variables `${variable_name}`
console.log(`His name is ${name1} and his friend's name is ${friend}`);

//escape sequence
console.log(`"Roh"an"`); //using backtick
console.log("Roh\"an");  //using escape sequence backslash \
console.log("Roh\nan");  // \n to move the cursor to next line
console.log("Rohan\tHarry"); // \t to give a tab space



let s1 = "Rohan";
let s = "CodeWithHarry";
console.log(s.toUpperCase()); //this is a function requires ()
console.log(s.toLowerCase()); //this is a function requires () 

console.log(s.length);  //this is property 

console.log(s.slice(0, 4));  //this will print character  from 0 to 3
console.log(s.slice(4, 8));  //this will print character  from 4 to 7
console.log(s.slice(8));  //this will print all character from 3 

console.log(s.replace("Code", "Learn")); //"Code will be replaced with "Learn"

console.log(s1 + s + "Rohan" + "Shivam");  //concatenate
console.log(s1.concat(s, "Rahul", "Prakash", "Sunny"));  //concatenate

let s3 = "     CodeWithHarry       ";
console.log(s3.trim());  //.trim() removes whitespaces from start and end
console.log(s3.trim().concat(s1));