//check the no is divisible by 2 and 3 or not

let n = prompt("Enter any no.");
if (n % 2 == 0 && n % 3 == 0) {
    console.log(n + " is divisible by both 2 and 3");
    alert(n + " is divisible by both 2 and 3");
}
else if (n%2==0) {
    console.log(n + " is divisible by 2 only");
    alert(n + " is not divisible by 2 only");
}
else if (n%3==0) {
    console.log(n + " is divisible by 3 only");
    alert(n + " is divisible by 3 only");
}
else {
    console.log("Not divisible by 2 and 3");
    alert("Not divisible by 2 and 3");
}