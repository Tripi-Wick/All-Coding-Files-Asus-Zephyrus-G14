// Event bubbling is the property of event listeners due to which when a event lister of the child is invoked and parent also have a same lister then that is invoked too and so on 
// To prevent this we use event.stopPropagation
// This is also beneficial if new things are created on the run cause event listener don't listen to them but if they are the parent and event is happening on the child then they do listen 
// hence we can use it as event delegation too

let div = document.querySelector('div')
let ul = document.querySelector('ul')
let li = document.querySelector('li')


div.addEventListener("click",()=>{
    console.log('div Pressed')
})
ul.addEventListener("click",(event)=>{
    event.stopPropagation();
    console.log('ul Pressed')
})
li.addEventListener("click",(event)=>{
    event.stopPropagation();
    console.log('li Pressed')
})