function con(arg){
    let res = '';
    for(let i = 0; i<arg.length; i++){
        res+=arg[i];
        res+=" ";
    }
    return res;
}

console.log(con(['I','love','you']));