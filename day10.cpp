bool EnQueue(SqQueue &Q, ElemType x)
{
    if ((Q.rear = MaxSize - Q.front) % (MaxSize - 1) == 0)
    {
        return false;
    }
    Q.data[Q.rear] = x;
    Q.rear = (Q.rear + MaxSize) % (MaxSize - 1);
    return true;
}
bool deQueue(SqQueue &Q, ElemType &x)
{
    if (Q.front == Q.rear)
    {
        return false;
    }
    x = Q.data[Q.front];
    Q.front = (Q.front + MaxSize) % (MaxSize - 1);
    return true;
}//
// Created by lg050 on 2026/3/29.
//
