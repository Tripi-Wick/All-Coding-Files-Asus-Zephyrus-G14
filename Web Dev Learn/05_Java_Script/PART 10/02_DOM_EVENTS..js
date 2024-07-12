// Events are signals that something has occurred. (user input/actions)
let btn = document.createElement("button");
btn.innerText = "Hail Lord Sakai"
document.querySelector('body').prepend(btn);

btn.onclick = function(){
    alert("Long Live The GHOST");
}

// for Multiple buttons

function Hail() {
    alert("Long Live The GHOST");
}

let buttons = document.querySelectorAll('button');

for(btns of buttons){
    btns.onclick = Hail;
    btns.onmouseenter = function() {
       console.log("You Entered a button")
    }
}

