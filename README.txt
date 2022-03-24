eStore Platform

	Am primit un schelet al codului care contine clase principale pentru produse, useri, server, shoppingCart si clase ajutatoare precum cele din folder-ul utils.

Cerinta 1.1 - Ierarhia Product

	Am avut de implementat metodele unei ierarhii care impartea tipul produselor. Acestea porneau de la o clasa de baza Product, din care ieseau produse alimentare si nealimentare (NonFood si Food Product), iar NonFoodProduct se impartea in
produs nealimentar returnat (ReturnedProduct) si produs redus(DiscountedProduct), clase care se uneau la randul lor , in final si formau o clasa de produse resigilate(ResealedProduct) formand o structura de tip Death Diamond.

Cerinta 1.2 - Ierarhia User

	Cerinta aceasta oferea o clasa de tip utilizator(User) care legata prin agregare de o clasa adresa (Address), fiecare user avand o adresa. De asemenea, User-ul putea fi de 2 feluri, user basic sau premium (BasicUser si PremiumUser).
Pentru acestea am implementat, ca si la 1.1 metodele cerute.

Cerinta 1.3 - Ierarhia ShoppingCart

	In aceasta ierarhie se forma clasa corespunatoare cosului de cumparaturi al fiecarui user, adaugandu-se produse in fiecare cos pe baza ID-urilor si cantitatilor acestora. Acest lucru s-a rezolvat cu un container de tip map.

Cerinta 2 - Clasa Server

	In aceasta clasa se facea legatura dintre toate ierarhiile de mai sus, legandu-se datele utilizatorilor si ale produselor. In aceasta cerinta au aparut structuri precum liste si un map care lega un user de cosul sau.

Cerinta 3 - Queries

Query 3a.

	In acest query a trebuit sa returnam o lista de produse cu discount si care fac parte din categoria "espressor". Am folosit un iterator ce parcurgea lista de produse, alegandu-le pe cele cerute si introducandu-le intr-o noua lista pe care am returnat-o.

Query 3b.

	Acest query cerea o lista de useri fara premium si care platesc pentru transport nu mai mult dee 11.5 lei.
	Fiind foarte similar cu 3a , deosebirea fiind doar ca am parcurs lista de Users, dupa care i-am returnat intr-o lista noua pe cei ceruti.

Query 3c. 

	In acest query a trebuit sa returnez o lista de produse returnate cu motivul "lipsa_accesorii" sortata crescator dupa pret.
	Rezolvarea este asemanatoare cu cele de mai sus, inafara de sortare. Pentru aceasta a trebuit sa ne folosim de functia dynamic_cast(pentru a avea acces la functia getReason din clasa derivata Resealed si getPrice din clasa derivata NonFood) si de o functie booleana de sortare pe care am implementat-o in clasa Utility. Aceasta functie ii ofera un criteriu de sortare functiei sort() pe care am apelat-o, ea returnand noua lista sortata corespunzator.


Query 3d.

	Acest query a cerut returnarea intr-o lista a tuturor produselor alimentare sortate in aceasta ordine dupa: nume, tara de origine si pret. Rezolvarea este foarte similara cu 3c de mai sus, insa in functia din Utility am implementat fiecare criteriu de sortare cerut in ordinea data, in cazul in care unul era indeplinit, se trecea la urmatorul.
