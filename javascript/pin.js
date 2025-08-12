let n = 0, pin =777;
do {
    n = prompt("Enter PIN:");
    if (n != pin) {
        alert("wrong PIN, try again");
    }
} while (n != pin);
alert("Connection SUCCEEDED");
