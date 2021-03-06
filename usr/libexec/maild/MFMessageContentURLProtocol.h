//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

@class EFCancelationToken, EFPromise, MFMessageLoadingContext;

@interface MFMessageContentURLProtocol : NSURLProtocol
{
    EFCancelationToken *_token;	// 16 = 0x10
    MFMessageLoadingContext *_loadingContext;	// 24 = 0x18
    EFPromise *_promise;	// 32 = 0x20
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;	// IMP=0x00000001000a3e00
+ (id)canonicalRequestForRequest:(id)arg1;	// IMP=0x00000001000a3de8
+ (_Bool)canInitWithRequest:(id)arg1;	// IMP=0x00000001000a3cc0
+ (id)loadingContextForURL:(id)arg1;	// IMP=0x00000001000a3c1c
+ (id)URLForLoadingContext:(id)arg1;	// IMP=0x00000001000a3b3c
+ (id)scheme;	// IMP=0x00000001000a3b30
+ (void)setRegistry:(id)arg1;	// IMP=0x00000001000a3b20
+ (id)registry;	// IMP=0x00000001000a3acc
+ (void)initialize;	// IMP=0x00000001000a3a7c
- (void).cxx_destruct;	// IMP=0x00000001000a54a8
@property(retain, nonatomic) EFPromise *promise; // @synthesize promise=_promise;
@property(readonly) MFMessageLoadingContext *loadingContext; // @synthesize loadingContext=_loadingContext;
@property(readonly) EFCancelationToken *token; // @synthesize token=_token;
- (void)_didLoadContentEvent:(id)arg1 error:(id)arg2;	// IMP=0x00000001000a4a58
- (void)stopLoading;	// IMP=0x00000001000a487c
- (void)startLoading;	// IMP=0x00000001000a46c8
- (id)_cachedResponseWithData:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000a43f4
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;	// IMP=0x00000001000a3e90
- (void)dealloc;	// IMP=0x00000001000a3e08

@end

