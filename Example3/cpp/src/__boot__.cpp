#include <hxcpp.h>

#include <sys/io/FileInput.h>
#include <haxe/io/Input.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <Sys.h>
#include <cpp/Lib.h>
#include <StringBuf.h>
#include <Std.h>
#include <Hello.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::sys::io::FileInput_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::Sys_obj::__register();
::cpp::Lib_obj::__register();
::StringBuf_obj::__register();
::Std_obj::__register();
::Hello_obj::__register();
::cpp::Lib_obj::__boot();
::Hello_obj::__boot();
::Std_obj::__boot();
::StringBuf_obj::__boot();
::Sys_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::io::Input_obj::__boot();
::sys::io::FileInput_obj::__boot();
}

