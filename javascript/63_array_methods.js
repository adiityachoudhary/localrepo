//arrays are mutable but strings are immutable

let a = [1, 3, 4, 5, 6];
//index  0  1  2  3  4

console.log(typeof (a)); //in javascript typeof array is object

console.log(a);
console.log(`Length of array a: , ${a.length}`);

//since arrays are mutable we can change the elements in it
a[0] = 23;
console.log(a);

console.log(a.toString());  //convert it into string like a csv

console.log(a.join(" and "));  //join() will replace the commas with the actual parameter

console.log(a.slice(2,4));

a.push(4,2,5,46,13);
console.log(a);

let b=[9,6,4,5,1]
// console.log(b.sort());
console.log(b.splice(2,1,23,24));  //splice(*start index*,*no. of elements to be deleted*,*elements to be inserted,_,_,*)
console.log(b);

b.pop(); //deletes the last element
console.log(b);

b.shift(); //deletes the first element
console.log(b);

b.push("harry"); //add elements in the end
console.log(b);

b.unshift("codewith"); //add elements in the start
console.log(b);

delete b[3];  //deletes the element but the memory is still allocated
console.log(b);

 
let c=[1,2];
let d=[3,4];
let e=[5,6];
console.log(c.concat(d,e)); // concatenate the given array

let f=[1,2,3,4,5];
console.log(f.reverse()); //reverses the array
