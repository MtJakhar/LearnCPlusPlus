#include <iostream>

using namespace std;

int main () {
  /*
  class syntax

  class ClassName {
    //attributes
    private//protected:

    int Number;
    string String;

    public:
    //functions
    void methodName(parameters, p2) {
      code...
    }

  }

  ACCESS MODIFIERS 
  public- available from any where
  protected- available to parent and children
  private - available only to this class

  CONSTRUCTORS
  -doesnot have return type 
  -has same name of class
  -it need to be public

  syntax

  class className {
    private:
    int Number:
    string String:

    public:
    //constructor
    //the parameters are usually the attributes.
    className(dataTypeOfPar1 par1...) {};
  }

  ENCAPSULATION -data is grouped together as a class. For simplification, organization, and security. private data should be attained through the class methods, not directly.

  ABSTRACTION- (summarization) - creating a basic simple interface for complex code.

  abstraction example:

  class AbstractClassName {
    public:
    virtual void AskForPromotion() = 0;
  }

  here the method is declared but not defined. the definition of this function will be done by classes derived from the base/parent class();

  INHERITANCE- passing on the attributes from a parent/base class to child/derived class. 

  class ChildClassName: AccessModifier ParentClassName {
    the accessModifier is private by default
    private:

    code...

    inherits the attributes and methods of parent class

    public:
    the constructor will look like this
      class className {
    private:
    int Number:
    string String:

    public:
    //constructor
    //the parameters of child are the attributes within child.

    ChildClassName(dataTypeOfPar1 par1...): ParentClassName(parentPar1...) {};
    }
  }

  */

 /*
  Class Syntax formula
  
  base class

  class ClassName {
    private:
    //attributes available with this class accessed indirectly through methods
      int Number;
      string Name;

    protected:
    //attributes available to children
      int Number2;
    public:
    //gives access to anything
    
    constructor mandatory under public

    ClassName (para1..) {
      code...;
    }

    returnType methodName (para1..) {
      code...;
    }

  }

  syntax derived child class

  class ChildClassName: ParentClassName {
    private:
    //attributes
    int childNum;

    public:
    ChildClassName(dataTypeOfPar1 par1...): AccessModifier(private by default) ParentClassName (ParentPara1..) {
      code...;
    }

    returnType method (dataType para1) {
      code...;
    }

  };
 */

  /*
  POLYMORPHISM - when methods which have been inherited in child class has different definition than the same method in other sibling classes.
  */
}