//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct ArticleFinderJSController;

struct OpaqueJSContext;

struct OpaqueJSValue;

struct ReaderController {
    id _field1;
    struct RetainPtr<NSString> _field2;
    _Bool _field3;
    _Bool _field4;
    struct unique_ptr<ArticleFinderJSController, std::__1::default_delete<ArticleFinderJSController>> _field5;
    id _field6;
    struct RetainPtr<NSString> _field7;
    _Bool _field8;
    id _field9;
};

struct ReaderJSController {
    CDUnknownFunctionPointerType *_field1;
    struct Vector<OpaqueJSValue *, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> _field2;
    struct OpaqueJSValue *_field3;
    struct OpaqueJSValue *_field4;
    struct OpaqueJSContext *_field5;
    id _field6;
    struct ReaderController *_field7;
    struct unique_ptr<ArticleFinderJSController, std::__1::default_delete<ArticleFinderJSController>> _field8;
    id _field9;
    int _field10;
    struct RetainPtr<NSDictionary> _field11;
};

struct RetainPtr<NSDictionary> {
    void *_field1;
};

struct RetainPtr<NSString> {
    void *_field1;
};

struct Vector<OpaqueJSValue *, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
    struct OpaqueJSValue **_field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct unique_ptr<ArticleFinderJSController, std::__1::default_delete<ArticleFinderJSController>> {
    struct __compressed_pair<ArticleFinderJSController *, std::__1::default_delete<ArticleFinderJSController>> {
        struct ArticleFinderJSController *_field1;
    } _field1;
};

