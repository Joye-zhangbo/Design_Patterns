#include "strategy.h"
#include <vector>
#include <cstdio>

int main()
{
  /*
    Strategyģʽ��Templateģʽʵ����ʵ��һ������ӿڵ����ַ�ʽ���̳к����֮�������
    Ҫʵ��һ������ӿڣ��̳���һ�ַ�ʽ�����ǽ�����ӿ������ڻ����У��������ʵ�ַ��ھ��������С�
    ��ϣ�ί�У�������һ�ַ�ʽ�����ǽ��ӿڵ�ʵ�ַ��ڱ���϶����У�������ӿڷ���������С�
    �����ַ�ʽ������ȱ��
  */
  //����A��B���滻
  std::vector<Context *> strategy_vec;
  Strategy *pStr = new ConcreteStrategyA();
  Context *pcon = new Context(pStr);
  strategy_vec.emplace_back(pcon);
  // pcon->DoAction();

  pStr = new ConcreteStrategyB();
  pcon = new Context(pStr);
  strategy_vec.emplace_back(pcon);

  // pcon->DoAction();
  printf("strategy size: %d\n", strategy_vec.size());
  for (auto &pstra : strategy_vec)
  {
    pstra->DoAction();
  }

  delete pStr, pcon;

  return 0;
}