//  Array name does not store the value of the array instead it stores the address of the first element of the array, so basically it is a by default pointer

let array = [1,2,3,4];
let arr = [1,2,3,4];
let x = arr;
console.log(array==arr);
console.log(array===arr);
// This is because there values are different, they have different addresses.

// if i make change in the copy the real one gets changed as it is reference of the address of the array
x.splice(0,1);
console.log(x);
console.log(arr);
console.log(arr==x);
console.log(arr===x);