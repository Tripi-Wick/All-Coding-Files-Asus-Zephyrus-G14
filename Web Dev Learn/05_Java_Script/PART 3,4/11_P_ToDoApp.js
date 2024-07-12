let inp = prompt("Enter open to enter the 'To-Do App'");
let list = [];
if(inp == 'open'){
    while(inp!='quit'){
        inp = prompt("Enter 'list': show your work, 'add': add new work, 'del': to delete a task, 'quit': to exit");
        switch(inp){
            case 'list':{
                console.log("-------To Do App-------")
                for(i of list){
                    console.log(list.indexOf(i),i);
                }
                break;
            }
            case 'add':{
                let inp2 = prompt("Enter Your work");
                list.push(inp2);
                alert("Your task was added");
                break;
            }
            case 'del':{
                let inp2 = prompt("Enter the task you want to delete");
                list.splice(list.indexOf(inp2),1);
                alert("Your task was deleted");
                break;
            }
            default: alert("You entered invalid command.")
        }
    }
    alert('You exited the TO DO APP');
}
else{
    alert("Have a good day")
}