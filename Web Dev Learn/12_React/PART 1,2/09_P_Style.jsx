function Style ({name,colo}){
    let st = {color: colo}

    return(
        <h1 style={st}>Hello! {name}</h1>
    );
}

export default Style;