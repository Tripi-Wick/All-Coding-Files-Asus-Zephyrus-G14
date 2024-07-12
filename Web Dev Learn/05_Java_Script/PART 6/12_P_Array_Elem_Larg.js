let x = prompt("Enter the number of elements you want in the array : ");
let arr = [];

for(let i = 0; i<x; i++){
    arr[i]=prompt(`Enter the ${i+1} Element of the array`);
}

for(let i=0; i<x; i++){
    for(let j=i; j<x; j++){
        if(arr[i]>arr[j]){
            let temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}

console.log(arr);

let m = prompt("Enter the element greater them whom you want to print the elem: ");

let i = 0;
while(arr[i]<m){
    i++;
}

console.log(arr.slice(i+1));