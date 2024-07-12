let form = document.querySelector('form');
let ul = document.querySelector('ul');
let ctr;
let clg;

let url = "http://universities.hipolabs.com/search?country=";

form.addEventListener("submit",async (event)=>{
    event.preventDefault();
    ctr = form.elements[0].value;
    clg = form.elements[1].value;

    let data = await getUni();
    
    ul.innerHTML = "";
    for(clg of data){
        let li = document.createElement('li')
        li.innerHTML = clg.name;
        ul.appendChild(li);
    }
})

async function getUni(){
    try{
        let data = await axios.get(url+ctr+'&name='+clg);
        return data.data;
    }
    catch(er){
        return "Error Occurred";
    }
}