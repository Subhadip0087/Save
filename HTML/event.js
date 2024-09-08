let subha = document.querySelector("#subha");

subha.onclick = () => {
    alert("subha click")
    console.log("subha")
}

let touch =document.querySelector("#touch");

touch.onmouseover =()  =>  {
    console.log("aaaaa")
}
let mode =document.querySelector("#mode");
 let currentmode= "light";

 mode.addEventListener("click",()=>{
    if (currentmode=== "light"){
        currentmode ="dark";
        document.querySelector("body").style.backgroundColor= "black";

    }
    else {
        currentmode = "light";
        document.querySelector("body").style.backgroundColor= "white";
    }
    console.log(currentmode);
 });