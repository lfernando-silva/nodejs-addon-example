#include <nan.h>
#include "calc.h"

void soma(const Nan::FunctionCallbackInfo<v8::Value>& info) {
	v8::Local<v8::Number> num = Nan::New(soma(info[0]->NumberValue(), info[1]->NumberValue()));
	info.GetReturnValue().Set(num);
}

void subtrai(const Nan::FunctionCallbackInfo<v8::Value>& info) {
	v8::Local<v8::Number> num = Nan::New(subtrai(info[0]->NumberValue(), info[1]->NumberValue()));
	info.GetReturnValue().Set(num);
}

void multiplica(const Nan::FunctionCallbackInfo<v8::Value>& info) {
	v8::Local<v8::Number> num = Nan::New(multiplica(info[0]->NumberValue(), info[1]->NumberValue()));
	info.GetReturnValue().Set(num);
}

void divide(const Nan::FunctionCallbackInfo<v8::Value>& info) {
	v8::Local<v8::Number> num = Nan::New(divide(info[0]->NumberValue(), info[1]->NumberValue()));
	info.GetReturnValue().Set(num);
}

void Init(v8::Local<v8::Object> exports) {
	exports->Set(Nan::New("soma").ToLocalChecked(), Nan::New<v8::FunctionTemplate>(soma)->GetFunction());
	exports->Set(Nan::New("subtrai").ToLocalChecked(), Nan::New<v8::FunctionTemplate>(subtrai)->GetFunction());
	exports->Set(Nan::New("multiplica").ToLocalChecked(), Nan::New<v8::FunctionTemplate>(multiplica)->GetFunction());
	exports->Set(Nan::New("divide").ToLocalChecked(), Nan::New<v8::FunctionTemplate>(divide)->GetFunction());
}

NODE_MODULE(addon, Init)