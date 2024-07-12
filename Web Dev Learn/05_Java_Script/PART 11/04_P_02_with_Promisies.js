let h1 = document.querySelector('h1');

function changeColor(color,delay){
    return new Promise((resolve)=>{
        setTimeout(()=>{
            h1.style.color = color;
            resolve("Color Changed Successfully");
        },delay);
    });
}

changeColor('red',1000)
    .then((result)=>{
        console.log("Red Color was Added");
        console.log(result);
        return changeColor('orange',1000);
    })
    .then((result)=>{
        console.log("Green Color was Added");
        console.log(result);
        return changeColor('green',1000);
    })
    .then((result)=>{
        console.log("Grey Color was Added");
        console.log(result);
        return changeColor('grey',1000);
    })
    
    .then((result)=>{
        console.log("Smoke White Color was Added");
        console.log(result);
        return changeColor('smoke-white',1000);
    })
    

// We didn't wrote reject and catch cause this will never fail