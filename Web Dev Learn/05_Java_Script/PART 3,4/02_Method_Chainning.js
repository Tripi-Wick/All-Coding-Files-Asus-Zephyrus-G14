// In js we can use multiple methods at same time

let str = "     'Black is a snake with reading powers with a love to a human'       ";

let method =  str.slice(6,11).toUpperCase().indexOf('L');
let method2 =  str.slice(6,11).toUpperCase();

console.log(method);
console.log(method2);