    let url = "https://official-joke-api.appspot.com/jokes/random";

fetch(url)
    .then((resp)=>{
        return resp.json();
    })   //This does not gives us the joke as promise gets fulfilled when this url works it don't to reach inside other parts hence we gotta do this
    .then((data)=>{
        console.log(data.setup);     
        console.log(data.punchline);
    })
    .catch((err)=>{
        console.log('Error-> ',err);
    })
    
// Using async function
async function joke(){
    try{
        let res = await fetch(url);
        let data = await res.json();
        console.log(data.setup);     
        console.log(data.punchline);
    }
    catch(err){
        console.log('Error-> ',err);
    }
}

joke();