
//new line or blank space is considered as text in javascript document object model


// if (confirm("Green")) {
//     document.body.style.backgroundColor = "lightgreen";
// }
// else if (confirm("Yellow")) {
//     document.body.style.backgroundColor = "yellow";
// } 


document.title = "67_DOM.js";
// document.body.style.backgroundColor = "skyblue";

document.body; //shows the whole body tag

document.body.childNodes; //list  all the child nodes inside body tag

document.body.childNodes[3]; //select the child at node[3] 

document.body.childNodes[3].childNodes; //list all the child nodes inside the node[3]


let parent = document.body.childNodes[3];   //select the 3rd node 
parent.firstChild;  //prints the frist child if (doesn't ignore blank space)
parent.lastChild;   //prints the last child (doesn't ignore blank space)

parent.firstElementChild;   //prints the frist element (does ignore blank space)

parent.childElementCount;   //counts all the elements present in the selected node



let c = document.body.childNodes[3];  //selecting child node 3 in variable c

c.style.backgroundColor = "yellow"
c.style.backgroundColor = "blue"
c.childNodes[1].style.backgroundColor = "yellow"
c.childNodes[1].style.color = "black"

c.childNodes[3].style.backgroundColor = "skyblue"
c.childNodes[5].style.backgroundColor = "green"
c.childNodes[7].style.backgroundColor = "violet"
c.childNodes[9].style.backgroundColor = "magenta"
c.childNodes[9].style.backgroundColor = "cyan"
c.childNodes[9].style.color = "black"
c.childNodes[1].style.backgroundColor = "blue"
c.childNodes[1].style.color = "white"

c.style.removeProperty("background-color") //remove the property backgroundcolor

c.childNodes[1].parentNode  // shows the parent node of childNodes[1]

c.children; //lists all the actual HTML elements ignoring text nodes

//we can also manipulate them
c.children[1].style.backgroundColor = "red"


//next element to child[4] i.e. child[5]
c.children[4].nextElementSibling


//previous element to child[4] i.e. child[3]
c.children[4].previousElementSibling


//for tables
let t = document.body.children[2].firstElementChild

t.rows;  //collection of <tr> elements
t.caption  //reference to <caption>

