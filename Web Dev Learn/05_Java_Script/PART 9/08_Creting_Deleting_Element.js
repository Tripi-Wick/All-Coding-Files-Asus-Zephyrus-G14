// ////// Creating Element

// First we gotta create the element 
let btn = document.createElement("button");
btn.innerText =  "Dck IT !!";
// THis only creates the element and does not adds it to the document, we gotta add it explicitly

////// Methods :
// Append Child
document.querySelector('body').appendChild(btn); // Used to append only elements at the end of the selected element

// Append
document.querySelector('body').append(btn); // Used to append element, string, text at the end of the selected element
document.querySelector('p').append("I AM NEW HERE"); // Used to append element, string, text at the end of the selected element

// Prepend
document.querySelector('body').prepend(btn); // Used to append element, string, text at the beginning of the selected element
document.querySelector('p').prepend("I AM NEW HERE"); // Used to append element, string, text at the beginning of the selected element

let p = document.querySelector('p');

// // InsertAdjacentElement has 4 ways:
// before begin : adds as a pre sibling
// after begin : adds as a first child
// before end : adds as the last child
// after end : adds as the last sibling

p.insertAdjacentElement("beforebegin",btn);  
p.insertAdjacentElement("afterbegin",btn);  
p.insertAdjacentElement("beforeend",btn);  
p.insertAdjacentElement("afterend",btn);  



// ////// Removing Element

// Remove Child : Same as append child
document.querySelector("body").removeChild(btn);

// Remove : Removes whole element
p.remove();
body.remove();