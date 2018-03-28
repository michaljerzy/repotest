szerokosc = 640;
wysokosc = 480;

punktxo = szerokosc / 2;
punktyo = wysokosc / 2;

//ileKw = prompt("Podaj ilość losowanych punktów: ",1000);
ileKw = 1000;
ileKo = parseInt(ileKw);
//r = prompt("Podaj promień: ", 100);
ileKo = 0;
r=100;

function getRnd(min, max) {
	return Math.random() * (max - min) + min;
}

lx = [];
ly = [];

    for (i=0; 1<ileKw; i++){
        x= Math.floor(getRnd(r, -r));
        y= Math.floor(getRnd(r, -r));
        //console.log(x);
        //console.log(y);
        lx[i] = x;
        lx[i] = y;
        if (x*x + y*y <= r*r){
            ileKo++;
    }
}
console.log(lx);
pi = 4 * ileKo / ileKw;
alert("Przybliżona wartość Pi: " + pi);

function setup() {
  createCanvas(szerokosc, wysokosc);
  background('#ffffff');
}

function draw() {
	stroke('#000');
	fill('#fff');
  ellipse(szerokosc/2, wysokosc/2, 2*r, 2*r);
  line(szerokosc/2, 0, szerokosc/2, wysokosc);
	line(0, wysokosc/2, szerokosc, wysokosc/2);

  for (i=0; i < ileKw; i++){
  	if (lx[i]*lx[i]+ly[i]*lx[i] < r*r){
  		fill('#f00');
  	} else {
  		fill('#000');
  	}
   point(lx[i] + punktxo, ly[i] + punktyo);
  }
}