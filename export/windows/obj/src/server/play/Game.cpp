// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_server_play_Game
#include <server/play/Game.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2ea19bab9e0f6e38_13_new,"server.play.Game","new",0xcd01f8d3,"server.play.Game.new","server/play/Game.hx",13,0x76af319d)
namespace server{
namespace play{

void Game_obj::__construct(::String setCode){
            	HX_STACKFRAME(&_hx_pos_2ea19bab9e0f6e38_13_new)
HXLINE(  14)		::server::play::Game_obj::instance = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  16)		::String tmp = setCode;
HXDLIN(  16)		::String _hx_tmp;
HXDLIN(  16)		if (::hx::IsNotNull( tmp )) {
HXLINE(  16)			_hx_tmp = tmp;
            		}
            		else {
HXLINE(  16)			_hx_tmp = HX_("MH3",78,ac,3a,00);
            		}
HXLINE(  15)		this->gameSettings =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("set",a2,9b,57,00),_hx_tmp));
            	}

Dynamic Game_obj::__CreateEmpty() { return new Game_obj; }

void *Game_obj::_hx_vtable = 0;

Dynamic Game_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Game_obj > _hx_result = new Game_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Game_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3870c2ed;
}

 ::server::play::Game Game_obj::instance;


Game_obj::Game_obj()
{
}

void Game_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Game);
	HX_MARK_MEMBER_NAME(gameSettings,"gameSettings");
	HX_MARK_END_CLASS();
}

void Game_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gameSettings,"gameSettings");
}

::hx::Val Game_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"gameSettings") ) { return ::hx::Val( gameSettings ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Game_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
	}
	return false;
}

::hx::Val Game_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"gameSettings") ) { gameSettings=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Game_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::server::play::Game >(); return true; }
	}
	return false;
}

void Game_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("gameSettings",f5,6e,2e,c6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Game_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Game_obj,gameSettings),HX_("gameSettings",f5,6e,2e,c6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Game_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::server::play::Game */ ,(void *) &Game_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Game_obj_sMemberFields[] = {
	HX_("gameSettings",f5,6e,2e,c6),
	::String(null()) };

static void Game_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Game_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Game_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Game_obj::instance,"instance");
};

#endif

::hx::Class Game_obj::__mClass;

static ::String Game_obj_sStaticFields[] = {
	HX_("instance",95,1f,e1,59),
	::String(null())
};

void Game_obj::__register()
{
	Game_obj _hx_dummy;
	Game_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("server.play.Game",61,93,22,34);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Game_obj::__GetStatic;
	__mClass->mSetStaticField = &Game_obj::__SetStatic;
	__mClass->mMarkFunc = Game_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Game_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Game_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Game_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Game_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Game_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Game_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace server
} // end namespace play