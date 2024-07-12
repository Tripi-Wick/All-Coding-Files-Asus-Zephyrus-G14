let para = document.querySelector('p');

// // // Inner Text
// Displays the text how it is visible on the web screen
console.log(para.innerText);

// // // Text Content
// Displays the text how it is written in html file with all the hidden parts too that are not visible on the web screen
console.log(para.textContent);

// // // Inner Html
// Displays the whole html inside the tag
console.log(para.innerHTML);


// Some Editing Now
document.querySelector('h1').innerHTML="<u>Spider-Man</u>"  //Method 1
document.querySelector('h1').innerHTML=`<u>${document.querySelector('h1').innerText}</u>`  //Method 2