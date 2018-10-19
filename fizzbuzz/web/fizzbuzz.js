var count = 1;

function fizz(){
    if(count % 3 != 0 || (count % 3 == 0 && count % 5 == 0)){
        document.getElementById('gameover').style.display = "block";
    }else{
        count++;
    }
    document.getElementById('count').innerHTML = count;
}

function buzz(){
    if(count % 5 != 0 || (count % 3 == 0 && count % 5 == 0)){
        document.getElementById('gameover').style.display = "block";
    }else{
        count++;
    }
    document.getElementById('count').innerHTML = count;
}

function fizzbuzz(){
    if(!(count % 3 == 0 && count % 5 == 0)){
        document.getElementById('gameover').style.display = "block";
    }else{
        count++;
    }
    document.getElementById('count').innerHTML = count;
}

function next(){
    if(count % 3 == 0 || count % 5 == 0){
        document.getElementById('gameover').style.display = "block";
    }else{
        count++;
    }
    document.getElementById('count').innerHTML = count;
}
