#pragma once
// -- ���������   �������e��� (������������ ����������������)
long levenshtein(
	long lx,           // ����� ����� x 
	const char x[],   // ����� ������ lx
	long ly,           // ����� ����� y
	const char y[]    // ����� y
);
// -- ���������   �������e��� (��������)
long levenshtein_r(
	long lx,           // ����� ������ x 
	const char x[],   // ������ ������ lx
	long ly,           // ����� ������ y
	const char y[]    // ������ y
);