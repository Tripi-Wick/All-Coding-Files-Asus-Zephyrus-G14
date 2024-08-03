// Every thing in js is an object in itself
// Like arrays, strings are also objects

arr = [1,2,3];
arr.hell=()=>{console.log('hell')}
arr2 = ['a','b','c'];
arr2.hell=()=>{console.log('hell')}
// Try these in browser's console and see it
console.log(arr);

// You'll find there is a prototype key which contains a lot of functions

// see these are different 
console.log(arr.hell === arr2.hell);

// but these are not cause these are references to the same thing
console.log(arr.push === arr2.push);