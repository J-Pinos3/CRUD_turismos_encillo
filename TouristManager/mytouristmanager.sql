CREATE DATABASE MyTouristManager;
USE MyTouristManager;

CREATE TABLE IF NOT EXISTS Package(
	ID integer primary key auto_increment,
	PackageName text,
    PackageDescription text,
    PackagePrice decimal(6,2)
);


CREATE TABLE IF NOT EXISTS Tourist(
	ID integer primary key auto_increment,
	FirstName text,
	SecondName text,
    LastName text,
    PassportCI varchar(10),
    Contact varchar(10),
    Address text,
    PackageName text
);


/*
INSERT INTO Package(PackageName, PackageDescription, PackagePrice)
VALUES ('basic 1','a couple things', 30.45),
	   ('basic 1 PREMIUM','a couple things + another things', 50.45),
	   ('Hard Worker','a bit more of things than the previous package', 70.45),
	   ('Excellence','Lot of things', 100.45),
	   ('Excuseme SIR ROYALTI','Whatever you want', 260.95);

https://stackoverflow.com/questions/11448068/mysql-error-code-1175-during-update-in-mysql-workbench

DELETE FROM Package;
*/


DELETE FROM Package;
SELECT * FROM Package where PackageName = 'USA 1';
SELECT * FROM Package;

SELECT * FROM Tourist;
delete from Tourist where ID = 2
