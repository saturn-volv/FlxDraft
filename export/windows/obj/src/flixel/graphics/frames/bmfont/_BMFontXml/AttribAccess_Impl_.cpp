// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont__BMFontXml_AttribAccess_Impl_
#include <flixel/graphics/frames/bmfont/_BMFontXml/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2d940624589f0a37_122_stringHelper,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_","stringHelper",0xc4e5c94c,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_.stringHelper","flixel/graphics/frames/bmfont/BMFontXml.hx",122,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_2d940624589f0a37_142_stringSafe,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_","stringSafe",0x562f75ab,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_.stringSafe","flixel/graphics/frames/bmfont/BMFontXml.hx",142,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_2d940624589f0a37_147_string,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_","string",0xc3e2553e,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_.string","flixel/graphics/frames/bmfont/BMFontXml.hx",147,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_2d940624589f0a37_152_stringWarn,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_","stringWarn",0x58d45aa4,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_.stringWarn","flixel/graphics/frames/bmfont/BMFontXml.hx",152,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_2d940624589f0a37_157_stringError,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_","stringError",0x0f0125aa,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_.stringError","flixel/graphics/frames/bmfont/BMFontXml.hx",157,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_2d940624589f0a37_161_intHelper,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_","intHelper",0x0f4b7170,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_.intHelper","flixel/graphics/frames/bmfont/BMFontXml.hx",161,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_2d940624589f0a37_181_intSafe,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_","intSafe",0xb4660ccf,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_.intSafe","flixel/graphics/frames/bmfont/BMFontXml.hx",181,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_2d940624589f0a37_186_int,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_","int",0x096d8a62,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_.int","flixel/graphics/frames/bmfont/BMFontXml.hx",186,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_2d940624589f0a37_191_intWarn,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_","intWarn",0xb70af1c8,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_.intWarn","flixel/graphics/frames/bmfont/BMFontXml.hx",191,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_2d940624589f0a37_196_intError,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_","intError",0x208ece06,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_.intError","flixel/graphics/frames/bmfont/BMFontXml.hx",196,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_2d940624589f0a37_200_boolHelper,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_","boolHelper",0xfbe45825,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_.boolHelper","flixel/graphics/frames/bmfont/BMFontXml.hx",200,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_2d940624589f0a37_220_boolSafe,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_","boolSafe",0x1a106c44,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_.boolSafe","flixel/graphics/frames/bmfont/BMFontXml.hx",220,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_2d940624589f0a37_225_bool,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_","bool",0x31cbcb57,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_.bool","flixel/graphics/frames/bmfont/BMFontXml.hx",225,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_2d940624589f0a37_230_boolWarn,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_","boolWarn",0x1cb5513d,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_.boolWarn","flixel/graphics/frames/bmfont/BMFontXml.hx",230,0x6e0c2cde)
HX_LOCAL_STACK_FRAME(_hx_pos_2d940624589f0a37_235_boolError,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_","boolError",0xaff7f4f1,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_.boolError","flixel/graphics/frames/bmfont/BMFontXml.hx",235,0x6e0c2cde)
namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{
namespace _BMFontXml{

void AttribAccess_Impl__obj::__construct() { }

Dynamic AttribAccess_Impl__obj::__CreateEmpty() { return new AttribAccess_Impl__obj; }

void *AttribAccess_Impl__obj::_hx_vtable = 0;

Dynamic AttribAccess_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AttribAccess_Impl__obj > _hx_result = new AttribAccess_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AttribAccess_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x591d1eb3;
}

::String AttribAccess_Impl__obj::stringHelper( ::Xml this1,::String name, ::Dynamic invalid,::String backup){
            	HX_STACKFRAME(&_hx_pos_2d940624589f0a37_122_stringHelper)
HXLINE( 123)		::String value = backup;
HXLINE( 124)		if ((this1->nodeType == ::Xml_obj::Document)) {
HXLINE( 126)			if (::hx::IsNotNull( invalid )) {
HXLINE( 127)				invalid((HX_("Cannot access document attribute ",ca,30,fe,c0) + name));
            			}
            		}
            		else {
HXLINE( 131)			::String v = this1->get(name);
HXLINE( 132)			if (::hx::IsNotNull( v )) {
HXLINE( 133)				value = v;
            			}
            			else {
HXLINE( 134)				if (::hx::IsNotNull( invalid )) {
HXLINE( 135)					if ((this1->nodeType != ::Xml_obj::Element)) {
HXLINE( 135)						HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType)));
            					}
HXDLIN( 135)					invalid((((HX_("",00,00,00,00) + this1->nodeName) + HX_(" is missing attribute ",54,31,39,75)) + name));
            				}
            			}
            		}
HXLINE( 137)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AttribAccess_Impl__obj,stringHelper,return )

::String AttribAccess_Impl__obj::stringSafe( ::Xml this1,::String name,::String backup){
            	HX_STACKFRAME(&_hx_pos_2d940624589f0a37_142_stringSafe)
HXDLIN( 142)		 ::Dynamic invalid = null();
HXDLIN( 142)		::String value = backup;
HXDLIN( 142)		if ((this1->nodeType == ::Xml_obj::Document)) {
HXDLIN( 142)			if (::hx::IsNotNull( invalid )) {
HXDLIN( 142)				invalid((HX_("Cannot access document attribute ",ca,30,fe,c0) + name));
            			}
            		}
            		else {
HXDLIN( 142)			::String v = this1->get(name);
HXDLIN( 142)			if (::hx::IsNotNull( v )) {
HXDLIN( 142)				value = v;
            			}
            			else {
HXDLIN( 142)				if (::hx::IsNotNull( invalid )) {
HXDLIN( 142)					if ((this1->nodeType != ::Xml_obj::Element)) {
HXDLIN( 142)						HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType)));
            					}
HXDLIN( 142)					invalid((((HX_("",00,00,00,00) + this1->nodeName) + HX_(" is missing attribute ",54,31,39,75)) + name));
            				}
            			}
            		}
HXDLIN( 142)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AttribAccess_Impl__obj,stringSafe,return )

::String AttribAccess_Impl__obj::string( ::Xml this1,::String name){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run(::String msg){
            			HX_STACKFRAME(&_hx_pos_2d940624589f0a37_147_string)
HXDLIN( 147)			HX_STACK_DO_THROW(msg);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_2d940624589f0a37_147_string)
HXDLIN( 147)		 ::Dynamic invalid =  ::Dynamic(new _hx_Closure_0());
HXDLIN( 147)		::String backup = null();
HXDLIN( 147)		::String value = backup;
HXDLIN( 147)		if ((this1->nodeType == ::Xml_obj::Document)) {
HXDLIN( 147)			if (::hx::IsNotNull( invalid )) {
HXDLIN( 147)				HX_STACK_DO_THROW((HX_("Cannot access document attribute ",ca,30,fe,c0) + name));
            			}
            		}
            		else {
HXDLIN( 147)			::String v = this1->get(name);
HXDLIN( 147)			if (::hx::IsNotNull( v )) {
HXDLIN( 147)				value = v;
            			}
            			else {
HXDLIN( 147)				if (::hx::IsNotNull( invalid )) {
HXDLIN( 147)					if ((this1->nodeType != ::Xml_obj::Element)) {
HXDLIN( 147)						HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType)));
            					}
HXDLIN( 147)					HX_STACK_DO_THROW((((HX_("",00,00,00,00) + this1->nodeName) + HX_(" is missing attribute ",54,31,39,75)) + name));
            				}
            			}
            		}
HXDLIN( 147)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AttribAccess_Impl__obj,string,return )

::String AttribAccess_Impl__obj::stringWarn( ::Xml this1,::String name,::String backup){
            	HX_STACKFRAME(&_hx_pos_2d940624589f0a37_152_stringWarn)
HXDLIN( 152)		 ::Dynamic invalid = ::flixel::FlxG_obj::log->warn_dyn();
HXDLIN( 152)		::String value = backup;
HXDLIN( 152)		if ((this1->nodeType == ::Xml_obj::Document)) {
HXDLIN( 152)			if (::hx::IsNotNull( invalid )) {
HXDLIN( 152)				invalid((HX_("Cannot access document attribute ",ca,30,fe,c0) + name));
            			}
            		}
            		else {
HXDLIN( 152)			::String v = this1->get(name);
HXDLIN( 152)			if (::hx::IsNotNull( v )) {
HXDLIN( 152)				value = v;
            			}
            			else {
HXDLIN( 152)				if (::hx::IsNotNull( invalid )) {
HXDLIN( 152)					if ((this1->nodeType != ::Xml_obj::Element)) {
HXDLIN( 152)						HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType)));
            					}
HXDLIN( 152)					invalid((((HX_("",00,00,00,00) + this1->nodeName) + HX_(" is missing attribute ",54,31,39,75)) + name));
            				}
            			}
            		}
HXDLIN( 152)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AttribAccess_Impl__obj,stringWarn,return )

::String AttribAccess_Impl__obj::stringError( ::Xml this1,::String name,::String backup){
            	HX_STACKFRAME(&_hx_pos_2d940624589f0a37_157_stringError)
HXDLIN( 157)		 ::Dynamic invalid = ::flixel::FlxG_obj::log->error_dyn();
HXDLIN( 157)		::String value = backup;
HXDLIN( 157)		if ((this1->nodeType == ::Xml_obj::Document)) {
HXDLIN( 157)			if (::hx::IsNotNull( invalid )) {
HXDLIN( 157)				invalid((HX_("Cannot access document attribute ",ca,30,fe,c0) + name));
            			}
            		}
            		else {
HXDLIN( 157)			::String v = this1->get(name);
HXDLIN( 157)			if (::hx::IsNotNull( v )) {
HXDLIN( 157)				value = v;
            			}
            			else {
HXDLIN( 157)				if (::hx::IsNotNull( invalid )) {
HXDLIN( 157)					if ((this1->nodeType != ::Xml_obj::Element)) {
HXDLIN( 157)						HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType)));
            					}
HXDLIN( 157)					invalid((((HX_("",00,00,00,00) + this1->nodeName) + HX_(" is missing attribute ",54,31,39,75)) + name));
            				}
            			}
            		}
HXDLIN( 157)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AttribAccess_Impl__obj,stringError,return )

int AttribAccess_Impl__obj::intHelper( ::Xml this1,::String name, ::Dynamic invalid,int backup){
            	HX_STACKFRAME(&_hx_pos_2d940624589f0a37_161_intHelper)
HXLINE( 162)		int value = backup;
HXLINE( 163)		if ((this1->nodeType == ::Xml_obj::Document)) {
HXLINE( 165)			if (::hx::IsNotNull( invalid )) {
HXLINE( 166)				invalid((HX_("Cannot access document attribute ",ca,30,fe,c0) + name));
            			}
            		}
            		else {
HXLINE( 170)			::String v = this1->get(name);
HXLINE( 171)			if (::hx::IsNotNull( v )) {
HXLINE( 172)				value = ( (int)(::Std_obj::parseInt(v)) );
            			}
            			else {
HXLINE( 173)				if (::hx::IsNotNull( invalid )) {
HXLINE( 174)					if ((this1->nodeType != ::Xml_obj::Element)) {
HXLINE( 174)						HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType)));
            					}
HXDLIN( 174)					invalid((((HX_("",00,00,00,00) + this1->nodeName) + HX_(" is missing attribute ",54,31,39,75)) + name));
            				}
            			}
            		}
HXLINE( 176)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AttribAccess_Impl__obj,intHelper,return )

int AttribAccess_Impl__obj::intSafe( ::Xml this1,::String name,int backup){
            	HX_STACKFRAME(&_hx_pos_2d940624589f0a37_181_intSafe)
HXDLIN( 181)		 ::Dynamic invalid = null();
HXDLIN( 181)		int value = backup;
HXDLIN( 181)		if ((this1->nodeType == ::Xml_obj::Document)) {
HXDLIN( 181)			if (::hx::IsNotNull( invalid )) {
HXDLIN( 181)				invalid((HX_("Cannot access document attribute ",ca,30,fe,c0) + name));
            			}
            		}
            		else {
HXDLIN( 181)			::String v = this1->get(name);
HXDLIN( 181)			if (::hx::IsNotNull( v )) {
HXDLIN( 181)				value = ( (int)(::Std_obj::parseInt(v)) );
            			}
            			else {
HXDLIN( 181)				if (::hx::IsNotNull( invalid )) {
HXDLIN( 181)					if ((this1->nodeType != ::Xml_obj::Element)) {
HXDLIN( 181)						HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType)));
            					}
HXDLIN( 181)					invalid((((HX_("",00,00,00,00) + this1->nodeName) + HX_(" is missing attribute ",54,31,39,75)) + name));
            				}
            			}
            		}
HXDLIN( 181)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AttribAccess_Impl__obj,intSafe,return )

int AttribAccess_Impl__obj::_hx_int( ::Xml this1,::String name){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run(::String msg){
            			HX_STACKFRAME(&_hx_pos_2d940624589f0a37_186_int)
HXDLIN( 186)			HX_STACK_DO_THROW(msg);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_2d940624589f0a37_186_int)
HXDLIN( 186)		 ::Dynamic invalid =  ::Dynamic(new _hx_Closure_0());
HXDLIN( 186)		int value = 0;
HXDLIN( 186)		if ((this1->nodeType == ::Xml_obj::Document)) {
HXDLIN( 186)			if (::hx::IsNotNull( invalid )) {
HXDLIN( 186)				HX_STACK_DO_THROW((HX_("Cannot access document attribute ",ca,30,fe,c0) + name));
            			}
            		}
            		else {
HXDLIN( 186)			::String v = this1->get(name);
HXDLIN( 186)			if (::hx::IsNotNull( v )) {
HXDLIN( 186)				value = ( (int)(::Std_obj::parseInt(v)) );
            			}
            			else {
HXDLIN( 186)				if (::hx::IsNotNull( invalid )) {
HXDLIN( 186)					if ((this1->nodeType != ::Xml_obj::Element)) {
HXDLIN( 186)						HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType)));
            					}
HXDLIN( 186)					HX_STACK_DO_THROW((((HX_("",00,00,00,00) + this1->nodeName) + HX_(" is missing attribute ",54,31,39,75)) + name));
            				}
            			}
            		}
HXDLIN( 186)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AttribAccess_Impl__obj,_hx_int,return )

int AttribAccess_Impl__obj::intWarn( ::Xml this1,::String name,int backup){
            	HX_STACKFRAME(&_hx_pos_2d940624589f0a37_191_intWarn)
HXDLIN( 191)		 ::Dynamic invalid = ::flixel::FlxG_obj::log->warn_dyn();
HXDLIN( 191)		int value = backup;
HXDLIN( 191)		if ((this1->nodeType == ::Xml_obj::Document)) {
HXDLIN( 191)			if (::hx::IsNotNull( invalid )) {
HXDLIN( 191)				invalid((HX_("Cannot access document attribute ",ca,30,fe,c0) + name));
            			}
            		}
            		else {
HXDLIN( 191)			::String v = this1->get(name);
HXDLIN( 191)			if (::hx::IsNotNull( v )) {
HXDLIN( 191)				value = ( (int)(::Std_obj::parseInt(v)) );
            			}
            			else {
HXDLIN( 191)				if (::hx::IsNotNull( invalid )) {
HXDLIN( 191)					if ((this1->nodeType != ::Xml_obj::Element)) {
HXDLIN( 191)						HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType)));
            					}
HXDLIN( 191)					invalid((((HX_("",00,00,00,00) + this1->nodeName) + HX_(" is missing attribute ",54,31,39,75)) + name));
            				}
            			}
            		}
HXDLIN( 191)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AttribAccess_Impl__obj,intWarn,return )

int AttribAccess_Impl__obj::intError( ::Xml this1,::String name,int backup){
            	HX_STACKFRAME(&_hx_pos_2d940624589f0a37_196_intError)
HXDLIN( 196)		 ::Dynamic invalid = ::flixel::FlxG_obj::log->error_dyn();
HXDLIN( 196)		int value = backup;
HXDLIN( 196)		if ((this1->nodeType == ::Xml_obj::Document)) {
HXDLIN( 196)			if (::hx::IsNotNull( invalid )) {
HXDLIN( 196)				invalid((HX_("Cannot access document attribute ",ca,30,fe,c0) + name));
            			}
            		}
            		else {
HXDLIN( 196)			::String v = this1->get(name);
HXDLIN( 196)			if (::hx::IsNotNull( v )) {
HXDLIN( 196)				value = ( (int)(::Std_obj::parseInt(v)) );
            			}
            			else {
HXDLIN( 196)				if (::hx::IsNotNull( invalid )) {
HXDLIN( 196)					if ((this1->nodeType != ::Xml_obj::Element)) {
HXDLIN( 196)						HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType)));
            					}
HXDLIN( 196)					invalid((((HX_("",00,00,00,00) + this1->nodeName) + HX_(" is missing attribute ",54,31,39,75)) + name));
            				}
            			}
            		}
HXDLIN( 196)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AttribAccess_Impl__obj,intError,return )

bool AttribAccess_Impl__obj::boolHelper( ::Xml this1,::String name, ::Dynamic invalid,bool backup){
            	HX_STACKFRAME(&_hx_pos_2d940624589f0a37_200_boolHelper)
HXLINE( 201)		bool value = backup;
HXLINE( 202)		if ((this1->nodeType == ::Xml_obj::Document)) {
HXLINE( 204)			if (::hx::IsNotNull( invalid )) {
HXLINE( 205)				invalid((HX_("Cannot access document attribute ",ca,30,fe,c0) + name));
            			}
            		}
            		else {
HXLINE( 209)			::String v = this1->get(name);
HXLINE( 210)			if (::hx::IsNotNull( v )) {
HXLINE( 211)				value = (v != HX_("0",30,00,00,00));
            			}
            			else {
HXLINE( 212)				if (::hx::IsNotNull( invalid )) {
HXLINE( 213)					if ((this1->nodeType != ::Xml_obj::Element)) {
HXLINE( 213)						HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType)));
            					}
HXDLIN( 213)					invalid((((HX_("",00,00,00,00) + this1->nodeName) + HX_(" is missing attribute ",54,31,39,75)) + name));
            				}
            			}
            		}
HXLINE( 215)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AttribAccess_Impl__obj,boolHelper,return )

bool AttribAccess_Impl__obj::boolSafe( ::Xml this1,::String name,bool backup){
            	HX_STACKFRAME(&_hx_pos_2d940624589f0a37_220_boolSafe)
HXDLIN( 220)		 ::Dynamic invalid = null();
HXDLIN( 220)		bool value = backup;
HXDLIN( 220)		if ((this1->nodeType == ::Xml_obj::Document)) {
HXDLIN( 220)			if (::hx::IsNotNull( invalid )) {
HXDLIN( 220)				invalid((HX_("Cannot access document attribute ",ca,30,fe,c0) + name));
            			}
            		}
            		else {
HXDLIN( 220)			::String v = this1->get(name);
HXDLIN( 220)			if (::hx::IsNotNull( v )) {
HXDLIN( 220)				value = (v != HX_("0",30,00,00,00));
            			}
            			else {
HXDLIN( 220)				if (::hx::IsNotNull( invalid )) {
HXDLIN( 220)					if ((this1->nodeType != ::Xml_obj::Element)) {
HXDLIN( 220)						HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType)));
            					}
HXDLIN( 220)					invalid((((HX_("",00,00,00,00) + this1->nodeName) + HX_(" is missing attribute ",54,31,39,75)) + name));
            				}
            			}
            		}
HXDLIN( 220)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AttribAccess_Impl__obj,boolSafe,return )

bool AttribAccess_Impl__obj::_hx_bool( ::Xml this1,::String name){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run(::String msg){
            			HX_STACKFRAME(&_hx_pos_2d940624589f0a37_225_bool)
HXDLIN( 225)			HX_STACK_DO_THROW(msg);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_2d940624589f0a37_225_bool)
HXDLIN( 225)		 ::Dynamic invalid =  ::Dynamic(new _hx_Closure_0());
HXDLIN( 225)		bool value = false;
HXDLIN( 225)		if ((this1->nodeType == ::Xml_obj::Document)) {
HXDLIN( 225)			if (::hx::IsNotNull( invalid )) {
HXDLIN( 225)				HX_STACK_DO_THROW((HX_("Cannot access document attribute ",ca,30,fe,c0) + name));
            			}
            		}
            		else {
HXDLIN( 225)			::String v = this1->get(name);
HXDLIN( 225)			if (::hx::IsNotNull( v )) {
HXDLIN( 225)				value = (v != HX_("0",30,00,00,00));
            			}
            			else {
HXDLIN( 225)				if (::hx::IsNotNull( invalid )) {
HXDLIN( 225)					if ((this1->nodeType != ::Xml_obj::Element)) {
HXDLIN( 225)						HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType)));
            					}
HXDLIN( 225)					HX_STACK_DO_THROW((((HX_("",00,00,00,00) + this1->nodeName) + HX_(" is missing attribute ",54,31,39,75)) + name));
            				}
            			}
            		}
HXDLIN( 225)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AttribAccess_Impl__obj,_hx_bool,return )

bool AttribAccess_Impl__obj::boolWarn( ::Xml this1,::String name,bool backup){
            	HX_STACKFRAME(&_hx_pos_2d940624589f0a37_230_boolWarn)
HXDLIN( 230)		 ::Dynamic invalid = ::flixel::FlxG_obj::log->warn_dyn();
HXDLIN( 230)		bool value = backup;
HXDLIN( 230)		if ((this1->nodeType == ::Xml_obj::Document)) {
HXDLIN( 230)			if (::hx::IsNotNull( invalid )) {
HXDLIN( 230)				invalid((HX_("Cannot access document attribute ",ca,30,fe,c0) + name));
            			}
            		}
            		else {
HXDLIN( 230)			::String v = this1->get(name);
HXDLIN( 230)			if (::hx::IsNotNull( v )) {
HXDLIN( 230)				value = (v != HX_("0",30,00,00,00));
            			}
            			else {
HXDLIN( 230)				if (::hx::IsNotNull( invalid )) {
HXDLIN( 230)					if ((this1->nodeType != ::Xml_obj::Element)) {
HXDLIN( 230)						HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType)));
            					}
HXDLIN( 230)					invalid((((HX_("",00,00,00,00) + this1->nodeName) + HX_(" is missing attribute ",54,31,39,75)) + name));
            				}
            			}
            		}
HXDLIN( 230)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AttribAccess_Impl__obj,boolWarn,return )

bool AttribAccess_Impl__obj::boolError( ::Xml this1,::String name,bool backup){
            	HX_STACKFRAME(&_hx_pos_2d940624589f0a37_235_boolError)
HXDLIN( 235)		 ::Dynamic invalid = ::flixel::FlxG_obj::log->error_dyn();
HXDLIN( 235)		bool value = backup;
HXDLIN( 235)		if ((this1->nodeType == ::Xml_obj::Document)) {
HXDLIN( 235)			if (::hx::IsNotNull( invalid )) {
HXDLIN( 235)				invalid((HX_("Cannot access document attribute ",ca,30,fe,c0) + name));
            			}
            		}
            		else {
HXDLIN( 235)			::String v = this1->get(name);
HXDLIN( 235)			if (::hx::IsNotNull( v )) {
HXDLIN( 235)				value = (v != HX_("0",30,00,00,00));
            			}
            			else {
HXDLIN( 235)				if (::hx::IsNotNull( invalid )) {
HXDLIN( 235)					if ((this1->nodeType != ::Xml_obj::Element)) {
HXDLIN( 235)						HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType)));
            					}
HXDLIN( 235)					invalid((((HX_("",00,00,00,00) + this1->nodeName) + HX_(" is missing attribute ",54,31,39,75)) + name));
            				}
            			}
            		}
HXDLIN( 235)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AttribAccess_Impl__obj,boolError,return )


AttribAccess_Impl__obj::AttribAccess_Impl__obj()
{
}

bool AttribAccess_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { outValue = _hx_int_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bool") ) { outValue = _hx_bool_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"string") ) { outValue = string_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"intSafe") ) { outValue = intSafe_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"intWarn") ) { outValue = intWarn_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"intError") ) { outValue = intError_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"boolSafe") ) { outValue = boolSafe_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"boolWarn") ) { outValue = boolWarn_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intHelper") ) { outValue = intHelper_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"boolError") ) { outValue = boolError_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stringSafe") ) { outValue = stringSafe_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"stringWarn") ) { outValue = stringWarn_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"boolHelper") ) { outValue = boolHelper_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stringError") ) { outValue = stringError_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stringHelper") ) { outValue = stringHelper_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AttribAccess_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AttribAccess_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class AttribAccess_Impl__obj::__mClass;

static ::String AttribAccess_Impl__obj_sStaticFields[] = {
	HX_("stringHelper",1f,0d,a7,9b),
	HX_("stringSafe",be,0e,4a,fe),
	HX_("string",d1,28,30,11),
	HX_("stringWarn",b7,f3,ee,00),
	HX_("stringError",37,7d,2c,7e),
	HX_("intHelper",bd,db,4d,29),
	HX_("intSafe",dc,59,31,0b),
	HX_("int",ef,0c,50,00),
	HX_("intWarn",d5,3e,d6,0d),
	HX_("intError",59,ec,a6,bb),
	HX_("boolHelper",38,f1,fe,a3),
	HX_("boolSafe",97,8a,28,b5),
	HX_("bool",2a,84,1b,41),
	HX_("boolWarn",90,6f,cd,b7),
	HX_("boolError",3e,5f,fa,c9),
	::String(null())
};

void AttribAccess_Impl__obj::__register()
{
	AttribAccess_Impl__obj _hx_dummy;
	AttribAccess_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_",61,68,03,27);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AttribAccess_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AttribAccess_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AttribAccess_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AttribAccess_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AttribAccess_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont
} // end namespace _BMFontXml