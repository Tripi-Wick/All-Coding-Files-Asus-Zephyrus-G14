// We can navigate through the code using these methods.

let img = document.querySelector('img');

console.log(img.parentElement);  //Gives Parent Element

console.log(img.nextElementSibling);  //Gives next sibling

console.log(img.previousElementSibling);  //Gives previous sibling

console.log(img.children);  //Gives Children

console.log(img.childElementCount);  //Gives Children count

console.log(document.querySelector('p').childElementCount);
console.log(document.querySelector('p').children);