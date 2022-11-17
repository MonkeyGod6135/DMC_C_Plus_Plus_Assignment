#include <iostream>
#include "Computation.h"
// the Statistician class may have double numbers added to it 
// and it will obtain information about the double numbers like
// the lowest number, the highest number, and the sum of the
// numbers.
class Statistician : Computation
{
    private:
        // field used to store the current double number
        // added to this Statistician
        double num;
        // field used to store the lowest number added
        // to this Statistician
        double lowest;
        // field used to store the highest number added
        // to this Statistician
        double highest;
        // field used to store the sum of the numbers added 
        // to this Statistician
        double sum;
    public:
        // This constructor sets all fields to zero.
        Statistician();
        // This constructor sets all fields to the specified
        // double number. 
        Statistician(double);
        // This method returns the lowest, highest, and sum fields 
        // by assigning their values to the specified lowest, highest, and sum.
        void getStatistician(double&, double&, double&) const;
        // This method sets the num field to the specified double number
        // and then calls the methods that compute the lowest, highest,
        // and sum of the numbers added to this Statistician.
        void addNumber(double);
        // This method computes the lowest double number added to this
        // Stastician.
        void computeLowest() override;
        // This method computes the highest double number added to this
        // Stastician.
        void computeHighest() override;
        // This method computes the sum of the double numbers added to 
        // this Stastician.
        void computeSum() override;
        // This method displays the lowest, highest, and sum fields to
        // stdout formatted as lowest=N.NN, highest=N.NN sum=N.NN.
        void printStatistician() const;
        // This method returns true if this Stastician is equal to
        // the specified otherStatistician, else it returns false
        bool equalStatistician(const Statistician&) const;
};

Statistician::Statistician()
{
    num = 0;
    lowest = 0;
    highest = 0;
    sum =0;

}
Statistician::Statistician(double) 
{

    this->num = num;
    this->lowest = lowest;
    this->highest = highest;
    this->sum = sum;
}

void Statistician::getStatistician(double& lowest, double& highest, double& sum) const
{
    lowest = this->lowest;
    highest = this->highest;
    sum = this->sum;
}

 void Statistician::addNumber(double){
    this->num = num;
    computeLowest();
    computeHighest();
    computeSum();

 }

  void Statistician::computeLowest(){
    if(num < lowest ){
        lowest = num;
    }
  }

  void Statistician::computeHighest(){
    if(num > highest){
        highest = num;
    }

  }

  void Statistician::computeSum(){
    sum = highest + lowest;

  }

  void  Statistician::printStatistician() const {
    cout << "lowest= " << lowest << " Highest= " << highest << "Sum= " << sum << endl;
  }

  bool Statistician::equalStatistician(const Statistician& otherStatistician) const {
    return (num == otherStatistician.num && sum == otherStatistician.sum && lowest == otherStatistician.lowest 
    && highest == otherStatistician.highest );
  }




