#ifndef SQUARE_H
#define SQUARE_H


class Square
{
    public:

        Square();
        Square(int x,int y);
        ~Square();

        void display(char c);
        void display();

        void setSquare(int x, int y);
        void setSquare(int x, int y,char player);
        char getPawn(){return m_pawn;}
        int getX(){return m_x;}
        int getY(){return m_y;}

    private:
        int m_x;
        int m_y;
        char m_pawn='_';
};

#endif // CASE_H
