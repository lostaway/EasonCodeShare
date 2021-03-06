#include <string>
using std::string;

class SpreadsheetCell
{
 public:
  SpreadsheetCell();
  SpreadsheetCell(double initialValue);
  SpreadsheetCell(string initialValue);
  void setValue(double inValue);
  double getValue() const;
  void setString(string inString);
  string getString() const;

 protected:
  string doubleToString(double inValue) const;
  double stringToDouble(string inString) const;

  double mValue;
  string mString;
};
