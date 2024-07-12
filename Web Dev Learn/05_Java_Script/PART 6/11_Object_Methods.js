let obj = {
    add : function(a,b){return(a+b)},
    sub : function(a,b){return(a-b)},
    mul : function(a,b){return(a*b)}
}

console.log(obj.add(1,2));
console.log(obj.sub(1,2));
console.log(obj.mul(1,2));

// Short Hand
let obt = {
    add(a,b){return(a+b)},
    sub(a,b){return(a-b)},
    mul(a,b){return(a*b)}
}
    console.log(obt.add(1,2));
    console.log(obt.sub(1,2));
    console.log(obt.mul(1,2));