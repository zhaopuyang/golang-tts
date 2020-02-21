package golang_tts

import(
	"syscall"
	"unsafe"
)

func SpeakText(text string){
	ttsdll:=syscall.NewLazyDLL("tts.dll")
	speak:=ttsdll.NewProc("rapidSpeakText")
	speak.Call(uintptr(unsafe.Pointer(syscall.StringToUTF16Ptr(text))))
}