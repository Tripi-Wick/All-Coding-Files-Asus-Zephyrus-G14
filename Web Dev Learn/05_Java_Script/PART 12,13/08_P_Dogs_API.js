let url = "https://dog.ceo/api/breeds/image/random";

async function getIMG(){
    try{
        let fac = await axios.get(url);
        console.log(fac.data.message);
        return fac.data.message;
    }
    catch(er){
        return 'Error';
    }
}

let btn = document.querySelector('button');

btn.addEventListener('click', async()=>{
    let imUrl = await getIMG();
    let img = document.querySelector('img');
    img.src = imUrl;
})