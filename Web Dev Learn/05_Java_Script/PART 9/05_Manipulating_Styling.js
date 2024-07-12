// IN JS background-image become backgroundImage i.e. Camel Case

////// Style Property --> Used to select inline styling only
let heading = document.querySelector('h1');
console.dir(heading.style);

// Alerting Things
heading.style.color = "pink";
heading.style.backgroundColor = "red";

let link = document.querySelectorAll('.box a');
for(let i=0; i<link.length; i++){
    link[i].style.color = 'green'
}
for(i of link){
    i.style.color = "purple"
}
