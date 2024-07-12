let arr = [1,2,3,4,5,6];

const avg = (arr) => {
    let sum=0;
    for(i of arr){
        sum+=i;
    }
    return sum/arr.length;
}

console.log(avg(arr));