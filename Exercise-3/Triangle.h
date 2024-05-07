#ifndef TRIANGLE_H
#define TRIANGLE_H

//namespaces
namespace shapes 
{
    //class name
    class Triangle
        {
        //private members
        private:
            double Base;
            double Height;

        //public members
        public:
            Triangle();
            Triangle(double B, double H);
            double getBase() const;
            double getHeight() const;
            ~Triangle();
        };
}

#endif // TRIANGLE_H
