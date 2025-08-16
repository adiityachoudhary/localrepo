/*
Generate a business name using the given Adjectives, shop name and a word:

Adjectives:
Crazy
Amazing
Fire

Shop name:
Engine
Foods
Garments

Another word:
Bros
Limited
Hub
*/

let a = Math.floor(Math.random() * 3) + 1;
let b = Math.floor(Math.random() * 3) + 1;
let c = Math.floor(Math.random() * 3) + 1;

let adj = {
    1: "Crazy",
    2: "Amazing",
    3: "Fire"
};
let shop = {
    1: "Engine",
    2: "Foods",
    3: "Garments"
};
let wrd = {
    1: "Bros",
    2: "Limited",
    3: "Hub"
};

console.log(`${adj[a]} ${shop[b]} ${wrd[c]}`);