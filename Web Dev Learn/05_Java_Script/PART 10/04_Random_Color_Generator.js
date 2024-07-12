let btn = document.querySelector('button');

function Rand (){
    return Math.ceil(Math.random()*255);
}

let genRand = function (){
    let box = document.querySelector('div')
    let p = document.querySelector('div h3')
    let h1 = document.querySelector('h1')

    let r  = Rand();
    let g  = Rand();
    let b  = Rand();

    h1.innerHTML = `rgb(${r},${g},${b})`;
    p.innerHTML = "This is your random color";
    box.style.backgroundColor = `rgb(${r},${g},${b})`;
}

btn.addEventListener('click',genRand);