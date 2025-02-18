// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_shaders_vertex_VertexTransformShader
#include <shaders/vertex/VertexTransformShader.h>
#endif
#ifndef INCLUDED_shaders_vertex_VertexTransformer
#include <shaders/vertex/VertexTransformer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_64df6d17187a2d08_9_new,"shaders.vertex.VertexTransformer","new",0x3e23815d,"shaders.vertex.VertexTransformer.new","shaders/vertex/VertexTransformShader.hx",9,0xc9342ffb)
namespace shaders{
namespace vertex{

void VertexTransformer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_64df6d17187a2d08_9_new)
HXDLIN(   9)		this->shader =  ::shaders::vertex::VertexTransformShader_obj::__alloc( HX_CTX );
            	}

Dynamic VertexTransformer_obj::__CreateEmpty() { return new VertexTransformer_obj; }

void *VertexTransformer_obj::_hx_vtable = 0;

Dynamic VertexTransformer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VertexTransformer_obj > _hx_result = new VertexTransformer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VertexTransformer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2f69bf87;
}


::hx::ObjectPtr< VertexTransformer_obj > VertexTransformer_obj::__new() {
	::hx::ObjectPtr< VertexTransformer_obj > __this = new VertexTransformer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VertexTransformer_obj > VertexTransformer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VertexTransformer_obj *__this = (VertexTransformer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VertexTransformer_obj), true, "shaders.vertex.VertexTransformer"));
	*(void **)__this = VertexTransformer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VertexTransformer_obj::VertexTransformer_obj()
{
}

void VertexTransformer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexTransformer);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void VertexTransformer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

::hx::Val VertexTransformer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VertexTransformer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::vertex::VertexTransformShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexTransformer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VertexTransformer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::vertex::VertexTransformShader */ ,(int)offsetof(VertexTransformer_obj,shader),HX_("shader",25,bf,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VertexTransformer_obj_sStaticStorageInfo = 0;
#endif

static ::String VertexTransformer_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	::String(null()) };

::hx::Class VertexTransformer_obj::__mClass;

void VertexTransformer_obj::__register()
{
	VertexTransformer_obj _hx_dummy;
	VertexTransformer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.vertex.VertexTransformer",eb,8e,de,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VertexTransformer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VertexTransformer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VertexTransformer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VertexTransformer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
} // end namespace vertex
