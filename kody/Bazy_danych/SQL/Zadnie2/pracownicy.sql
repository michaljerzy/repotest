CREATE TABLE premia (
    id VARCHAR(20) PRIMARY KEY,
    premia NUMERIC

);

CREATE TABLE dzial (
    id INTEGER PRIMARY KEY,
    nazwa VARCHAR(40),
    siedziba VARCHAR(40)
);

CREATE TABLE pracownicy (
    id VARCHAR(6) PRIMARY KEY,
    nazwisko VARCHAR(25),
    imie VARCHAR(20),
    stanowisko VARCHAR(25),
    data_zatr VARCHAR(23),
    placa NUMERIC,
    id_dzial INTEGER,
    premia NUMERIC DEFAULT 0,
    FOREIGN KEY(stanowisko)REFERENCES premia(id),
    FOREIGN KEY(id_dzial)REFERENCES dzial(id)
);
