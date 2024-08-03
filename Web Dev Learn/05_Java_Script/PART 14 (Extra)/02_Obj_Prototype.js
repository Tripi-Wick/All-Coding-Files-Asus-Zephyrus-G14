// Prototypes are mechanism by which js objects inherit features from one another.
// These are like single template objects that all objects inherit methods and properties from without having their own copy.
// very object in JavaScript has a built-in property, which is called its prototype. 
// The prototype is itself an object, so the prototype will have its own prototype, making what's called a prototype chain.
// The chain ends when we reach a prototype that has null for its own prototype.

let arr = [1,2,3];
let arr2 = [1,2,3];

// this is used to acc the reference of prototype that this arr have
// This not the actual prototype but a reference to it. like a pointer
console.log(arr.__proto__);

// We can use this to change the deflation of the existing function for an obj
arr.__proto__.push = (n) => {
    console.log("Pushed Number :",n);
}
// Remember it changes it for everything after this
arr.push(3);
arr2.push(2);

// This is used to access actual object
Array.prototype 
String.prototype

console.log(Array.prototype)