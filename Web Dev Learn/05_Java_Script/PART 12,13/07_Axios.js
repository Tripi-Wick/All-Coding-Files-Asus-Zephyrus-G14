// It is used to skip the part of parsing.

let url = "https://official-joke-api.appspot.com/jokes/random";

let btn = document.querySelector('button');
let p = document.querySelector('p');


btn.addEventListener("click",async ()=>{
    let fact = await getFact();
    console.log(fact);
    p.innerText = fact
})

async function getFact(){
    try{
        let fac = await axios.get(url);
        return fac.data.setup;
    }
    catch(e){
        return 'Error occurred';
    }
}

