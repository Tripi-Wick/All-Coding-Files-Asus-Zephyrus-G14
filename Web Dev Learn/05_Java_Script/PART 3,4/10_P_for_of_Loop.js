// Recently added to js , not available in internet explorer
// Used to print access the elements of a collection

let arr = [1,2,3,4,5,6,7,8,9];

for(i of arr){
    console.log(i);
    }
    
    // Nesting of for of loop
    
    let brr = ['gojo','sukuna','mahito','yuta','itadori',"geto"];
    
for(i of brr){
    console.log(i);    
}

for(i of brr){
    for(j of i){
        console.log(j);
    }
    console.log("");
}