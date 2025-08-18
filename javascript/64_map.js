//array.map((value,index,array)=>{})     this does make a new array
//map function creates a new array mapped from another array
//map return an array
//filter 
let a=[10,20,30,40];

let newarr = a.map((value, index, array) => {
    return value + 10;
})
console.log(`new array from mapping a: ${newarr}`);
