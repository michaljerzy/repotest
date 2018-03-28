
var num = 2000;
var range = 6;

var lx = [];
var ly = [];


function setup() {
  createCanvas(710, 400);
  for ( var i = 0; i < num; i++ ) {
    lx[i] = width / 2;
    ly[i] = height / 2;
  }
  frameRate(50);
}

function draw() {
  background(51);

  for ( var i = 1; i < num; i++ ) {
    lx[i - 1] = lx[i];
    ly[i - 1] = ly[i];
  }

  lx[num - 1] += random(-range, range);
  ly[num - 1] += random(-range, range);

  lx[num - 1] = constrain(lx[num - 1], 0, width);
  ly[num - 1] = constrain(ly[num - 1], 0, height);

  for ( var j = 1; j < num; j++ ) {
    var val = j / num * 204.0 + 51;
    stroke(val);
    line(lx[j - 1], ly[j - 1], lx[j], ly[j]);
  }
}