// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_server_play_board_cards_BoosterPack
#include <server/play/board/cards/BoosterPack.h>
#endif
#ifndef INCLUDED_server_user_User
#include <server/user/User.h>
#endif
#ifndef INCLUDED_server_user_player_Player
#include <server/user/player/Player.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_59b4a73ea97e8ef1_13_new,"server.user.player.Player","new",0x13f2c648,"server.user.player.Player.new","server/user/player/Player.hx",13,0xd9252e67)
namespace server{
namespace user{
namespace player{

void Player_obj::__construct( ::server::user::User user){
            	HX_GC_STACKFRAME(&_hx_pos_59b4a73ea97e8ef1_13_new)
HXLINE(  14)		this->user = user;
HXLINE(  16)		this->boosterPacks = ::Array_obj< ::Dynamic>::__new();
HXLINE(  17)		{
HXLINE(  18)			::Array< ::Dynamic> _hx_tmp = this->boosterPacks;
HXDLIN(  18)			_hx_tmp->push( ::server::play::board::cards::BoosterPack_obj::__alloc( HX_CTX ,null()));
HXDLIN(  18)			::Array< ::Dynamic> _hx_tmp1 = this->boosterPacks;
HXDLIN(  18)			_hx_tmp1->push( ::server::play::board::cards::BoosterPack_obj::__alloc( HX_CTX ,null()));
HXDLIN(  18)			::Array< ::Dynamic> _hx_tmp2 = this->boosterPacks;
HXDLIN(  18)			_hx_tmp2->push( ::server::play::board::cards::BoosterPack_obj::__alloc( HX_CTX ,null()));
            		}
            	}

Dynamic Player_obj::__CreateEmpty() { return new Player_obj; }

void *Player_obj::_hx_vtable = 0;

Dynamic Player_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Player_obj > _hx_result = new Player_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Player_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x74bb0c30;
}


::hx::ObjectPtr< Player_obj > Player_obj::__new( ::server::user::User user) {
	::hx::ObjectPtr< Player_obj > __this = new Player_obj();
	__this->__construct(user);
	return __this;
}

::hx::ObjectPtr< Player_obj > Player_obj::__alloc(::hx::Ctx *_hx_ctx, ::server::user::User user) {
	Player_obj *__this = (Player_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Player_obj), true, "server.user.player.Player"));
	*(void **)__this = Player_obj::_hx_vtable;
	__this->__construct(user);
	return __this;
}

Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(user,"user");
	HX_MARK_MEMBER_NAME(boosterPacks,"boosterPacks");
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(user,"user");
	HX_VISIT_MEMBER_NAME(boosterPacks,"boosterPacks");
}

::hx::Val Player_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"user") ) { return ::hx::Val( user ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"boosterPacks") ) { return ::hx::Val( boosterPacks ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Player_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"user") ) { user=inValue.Cast<  ::server::user::User >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"boosterPacks") ) { boosterPacks=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("user",4b,92,ad,4d));
	outFields->push(HX_("boosterPacks",0a,e7,6e,66));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Player_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::server::user::User */ ,(int)offsetof(Player_obj,user),HX_("user",4b,92,ad,4d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Player_obj,boosterPacks),HX_("boosterPacks",0a,e7,6e,66)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Player_obj_sStaticStorageInfo = 0;
#endif

static ::String Player_obj_sMemberFields[] = {
	HX_("user",4b,92,ad,4d),
	HX_("boosterPacks",0a,e7,6e,66),
	::String(null()) };

::hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	Player_obj _hx_dummy;
	Player_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("server.user.player.Player",56,42,78,62);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Player_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Player_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Player_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Player_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace server
} // end namespace user
} // end namespace player