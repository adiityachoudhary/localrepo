//array.fiter(function=>{});      creates a new array if the condition satisfies
let marks = [70, 50, 40, 60, 80];

let first = marks.filter(element=>{
    return element>=60;
});
console.log(`First division marks: ${first}`);


//another example of filter function 
let arr1=[12,24,56,32,34,37,82];

let passmarks= arr1.filter(mark=>{
    return mark>=33;
})
let failmarks= arr1.filter(mark=>{
    return mark<33;
})
console.log("Pass marks: "+passmarks);
console.log("Fail marks: "+failmarks);
