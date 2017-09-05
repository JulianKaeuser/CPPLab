#ifndef C2_H
#define C2_H

class C2
{
public:
	C2(int number);
	~C2();
	int getNumber() const;
	bool operator >=(const C2 &rhs) const;
private:
	int number;

};
 
#endif // C2_H
