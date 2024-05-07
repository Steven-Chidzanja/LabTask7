#ifndef CIRCLE_H
#define CIRCLE_H

//namespace
namespace shapes {
    //class name
    class Circle {

        //private members
        private:
            double radius;
        //public members
        public:
            Circle();
            Circle(double R);
            double getRadius() const;
            ~Circle();
    };
}

#endif // CIRCLE_H
