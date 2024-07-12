let btns = document.querySelectorAll("button");

// for(btn of btns){
//     btn.onclick = function(){alert('Long Live The Ghost');}
//     btn.onclick = function(){alert('What did you say');}
// }
// This can not do this hence we use event listeners

for(btn of btns){
    btn.addEventListener('click',function(){alert('Long Live The Ghost')});
    btn.addEventListener('click',function(){alert('What did you say')});
}

// Refer to mdn for more events

//Can also be used for other elements
let p = document.querySelector('p');
p.addEventListener('click',function(){alert("You Clicked IT")})