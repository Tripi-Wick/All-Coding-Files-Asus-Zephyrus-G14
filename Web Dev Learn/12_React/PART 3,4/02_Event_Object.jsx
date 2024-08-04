// Event Handlers by default have a prop event which is used to access meta data of event

function handleSubmit(event){
    event.preventDefault();                       //Without this u can see nothing will be printed
    console.log(event)
    console.log('Hello Hello i m here')
}


export default function EventObj(){
    return(
        <form action="/" onSubmit={handleSubmit}>
            <input type="text"/>
            <button>Submit</button>
        </form>
    );
}