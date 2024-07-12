// // // Element Selectors

//// Selection by Element ID
// In this an object is returned. If nothing is there then it returns null
let mainImg = document.getElementById('mainImg'); //Remember to put it in parentheses otherwise js term it as a var
console.dir(mainImg); 


//// Selection by Element Class Name
// In this a HTML Collection is returned. If nothing is there then it returns empty collection 
let oldImg = document.getElementsByClassName('oldImg');
for(let i=0; i<oldImg.length; i++){
    console.dir(oldImg[i]);
    console.dir(oldImg[i].src);
    oldImg[i].src = "https://th.bing.com/th/id/OIP.toQOoSHKyVHdpt_zlM2tpAHaGX?rs=1&pid=ImgDetMain";   
} 
console.log('Small IMG Src changed')

//// Selection by Element Tag Name
// In this a HTML Collection is returned. If nothing is there then it returns empty collection 
// It is not case sensitive

let p = document.getElementsByTagName('p');
console.dir(p);




// // // Query Selectors   --> Allow us to use css selectors syntax  --> Give objects as output
document.querySelector("p")           //Selects first p element
document.querySelector(".myClass")   //Selects first element with class = myClass
document.querySelector("#myID")     //Selects first element with ID = myID

document.querySelectorAll("p")  //Selects all p elects   //--->This returns a collection

// Nesting Can also be done in it
console.dir(document.querySelector('div a'))