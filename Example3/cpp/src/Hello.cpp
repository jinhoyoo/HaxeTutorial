#include <hxcpp.h>

#ifndef INCLUDED_Hello
#include <Hello.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

Void Hello_obj::__construct()
{
	return null();
}

//Hello_obj::~Hello_obj() { }

Dynamic Hello_obj::__CreateEmpty() { return  new Hello_obj; }
hx::ObjectPtr< Hello_obj > Hello_obj::__new()
{  hx::ObjectPtr< Hello_obj > result = new Hello_obj();
	result->__construct();
	return result;}

Dynamic Hello_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Hello_obj > result = new Hello_obj();
	result->__construct();
	return result;}

Void Hello_obj::main( ){
{
		HX_STACK_FRAME("Hello","main",0x20e85735,"Hello.main","Hello.hx",4,0x257b830c)
		HX_STACK_LINE(6)
		::Sys_obj::println(HX_CSTRING("What's your name?"));
		HX_STACK_LINE(8)
		::String input = ::Sys_obj::_stdin()->readLine();		HX_STACK_VAR(input,"input");
		HX_STACK_LINE(10)
		::Sys_obj::println((HX_CSTRING("Hello ") + input));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Hello_obj,main,(void))


Hello_obj::Hello_obj()
{
}

Dynamic Hello_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Hello_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Hello_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hello_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hello_obj::__mClass,"__mClass");
};

#endif

Class Hello_obj::__mClass;

void Hello_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Hello"), hx::TCanCast< Hello_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Hello_obj::__boot()
{
}

