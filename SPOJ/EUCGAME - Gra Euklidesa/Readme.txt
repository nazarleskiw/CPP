Gra Euklidesa przebiega według następujących zasad:

    W grze bierze udział dwóch graczy (A i B). Początkowo każdy z nich dysponuje pewną niezerową liczbą identycznych żetonów - odpowiednio a i b.
    Jeżeli jeden z graczy ma mniej żetonów niż drugi, może wykonać ruch. Wykonując ruch, gracz zabiera partnerowi tyle żetonów, ile sam posiada. Żetony te są wyłączone z dalszej gry (tj. gracz wykonujący ruch ich nie przejmuje).
    Gra kończy się w sytuacji, gdy żaden z graczy nie może wykonać ruchu (w szczególności gra może skończyć się bezpośrednio po "rozdaniu" żetonów, bez jakichkolwiek ruchów).

Znając początkowe zasoby graczy (tj. wartości a i b), wyznacz łączną liczbę żetonów pozostałych w grze w chwili jej zakończenia.


Wejście
t 	[1 <= t <= 10; liczba partii]
a1 b1 	[1 <= a1, b1 <= 1 000 000 000; początkowe liczby żetonów u graczy (partia #1) ]
a2 b2 	[ jw. (partia #2) ]
... 	 
at bt 	


Wyjście
r1 [ łączna liczba żetonów u obu graczy po zakończeniu partii #1 ]
r2 [ jw., dla partii #2 ]
...
rt
