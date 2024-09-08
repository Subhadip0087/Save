let modebtn = document.querySelector("#mode");
let cornmode= "light";

modebtn.addEventListener("click",()=>{
    if (cornmode =='light'){
      cornmode = 'dark';
      document.querySelector("body").style.backgroundColor="black"
    }
    else{
        cornmode ='light';
        document.querySelector("body").style.backgroundColor="white"
    }
    console.log (cornmode);
})
