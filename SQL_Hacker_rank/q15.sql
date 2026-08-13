SELECT DISTINCT CITY
FROM STATION
WHERE RIGHT(LOWER(CITY), 1) NOT IN ('a', 'e', 'i', 'o', 'u');
/*
RIGHT(LOWER(CITY),1)-> Lower(city) converts DELHI to delhi and 
the 1 part take the character from the city(right side)
it takes i from delhi and checks it should not be in the vowels set 
if it is present then that city is not printed
*/