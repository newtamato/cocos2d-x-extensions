/*
** Lua binding: CCGestureRecognizer_luabinding
** Generated automatically by tolua++-1.0.92 on Tue Dec  3 13:16:34 2013.
*/

#include "CCGestureRecognizer_luabinding.h"
#include "CCLuaEngine.h"
#include "CCGestureRecognizer/CCLongPressGestureRecognizer.h"
#include "CCGestureRecognizer/CCGestureRecognizer.h"

using namespace cocos2d;





/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_CCGestureRecognizer (lua_State* tolua_S)
{
 CCGestureRecognizer* self = (CCGestureRecognizer*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCLongPressGestureRecognizer (lua_State* tolua_S)
{
 CCLongPressGestureRecognizer* self = (CCLongPressGestureRecognizer*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"CCGestureRecognizer");
 tolua_usertype(tolua_S,"CCLongPressGestureRecognizer");
 tolua_usertype(tolua_S,"CCLongPress");

}



/* method: delete of class  CCGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_CCGestureRecognizer_luabinding_CCGestureRecognizer_delete00
static int tolua_CCGestureRecognizer_luabinding_CCGestureRecognizer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCGestureRecognizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCGestureRecognizer* self = (CCGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTarget of class  CCGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_CCGestureRecognizer_luabinding_CCGestureRecognizer_setTarget00
static int tolua_CCGestureRecognizer_luabinding_CCGestureRecognizer_setTarget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCGestureRecognizer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !toluafix_isfunction(tolua_S,3,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)

 )
  goto tolua_lerror;
 else
#endif
 {
  CCGestureRecognizer* self = (CCGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  CCObject* tar = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
     LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTarget'", NULL);
#endif
  {
   self->setTarget(tar,nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTarget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setParent of class  CCGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_CCGestureRecognizer_luabinding_CCGestureRecognizer_setParent00
static int tolua_CCGestureRecognizer_luabinding_CCGestureRecognizer_setParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCGestureRecognizer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCGestureRecognizer* self = (CCGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  CCNode* p = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setParent'", NULL);
#endif
  {
   self->setParent(p);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CCLongPress */
#ifndef TOLUA_DISABLE_tolua_CCGestureRecognizer_luabinding_CCLongPress_init00
static int tolua_CCGestureRecognizer_luabinding_CCLongPress_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLongPress",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLongPress* self = (CCLongPress*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCLongPress */
#ifndef TOLUA_DISABLE_tolua_CCGestureRecognizer_luabinding_CCLongPress_create00
static int tolua_CCGestureRecognizer_luabinding_CCLongPress_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCLongPress",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLongPress* self = (CCLongPress*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'create'", NULL);
#endif
  {
   CCLongPress* tolua_ret = (CCLongPress*)  self->create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCLongPress");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: location of class  CCLongPress */
#ifndef TOLUA_DISABLE_tolua_get_CCLongPress_location
static int tolua_get_CCLongPress_location(lua_State* tolua_S)
{
  CCLongPress* self = (CCLongPress*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'location'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->location,"CCPoint");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: location of class  CCLongPress */
#ifndef TOLUA_DISABLE_tolua_set_CCLongPress_location
static int tolua_set_CCLongPress_location(lua_State* tolua_S)
{
  CCLongPress* self = (CCLongPress*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'location'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->location = *((CCPoint*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CCLongPressGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_init00
static int tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCLongPressGestureRecognizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLongPressGestureRecognizer* self = (CCLongPressGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCLongPressGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_create00
static int tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
    tolua_Error tolua_err;
    if (
        !tolua_isusertable(tolua_S,1,"CCLongPressGestureRecognizer",0,&tolua_err) ||
        !tolua_isnoobj(tolua_S,2,&tolua_err)
        )
        goto tolua_lerror;
    else
#endif
    {
        {
            CCLongPressGestureRecognizer* tolua_ret = (CCLongPressGestureRecognizer*)  Mtolua_new((CCLongPressGestureRecognizer)());
            tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCLongPressGestureRecognizer");
        }
    }
    return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
    return 0;
#endif
    
    
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CCLongPressGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_delete00
static int tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLongPressGestureRecognizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLongPressGestureRecognizer* self = (CCLongPressGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: timerDidEnd of class  CCLongPressGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_timerDidEnd00
static int tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_timerDidEnd00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLongPressGestureRecognizer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLongPressGestureRecognizer* self = (CCLongPressGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  float dt = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'timerDidEnd'", NULL);
#endif
  {
   self->timerDidEnd(dt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'timerDidEnd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchBegan of class  CCLongPressGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_ccTouchBegan00
static int tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_ccTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLongPressGestureRecognizer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLongPressGestureRecognizer* self = (CCLongPressGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ccTouchBegan(pTouch,pEvent);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchMoved of class  CCLongPressGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_ccTouchMoved00
static int tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_ccTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLongPressGestureRecognizer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLongPressGestureRecognizer* self = (CCLongPressGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchMoved'", NULL);
#endif
  {
   self->ccTouchMoved(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchEnded of class  CCLongPressGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_ccTouchEnded00
static int tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_ccTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLongPressGestureRecognizer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLongPressGestureRecognizer* self = (CCLongPressGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchEnded'", NULL);
#endif
  {
   self->ccTouchEnded(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_CCGestureRecognizer_luabinding_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCGestureRecognizer","CCGestureRecognizer","CCLayer",tolua_collect_CCGestureRecognizer);
  #else
  tolua_cclass(tolua_S,"CCGestureRecognizer","CCGestureRecognizer","CCLayer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCGestureRecognizer");

   tolua_function(tolua_S,"delete",tolua_CCGestureRecognizer_luabinding_CCGestureRecognizer_delete00);
   tolua_function(tolua_S,"setTarget",tolua_CCGestureRecognizer_luabinding_CCGestureRecognizer_setTarget00);
   tolua_function(tolua_S,"setParent",tolua_CCGestureRecognizer_luabinding_CCGestureRecognizer_setParent00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCLongPress","CCLongPress","CCObject",NULL);
  tolua_beginmodule(tolua_S,"CCLongPress");
   tolua_function(tolua_S,"init",tolua_CCGestureRecognizer_luabinding_CCLongPress_init00);
   tolua_function(tolua_S,"create",tolua_CCGestureRecognizer_luabinding_CCLongPress_create00);
   tolua_variable(tolua_S,"location",tolua_get_CCLongPress_location,tolua_set_CCLongPress_location);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCLongPressGestureRecognizer","CCLongPressGestureRecognizer","CCGestureRecognizer",tolua_collect_CCLongPressGestureRecognizer);
  #else
  tolua_cclass(tolua_S,"CCLongPressGestureRecognizer","CCLongPressGestureRecognizer","CCGestureRecognizer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCLongPressGestureRecognizer");
   tolua_function(tolua_S,"init",tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_init00);
   tolua_function(tolua_S,"create",tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_create00);
   tolua_function(tolua_S,"delete",tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_delete00);
   tolua_function(tolua_S,"timerDidEnd",tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_timerDidEnd00);
   tolua_function(tolua_S,"ccTouchBegan",tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_ccTouchBegan00);
   tolua_function(tolua_S,"ccTouchMoved",tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_ccTouchMoved00);
   tolua_function(tolua_S,"ccTouchEnded",tolua_CCGestureRecognizer_luabinding_CCLongPressGestureRecognizer_ccTouchEnded00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_CCGestureRecognizer_luabinding (lua_State* tolua_S) {
 return tolua_CCGestureRecognizer_luabinding_open(tolua_S);
};
#endif

