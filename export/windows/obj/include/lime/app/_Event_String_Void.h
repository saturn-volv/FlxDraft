// Generated by Haxe 4.3.2
#ifndef INCLUDED_lime_app__Event_String_Void
#define INCLUDED_lime_app__Event_String_Void

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,_Event_String_Void)

namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES _Event_String_Void_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef _Event_String_Void_obj OBJ_;
		_Event_String_Void_obj();

	public:
		enum { _hx_ClassId = 0x2fc3f32a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.app._Event_String_Void")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.app._Event_String_Void"); }
		static ::hx::ObjectPtr< _Event_String_Void_obj > __new();
		static ::hx::ObjectPtr< _Event_String_Void_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~_Event_String_Void_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("_Event_String_Void",7e,7e,48,a6); }

		bool canceled;
		::Array< bool > _hx___repeat;
		::Array< int > _hx___priorities;
		void add( ::Dynamic listener,::hx::Null< bool >  once,::hx::Null< int >  priority);
		::Dynamic add_dyn();

		void cancel();
		::Dynamic cancel_dyn();

		bool has( ::Dynamic listener);
		::Dynamic has_dyn();

		void remove( ::Dynamic listener);
		::Dynamic remove_dyn();

		void removeAll();
		::Dynamic removeAll_dyn();

		::Array< ::Dynamic> _hx___listeners;
		void dispatch(::String a);
		::Dynamic dispatch_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app__Event_String_Void */ 