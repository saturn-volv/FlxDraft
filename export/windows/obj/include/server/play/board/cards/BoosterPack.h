// Generated by Haxe 4.3.2
#ifndef INCLUDED_server_play_board_cards_BoosterPack
#define INCLUDED_server_play_board_cards_BoosterPack

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(scryfall,Card)
HX_DECLARE_CLASS1(scryfall,Result)
HX_DECLARE_CLASS4(server,play,board,cards,BoosterPack)

namespace server{
namespace play{
namespace board{
namespace cards{


class HXCPP_CLASS_ATTRIBUTES BoosterPack_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BoosterPack_obj OBJ_;
		BoosterPack_obj();

	public:
		enum { _hx_ClassId = 0x1200d191 };

		void __construct( ::Dynamic spreads);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="server.play.board.cards.BoosterPack")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"server.play.board.cards.BoosterPack"); }
		static ::hx::ObjectPtr< BoosterPack_obj > __new( ::Dynamic spreads);
		static ::hx::ObjectPtr< BoosterPack_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic spreads);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BoosterPack_obj();

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
		::String __ToString() const { return HX_("BoosterPack",29,d1,95,d4); }

		static void __boot();
		static int DRAFT_COMMON_DIST;
		static int DRAFT_UNCOMMON_DIST;
		static int DRAFT_RARE_DIST;
		static ::Array< ::Dynamic> setCards;
		static ::Array< ::Dynamic> get_setCards();
		static ::Dynamic get_setCards_dyn();

		static ::String setCode;
		static  ::scryfall::Card getRandomCard(::String query);
		static ::Dynamic getRandomCard_dyn();

		::Array< ::Dynamic> cardsInside;
		 ::Dynamic determineWildcardDistribution();
		::Dynamic determineWildcardDistribution_dyn();

		 ::scryfall::Card chooseCard(int index);
		::Dynamic chooseCard_dyn();

		 ::scryfall::Card getBoosterValidCard(::String rarity, ::Dynamic doublefaced);
		::Dynamic getBoosterValidCard_dyn();

		 ::scryfall::Card getBoosterValidBasicLandCard();
		::Dynamic getBoosterValidBasicLandCard_dyn();

		 ::scryfall::Card getBoosterFoilCard();
		::Dynamic getBoosterFoilCard_dyn();

};

} // end namespace server
} // end namespace play
} // end namespace board
} // end namespace cards

#endif /* INCLUDED_server_play_board_cards_BoosterPack */ 