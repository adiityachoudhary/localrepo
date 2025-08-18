let a = [45, 48, 85, 96];

//array.foreach((value,index,array)=>{})     this doesn't make a new array
a.forEach((element, index, array) => {
    console.log(element + 1, index, array);
});