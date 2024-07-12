arr = [2,1,10,212,11,3];

let max = arr.reduce(function(acc,i){
    if(acc<i){
        return i;
    }
    else return acc;
});
let min = arr.reduce(function(acc,i){
    if(acc>i){
        return i;
    }
    else return acc;
});

console.log(max);
console.log(min);