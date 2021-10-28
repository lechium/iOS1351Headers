//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TouchIconFetcherObserver-Protocol.h"

@class NSMutableArray, NSString, WKWebView, _WKRemoteObjectInterface;
@protocol TouchIconFetcherWebProcessController;

@interface TouchIconFetcher : NSObject <TouchIconFetcherObserver>
{
    WKWebView *_webView;	// 8 = 0x8
    _Bool _fetchingURLs;	// 16 = 0x10
    _Bool _invalidated;	// 17 = 0x11
    NSMutableArray *_completionBlocks;	// 24 = 0x18
    id <TouchIconFetcherWebProcessController> _activityProxy;	// 32 = 0x20
    _WKRemoteObjectInterface *_touchIconFetcherObserver;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100147d6c
- (void)didFetchTouchIconURLs:(id)arg1 forURL:(id)arg2;	// IMP=0x0000000100147bd8
- (void)fetchTouchIconURLsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100147b10
- (id)_webProcessActivityProxy;	// IMP=0x0000000100147a54
- (void)invalidate;	// IMP=0x00000001001478b0
- (void)_setUpTouchIconFetcherObserver;	// IMP=0x0000000100147774
- (id)initWithWebView:(id)arg1;	// IMP=0x00000001001476bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
