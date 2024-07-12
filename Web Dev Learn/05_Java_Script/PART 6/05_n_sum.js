function nsum(arg1,arg2){
    let res;
    for(let i=arg1+1; i<=arg2; i++){
        arg1+=i;
    }
    return arg1;
}

console.log(nsum(1,10));