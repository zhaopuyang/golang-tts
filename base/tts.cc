#include<windows.h>
#include <sapi.h>
#include "tts.h"


ISpVoice *pVoice = NULL;

void speakText(const wchar_t * text)
{
   pVoice->Speak(text,SVSFDefault | SVSFPurgeBeforeSpeak, NULL);
}

void initEnv()
{
    CoInitialize(NULL);
    CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void **)&pVoice);
}
void releaseEnv()
{
    pVoice->Release();
    pVoice = NULL;
    CoUninitialize();
}
void rapidSpeakText(const wchar_t * text)
{
   initEnv();
   speakText(text);
   releaseEnv();
}