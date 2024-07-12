let str= 'abcdabbccddefggghiiiijjjkkjj';

let ans ='';
let j=0;
for(let i=0; i<str.length; i++){
    if(!ans.includes(str[i])){
        ans+=str[i];
        j++;
    } 
}

console.log(ans);