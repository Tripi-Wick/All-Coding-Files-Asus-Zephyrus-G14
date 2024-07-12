// == operator only compares values not type.
// === operator compares both value and type

console.log("123"==123);
console.log("123"===123);

console.log(1=='1');
console.log(1==='1');

console.log(0 ==' ');
console.log(0 ===' ');

console.log(0 == false);
console.log(0 === false);

console.log(null == undefined);
console.log(null === undefined);