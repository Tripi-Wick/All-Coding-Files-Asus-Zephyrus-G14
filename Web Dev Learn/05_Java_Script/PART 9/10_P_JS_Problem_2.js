let button = document.createElement('button');
let input = document.createElement('input');
document.querySelector("body").append(input);
document.querySelector("body").append(button);
button.innerText = "Click Me"

button.setAttribute('placeholder','username');
button.setAttribute('id','btn');

let b1 = document.querySelector('button');
let b2 = document.getElementById('btn');
console.dir(b1);
console.dir(b2);

b1.classList.add('blue_white');

let h1 = document.createElement('h1');
h1.innerText ="DOM Practice";
h1.classList.add("decoration");

let p = document.createElement("p");
p.innerHTML ="Apana College <b> Delta </b> Practice";

document.querySelector("body").append(h1);
document.querySelector("body").append(p);
