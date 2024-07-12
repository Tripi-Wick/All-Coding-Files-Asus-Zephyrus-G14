// There is a default argument to the function of event listener i.e. "event/e" this is a object which tells us about the event

let inp = document.querySelector("input");

inp.addEventListener("keydown", function (event) {
    console.log(event);
    console.log("Key Code = ",event.code);
    console.log("Key = ",event.key);
    }
);

// Simple Game inputs
inp.addEventListener("keydown",function(e){
    if(e.key == 'w'){console.log("Character Moves UP")}
    else if(e.key == 's'){console.log("Character Moves Down")}
    else if(e.key == 'a'){console.log("Character Moves Left")}
    else if(e.key == 'd'){console.log("Character Moves Right")}
})

