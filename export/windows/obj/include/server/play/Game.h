// Generated by Haxe 4.3.2
#ifndef INCLUDED_server_play_Game
#define INCLUDED_server_play_Game

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_2ea19bab9e0f6e38_18_new)
HX_DECLARE_CLASS2(server,play,Game)

namespace server{
namespace play{


class HXCPP_CLASS_ATTRIBUTES Game_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Game_obj OBJ_;
		Game_obj();

	public:
		enum { _hx_ClassId = 0x3870c2ed };

		void __construct(::String setCode, ::Dynamic spreads);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="server.play.Game")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"server.play.Game"); }

		inline static ::hx::ObjectPtr< Game_obj > __new(::String setCode, ::Dynamic spreads) {
			::hx::ObjectPtr< Game_obj > __this = new Game_obj();
			__this->__construct(setCode,spreads);
			return __this;
		}

		inline static ::hx::ObjectPtr< Game_obj > __alloc(::hx::Ctx *_hx_ctx,::String setCode, ::Dynamic spreads) {
			Game_obj *__this = (Game_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Game_obj), true, "server.play.Game"));
			*(void **)__this = Game_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_2ea19bab9e0f6e38_18_new)
HXLINE(  19)		::server::play::Game_obj::instance = ( ( ::server::play::Game)(__this) );
HXLINE(  20)		( ( ::server::play::Game)(__this) )->spreads = spreads;
HXLINE(  22)		::String tmp = setCode;
HXDLIN(  22)		::String _hx_tmp;
HXDLIN(  22)		if (::hx::IsNotNull( tmp )) {
HXLINE(  22)			_hx_tmp = tmp;
            		}
            		else {
HXLINE(  22)			_hx_tmp = HX_("MH3",78,ac,3a,00);
            		}
HXLINE(  21)		( ( ::server::play::Game)(__this) )->gameSettings =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("set",a2,9b,57,00),_hx_tmp));
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Game_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Game",12,20,38,2f); }

		static  ::server::play::Game instance;
		 ::Dynamic gameSettings;
		 ::Dynamic spreads;
};

} // end namespace server
} // end namespace play

#endif /* INCLUDED_server_play_Game */ 
