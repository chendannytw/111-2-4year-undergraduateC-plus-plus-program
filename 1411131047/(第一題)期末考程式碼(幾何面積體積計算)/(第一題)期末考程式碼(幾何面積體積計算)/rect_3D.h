// �����ұM��  rect_3D.h��
#ifndef square3d_H
#define square3d_H

#include"square_2D.h"
using namespace std;

/*�~�����O���ŧi��k���u�l�����O�G��¦���O�v*/
//�~��square_2d���O��rect_3d���O(�]�t5�Ӧ�����ƻP1�Ӹ�Ʀ��� + square_2d������ƻP��Ʀ���)
class rect_3d:public square_2d
{
public:
	rect_3d(double = 0, double = 0, double = 0);			//�غc�l	
	void setheight(const double);							//�]�w����
	double getheight();										//���o����	
	double compute_volume() const;							//�p����n
	double compute_surface() const;							//�p����n

	double height;											//��
};

#endif

