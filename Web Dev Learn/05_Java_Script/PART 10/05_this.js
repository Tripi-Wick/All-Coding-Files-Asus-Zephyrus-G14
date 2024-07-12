let h1 = document.querySelector('h1');
let p = document.querySelector('p');
let button = document.querySelector('button');

// h1.addEventListener('click',()=>{alert("HAIL HYDRA")});
// p.addEventListener('click',()=>{alert("HAIL HYDRA")});
// button.addEventListener('click',()=>{alert("HAIL HYDRA")});

// TO Avoid this redundancy we use this to make a general function and this here refers to the object itself which is using listener 

function hail (){
    alert("HAIL HYDRA");
    console.log(this.innerHTML)
}

h1.addEventListener('click',hail);
p.addEventListener('click',hail);
button.addEventListener('click',hail);