// Object literal is creating a Object type collection
// Object is a collection of key:value pairs
// In it a key is by default a string
// These does not have any fixed indices
let Obj = {
    name:'Trippi',
    1: 'super',
    null: 'works',
    '2': 'sup', 
}

console.log(Obj.name);
console.log(Obj.null);
console.log(Obj[null]); // js converts anything inside [] as string first by it self
console.log(Obj['null']); // Its same as above

// console.log(Obj.1); //These will not work as this does not changes the property to string
// console.log(Obj.'1');
console.log(Obj[1]) //This works
console.log(Obj['1']) //This works
console.log(Obj['2']) //This works
console.log(Obj[2]) //This works


console.log(Obj);
// Addition to Obj
Obj.luck = 'nill';
console.log(Obj);

// Deletion from Obj
delete Obj.luck;
console.log(Obj);

// Updation to Obj
Obj[1] = 92;
Obj.null = 'fuse'
console.log(Obj);