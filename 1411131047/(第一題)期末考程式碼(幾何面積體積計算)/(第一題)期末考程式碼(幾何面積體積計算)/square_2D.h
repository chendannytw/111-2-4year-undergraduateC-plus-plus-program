// �����ұM��  square_2D.h��
/*�o���{�������I�N�O�b�B�����O���u�~��(inherit)�v���Y*/
/*�u�~�ӡv���w�q->���w�q��¦���O(base class)�A�i�H�̾کw�q����¦���O�A�A�w�q�@�ӥ]�t��¦���O�����B��l.��Ƶ��A�B�i�H�A�ᤩ�s��ƻP�B��l���l�����O(derived class)*/
/*�Ҧp���D�N�O�Q��square_2D��@��¦���O�A�A�ۦ�w�q�@��rect_3D���l�����O*/

#ifndef square2d_H
#define square2d_H

using namespace std;

//square_2d�����O(�]�t6�Ӧ�����ƻP2�Ӹ�Ʀ���)
class square_2d{
public:
	square_2d(double=0,double=0);			//�غc�l	
	void setlength(const double);			//�]�w����
	void setwidth(const double);			//�]�w�e��
	double getlength();						//���o����	
	double getwidth();						//���o�e��	
	double compute_area() const;			//�p�⭱�n

	double length;							//��
	double width;							//�e
};

#endif

