// 期末考專用  square_2D.h檔
/*這次程式的重點就是在運用類別的「繼承(inherit)」關係*/
/*「繼承」的定義->先定義基礎類別(base class)，可以依據定義的基礎類別，再定義一個包含基礎類別內的運算子.函數等，且可以再賦予新函數與運算子的衍生類別(derived class)*/
/*例如本題就是利用square_2D當作基礎類別，再自行定義一個rect_3D的衍生類別*/

#ifndef square2d_H
#define square2d_H

using namespace std;

//square_2d的類別(包含6個成員函數與2個資料成員)
class square_2d{
public:
	square_2d(double=0,double=0);			//建構子	
	void setlength(const double);			//設定長度
	void setwidth(const double);			//設定寬度
	double getlength();						//取得長度	
	double getwidth();						//取得寬度	
	double compute_area() const;			//計算面積

	double length;							//長
	double width;							//寬
};

#endif

