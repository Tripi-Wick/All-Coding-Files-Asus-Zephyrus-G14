let p = document.createElement('p');
document.querySelector("body").appendChild(p);
p.innerText='Hey I am Red';    
p.style.color='red';

let h3 = document.createElement('h3');
h3.innerText="I m a blue h3";
h3.style.color='blue';
p.insertAdjacentElement("afterend",h3);

let div = document.createElement('div');
div.style.border = 'black solid 1px';
div.style.backgroundColor = 'pink';
document.querySelector('body').append(div);

let h1 = document.createElement('h1');
h1.innerText = "I m in a div";
let p2 = document.createElement("p");
p2.innerText = "ME TOO!";

document.querySelector('div').insertAdjacentElement("afterbegin",h1);
document.querySelector('div').insertAdjacentElement("beforeend",p2);