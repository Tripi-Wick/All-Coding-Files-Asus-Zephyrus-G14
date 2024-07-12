h1 = document.querySelector('h1');

function changeColor (color, delay){
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            rand = Math.ceil(Math.random()*10);
            if(rand>5){
                h1.style.color = color;
                resolve("The color Changed");
                console.log("The color Changed");
            }
            else{reject("Rand is not sufficient")}
        },delay);
    })
}

async function demo(){
    try{
        await changeColor('red',1000);
        await changeColor('orange',1000);
        await changeColor('green',1000);
        await changeColor('grey',1000);
    }
    catch(err){
        console.log(err);
    }
}

demo();