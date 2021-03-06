/****************************************************************************
Copyright (c) 2013 Artavazd Barseghyan

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

#include "CCGestureRecognizer.h"
#include <cxxabi.h>
//#include "CCTapGestureRecognizer.h"
#include "cocos2d.h"
using namespace cocos2d;
USING_NS_CC;


CCGestureRecognizer::CCGestureRecognizer()
{
    isRecognizing = false;
    
    dispatcher = CCDirector::sharedDirector()->getTouchDispatcher();
    
    setTouchEnabled(true);
    setCancelsTouchesInView(false);
}

CCGestureRecognizer::~CCGestureRecognizer()
{
   
    dispatcher->removeDelegate(this);

}

void CCGestureRecognizer::setTarget(CCObject * tar, int sel)
{
    target = tar;
    selector = sel;
   
}

//void CCGestureRecognizer::setTarget(CCObject * tar, SEL_CallFuncO sel)
//{
//    target = tar;
//    selector = sel;
//}

float CCGestureRecognizer::distanceBetweenPoints(CCPoint p1, CCPoint p2)
{
    float deltaX = p2.x-p1.x;
    float deltaY = p2.y-p1.y;
    return fabs(sqrtf(deltaX*deltaX+deltaY*deltaY));
}

void CCGestureRecognizer::stopTouchesPropagation(CCSet * pTouches, CCEvent * pEvent)
{
    //hack! cancel touch so it won't propagate
    dispatcher->touchesCancelled(pTouches, pEvent);
}

void CCGestureRecognizer::setParent(CCNode*p)
{
    CCLayer::setParent(p);
    
    if (p!=NULL) {
        CCSize size = p->getContentSize();
        setContentSize(size);
        setPosition(p->getPosition());
        frame = p->boundingBox();
    }
}

CCSet * CCGestureRecognizer::createSetWithTouch(CCTouch * pTouch)
{
    CCSet * set = new CCSet();
    set->addObject(pTouch);
    return set;
}

void CCGestureRecognizer::registerWithTouchDispatcher()
{
    dispatcher->addTargetedDelegate(this, 0, true);
}

bool CCGestureRecognizer::isPositionBetweenBounds(CCPoint pos)
{
    return frame.containsPoint(pos);
}

void CCGestureRecognizer::gestureRecognized(CCObject * gesture)
{
//    if (target && selector) (target->*selector)(gesture); //call selector
//      if (target && selector)
//          selector->execute();

    CCScriptEngineProtocol* pEngine = CCScriptEngineManager::sharedManager()->getScriptEngine();
    const char* name = typeid(gesture).name();
//    const char* classname = typeid(CCTap).name();

//    printf("name is %s,%s",name,classname);

    pEngine->executeEvent(selector,"event",target);

    
}