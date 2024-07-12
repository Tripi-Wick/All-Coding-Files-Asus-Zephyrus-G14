let url = "https://icanhazdadjoke.com/";

// data is in html form
// async function getFact(){
//     try{
//         let fac = await axios.get(url);
//         console.log(fac.data);
//     }
//     catch(er){
//         console.log(er);
//     }
// }


// get data in json format
async function getFact(){
    try{
        const config = { headers:{Accept : "application/json"}}
        let fac = await axios.get(url, config);
        console.log(fac.data);
    }
    catch(er){
        console.log(er);
    }
}

getFact();