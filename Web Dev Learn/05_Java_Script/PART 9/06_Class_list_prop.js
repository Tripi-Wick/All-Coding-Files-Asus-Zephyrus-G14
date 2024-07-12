// ClassList is used to check wether the object belong to a specific class or not
let obj = document.querySelector("h1");

console.dir(obj.classList); //List the classes it is associated to, we use this to access css file 
// Difference between getter setter and class list is ki classlist do not deletes all the classes associated when we add new one but getter's setter does

// // Different Methods
//To Add class
obj.classList.add('green');
obj.classList.add('bold');

// TO delete Class
obj.classList.remove('bold');

// To Check wether class is present or not
console.log(obj.classList.contains('green'));

// To toggle the class
console.log(obj.classList.toggle('bold'));
console.log(obj.classList.toggle('bold'));