
var penColor = '#000';

function setPenColor(pen){
  penColor = pen;
  document.getElementById('current-pen').style.backgroundColor = pen;
}

function setPixelColor(pixel){
  pixel.style.backgroundColor = penColor;
}
