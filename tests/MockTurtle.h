#include "gmock/gmock.h"
#include "ITurtle.h"

class MockTurtle : public ITurtle {
 public:
  MOCK_METHOD(void, PenUp, (), (override));
  MOCK_METHOD(void, PenDown, (), (override));
  MOCK_METHOD(void, Forward, (int distance), (override));
  MOCK_METHOD(void, Turn, (int degrees), (override));
  MOCK_METHOD(void, GoTo, (int x, int y), (override));
  MOCK_METHOD(int, GetX, (), (const, override));
  MOCK_METHOD(int, GetY, (), (const, override));

  // MOCK_METHOD0(PenUp, void());
  // MOCK_METHOD0(PenDown, void());
  // MOCK_METHOD1(Forward, void(int distance));
  // MOCK_METHOD1(Turn, void(int degrees));
  // MOCK_METHOD2(GoTo, void(int x, int y));
  // MOCK_CONST_METHOD0(GetX, int());
  // MOCK_CONST_METHOD0(GetY, int());
  
};


