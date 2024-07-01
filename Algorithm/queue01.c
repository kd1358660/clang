#include<stdio.h>
#define QUEUESIZE 8 //�L���[�T�C�Y
int queue[QUEUESIZE];//�L���[�̈�p�z��
int head = 0;//�L���[�擪�f�[�^�̃|�C���^(�z��̓Y�����p)
int tail= 0;//�L���[�I�[�f�[�^�̃|�C���^(�z��̓Y�����p)

//�֐��v���g�^�C�v�錾
void display(void);
int enqueue(int d);
int dequeue(int* pd);

//���C���֐�
main()
{
	int key, data, result;
	do 
	{
		printf("\n\n�v�b�V����i�A�|�b�v��o����͂��ā�");
		key = getche();
		printf("\n");

		//�G���L���[����
		if (key == 'i')
		{
			printf("�f�[�^����>");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1)
			{
				printf("\n***�L���[�������ς��ł�***\n");
			}
			else
			{
				display();
			}
		}
		//�f�L���[����
		if (key == 'o')
		{
			result = dequeue(&data);
			if (result == -1)
			{
				printf("\n***�L���[�������ς��ł�***\n");
			}
			else
			{
				printf("�L���[����f�[�^(%d)�����o���܂���\n", data);
				display();
			}
		}
	} while (key != 'e');
}

//�L���[�\���֐�
void disply(void)
{
	int i;
	printf("\n===���݂̃L���[���e===\n");
	for (i = 0; i < QUEUESIZE; i++)
	{
		printf("queue[%2d]��%5d", i, queue[i]);
		if (i == head)
		{
			printf("��head�������Ă��鏊(����head��%d)", head);
		}
		if (i == tail)
		{
			printf("��tail�������Ă��鏊(����tail��%d)", tail);
		}
		printf("\n");
	}
	return;
}

//�L���[�Ƀf�[�^������(�G���L���[����)�֐�
int enqueue(int d)
{
	if ((tail+1)%QUEUESIZE==head) { return -1; }
	queue[tail] = d;
	tail++;
	tail = tail % QUEUESIZE;
	return 0;
}
int dequeue(int* pd)
{
	if (tail==head) { return -1; }
	*pd= queue[head];
	queue[head] = 0;
	head++;
	head = head % QUEUESIZE;
	return 0;
}