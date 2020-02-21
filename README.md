# golang-tts
文本到语音转换，基于微软SAPI

<h3>安装</h3>
1、go get -u github.com/zhaopuyang/golang-tts<br/>
2、将base文件夹中的tts.dll复制到当前文件目录下<br/>
3、完毕！<br/>
<h3>使用</h3>
<code>golang_tts.SpeakText("你好,世界!")</code>
<h3>注意</h3>
base文件夹为tts引擎的c++源文件<br/>
若要重新编译请先安装mingw64，编译命令：gcc --share tts.cc -o tts.dll -lole32 -lsapi
