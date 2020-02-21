#ifndef TTS_H
#define TTS_H
#define EXPORTS_API extern "C" __declspec(dllexport)

EXPORTS_API void speakText(const wchar_t *text);
EXPORTS_API void initEnv();
EXPORTS_API void releaseEnv();
EXPORTS_API void rapidSpeakText(const wchar_t *text);

#endif