#pragma once
// -- дистанции   Левенштeйна (динамическое программирование)
long levenshtein(
	long lx,           // длина слова x 
	const char x[],   // слово длиной lx
	long ly,           // длина слова y
	const char y[]    // слово y
);
// -- дистанции   Левенштeйна (рекурсия)
long levenshtein_r(
	long lx,           // длина строки x 
	const char x[],   // строка длиной lx
	long ly,           // длина строки y
	const char y[]    // строка y
);