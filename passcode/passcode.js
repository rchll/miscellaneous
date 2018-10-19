var passcode = "12345";
var inputstr = "";

function add(x){
  inputstr += x;
  document.getElementById("inputstr").innerHTML = inputstr;
  if(inputstr == passcode){
    document.getElementById("inputstr").innerHTML = "pass!";
    document.getElementById("keypad").style.animation = "bye 1s ease forwards";
    document.getElementById("congrats").style.animation = "hi 3s ease forwards";
    document.getElementById("congrats").style.display = "block";
  }
}
