// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_scryfall_Card
#include <scryfall/Card.h>
#endif
#ifndef INCLUDED_scryfall_Result
#include <scryfall/Result.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_41fa36b6ebaab841_38_new,"scryfall.Card","new",0x514ea67e,"scryfall.Card.new","scryfall/Card.hx",38,0xf5d4a4d1)
HX_LOCAL_STACK_FRAME(_hx_pos_41fa36b6ebaab841_10_get_id,"scryfall.Card","get_id",0x31f343c6,"scryfall.Card.get_id","scryfall/Card.hx",10,0xf5d4a4d1)
HX_LOCAL_STACK_FRAME(_hx_pos_41fa36b6ebaab841_16_get_rarity,"scryfall.Card","get_rarity",0xac548596,"scryfall.Card.get_rarity","scryfall/Card.hx",16,0xf5d4a4d1)
HX_LOCAL_STACK_FRAME(_hx_pos_41fa36b6ebaab841_22_get_colors,"scryfall.Card","get_colors",0xb8a37f1b,"scryfall.Card.get_colors","scryfall/Card.hx",22,0xf5d4a4d1)
HX_LOCAL_STACK_FRAME(_hx_pos_41fa36b6ebaab841_28_get_typeLine,"scryfall.Card","get_typeLine",0xf24c45f9,"scryfall.Card.get_typeLine","scryfall/Card.hx",28,0xf5d4a4d1)
HX_LOCAL_STACK_FRAME(_hx_pos_41fa36b6ebaab841_34_get_imageUrls,"scryfall.Card","get_imageUrls",0x06782694,"scryfall.Card.get_imageUrls","scryfall/Card.hx",34,0xf5d4a4d1)
HX_LOCAL_STACK_FRAME(_hx_pos_41fa36b6ebaab841_42_toString,"scryfall.Card","toString",0x7b210dce,"scryfall.Card.toString","scryfall/Card.hx",42,0xf5d4a4d1)
namespace scryfall{

void Card_obj::__construct( ::Dynamic obj){
            	HX_STACKFRAME(&_hx_pos_41fa36b6ebaab841_38_new)
HXDLIN(  38)		super::__construct(obj);
            	}

Dynamic Card_obj::__CreateEmpty() { return new Card_obj; }

void *Card_obj::_hx_vtable = 0;

Dynamic Card_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Card_obj > _hx_result = new Card_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Card_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x593034cf) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x593034cf;
	} else {
		return inClassId==(int)0x7996a942;
	}
}

::String Card_obj::get_id(){
            	HX_STACKFRAME(&_hx_pos_41fa36b6ebaab841_10_get_id)
HXDLIN(  10)		return ( (::String)(this->_struct->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Card_obj,get_id,return )

::String Card_obj::get_rarity(){
            	HX_STACKFRAME(&_hx_pos_41fa36b6ebaab841_16_get_rarity)
HXDLIN(  16)		return ( (::String)(this->_struct->__Field(HX_("rarity",2b,cc,37,ba),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Card_obj,get_rarity,return )

::Array< ::String > Card_obj::get_colors(){
            	HX_STACKFRAME(&_hx_pos_41fa36b6ebaab841_22_get_colors)
HXDLIN(  22)		::Array< ::String > tmp = ( (::Array< ::String >)(this->_struct->__Field(HX_("colors",b0,c5,86,c6),::hx::paccDynamic)) );
HXDLIN(  22)		if (::hx::IsNotNull( tmp )) {
HXDLIN(  22)			return tmp;
            		}
            		else {
HXDLIN(  22)			return ( (::Array< ::String >)( ::Dynamic(this->_struct->__Field(HX_("card_faces",47,f6,4d,f8),::hx::paccDynamic))->__GetItem(0)->__Field(HX_("colors",b0,c5,86,c6),::hx::paccDynamic)) );
            		}
HXDLIN(  22)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Card_obj,get_colors,return )

::String Card_obj::get_typeLine(){
            	HX_STACKFRAME(&_hx_pos_41fa36b6ebaab841_28_get_typeLine)
HXDLIN(  28)		::String tmp = ( (::String)(this->_struct->__Field(HX_("printed_type_line",66,27,7f,2a),::hx::paccDynamic)) );
HXDLIN(  28)		::String tmp1;
HXDLIN(  28)		if (::hx::IsNotNull( tmp )) {
HXDLIN(  28)			tmp1 = tmp;
            		}
            		else {
HXDLIN(  28)			tmp1 = ( (::String)(this->_struct->__Field(HX_("type_line",d9,1e,6f,2c),::hx::paccDynamic)) );
            		}
HXDLIN(  28)		if (::hx::IsNotNull( tmp1 )) {
HXDLIN(  28)			return tmp1;
            		}
            		else {
HXDLIN(  28)			return ( (::String)((((HX_("",00,00,00,00) +  ::Dynamic(this->_struct->__Field(HX_("card_faces",47,f6,4d,f8),::hx::paccDynamic))->__GetItem(0)->__Field(HX_("type_line",d9,1e,6f,2c),::hx::paccDynamic)) + HX_(" // ",e0,a6,4a,15)) +  ::Dynamic(this->_struct->__Field(HX_("card_faces",47,f6,4d,f8),::hx::paccDynamic))->__GetItem(1)->__Field(HX_("type_line",d9,1e,6f,2c),::hx::paccDynamic))) );
            		}
HXDLIN(  28)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Card_obj,get_typeLine,return )

 ::Dynamic Card_obj::get_imageUrls(){
            	HX_STACKFRAME(&_hx_pos_41fa36b6ebaab841_34_get_imageUrls)
HXDLIN(  34)		return this->_struct->__Field(HX_("image_uris",2b,46,5e,79),::hx::paccDynamic);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Card_obj,get_imageUrls,return )

::String Card_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_41fa36b6ebaab841_42_toString)
HXLINE(  43)		::String tmp = ( (::String)(this->_struct->__Field(HX_("mana_cost",45,d4,93,18),::hx::paccDynamic)) );
HXDLIN(  43)		::String _hx_tmp;
HXDLIN(  43)		if (::hx::IsNotNull( tmp )) {
HXLINE(  43)			_hx_tmp = tmp;
            		}
            		else {
HXLINE(  43)			_hx_tmp = HX_("",00,00,00,00);
            		}
HXDLIN(  43)		::String _hx_tmp1 = ( (::String)(((((((HX_("\n",0a,00,00,00) + this->_struct->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) + HX_(" ",20,00,00,00)) + _hx_tmp) + HX_("\n",0a,00,00,00)) + this->_struct->__Field(HX_("type_line",d9,1e,6f,2c),::hx::paccDynamic)) + HX_("\n",0a,00,00,00))) );
HXDLIN(  43)		::String tmp1 = ( (::String)(this->_struct->__Field(HX_("oracle_text",4e,41,b9,7a),::hx::paccDynamic)) );
HXDLIN(  43)		::String _hx_tmp2;
HXDLIN(  43)		if (::hx::IsNotNull( tmp1 )) {
HXLINE(  43)			_hx_tmp2 = tmp1;
            		}
            		else {
HXLINE(  43)			_hx_tmp2 = ::Array_obj< ::String >::__new(2)->init(0, ::Dynamic( ::Dynamic(this->_struct->__Field(HX_("card_faces",47,f6,4d,f8),::hx::paccDynamic))->__GetItem(0)->__Field(HX_("oracle_text",4e,41,b9,7a),::hx::paccDynamic)))->init(1, ::Dynamic( ::Dynamic(this->_struct->__Field(HX_("card_faces",47,f6,4d,f8),::hx::paccDynamic))->__GetItem(1)->__Field(HX_("oracle_text",4e,41,b9,7a),::hx::paccDynamic)))->join(HX_(" // \n",2a,5d,07,8c));
            		}
HXLINE(  42)		return ((_hx_tmp1 + _hx_tmp2) + HX_("\n",0a,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Card_obj,toString,return )


Card_obj::Card_obj()
{
}

::hx::Val Card_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_id() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return ::hx::Val( get_id_dyn() ); }
		if (HX_FIELD_EQ(inName,"rarity") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rarity() ); }
		if (HX_FIELD_EQ(inName,"colors") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_colors() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"typeLine") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_typeLine() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"imageUrls") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_imageUrls() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_rarity") ) { return ::hx::Val( get_rarity_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_colors") ) { return ::hx::Val( get_colors_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_typeLine") ) { return ::hx::Val( get_typeLine_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_imageUrls") ) { return ::hx::Val( get_imageUrls_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

void Card_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("rarity",2b,cc,37,ba));
	outFields->push(HX_("colors",b0,c5,86,c6));
	outFields->push(HX_("typeLine",ce,1b,7e,b4));
	outFields->push(HX_("imageUrls",1f,6b,e1,2f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Card_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Card_obj_sStaticStorageInfo = 0;
#endif

static ::String Card_obj_sMemberFields[] = {
	HX_("get_id",24,f3,2f,a3),
	HX_("get_rarity",f4,3b,bf,aa),
	HX_("get_colors",79,35,0e,b7),
	HX_("get_typeLine",d7,cf,97,69),
	HX_("get_imageUrls",f6,3e,45,f1),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class Card_obj::__mClass;

void Card_obj::__register()
{
	Card_obj _hx_dummy;
	Card_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("scryfall.Card",8c,4f,a6,23);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Card_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Card_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Card_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Card_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace scryfall