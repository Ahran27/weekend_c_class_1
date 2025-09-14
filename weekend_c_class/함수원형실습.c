#include <stdio.h>

//�Լ� ���� ���� : main�Ʒ��ʿ� �ش� �Լ��� ���ǵ� ���̶�� ����� �����Ϸ����� �˷��ִ� ��(��� �� �ʿ��� ���� �ƴ�)
int getMax(int scores[], int size);
int getMin(int scores[], int size);
double getAverage(int scores[], int size);



int main(void)
{
	//�л� 5���� ������ �޾Ƽ� ���� ū ���� ��� / ���� ���� ���� / ��� ���
	int scores[5];
	int size = 5;//�л���

	printf("�л� 5���� ������ �Է�\n");
	for (int i = 0; i < size; i++) {
		printf("%d �� �л� ����: ",i+1);
		scanf_s("%d",&scores[i]);
	}

	int max = getMax(scores, size);
	int min = getMin(scores, size);
	double average = getAverage(scores, size);

	printf("\n\n====��� ���====\n\n");
	printf("�ְ� ����: %d\n",max);
	printf("���� ����: %d\n", min);
	printf("��� ����: %.2f\n", average);

	return 0;
}





int getMax(int scores[], int size) {
	//scores�迭�� ù��° ���� int max�� �־���(ù��° ���� �ϴ� �ִ밪���� ������)
	int max = scores[0];
	//for������ �ι�° ������ ������ �˻�
		//���� scores�� ���� �ִ� ������ ���� max�� ����ִ� 0��° ������ ũ�ٸ�
	for (int i = 1; i < size; i++) {
		if (scores[i] > max) {
			//max�� �� ū ���� �����ϱ�
			max = scores[i];
		}
	}
	//�Լ��� ���������� ���� ū ���� ��ȯ�ϰ� �� ���̴�.
	return max;
}

int getMin(int scores[], int size) {

	int min = scores[0];
	for (int i = 1; i < size; i++) {
		if (scores[i] < min) {
			min = scores[i];
		}
	}
	
	return min;
}

double getAverage(int scores[], int size) {
	//��� �հ踦 ������ ������ ���� ��
	int sum = 0;
	//�迭�� ��ȸ�ϸ� ��� ���� �ջ�
	for (int i = 0; i < size; i++) {
		sum += scores[i];
	}
	//return���� �ջ�� ���� / �л���
	//���ϰ��� ����ȯ�Ͽ� �Ҽ������� ���
	return(double)sum / size;
}