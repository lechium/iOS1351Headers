//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, WKWebView;
@protocol LoadingControllerDelegate;

@interface LoadingController : NSObject
{
    NSURL *_URL;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    WKWebView *_webView;	// 24 = 0x18
    id <LoadingControllerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100084e88
@property(nonatomic) __weak id <LoadingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void)stopLoading;	// IMP=0x0000000100084e40
- (void)reloadFromOrigin:(_Bool)arg1;	// IMP=0x0000000100084dcc
- (void)goForward;	// IMP=0x0000000100084d78
- (void)goBack;	// IMP=0x0000000100084d24
- (id)loadRequest:(id)arg1 userDriven:(_Bool)arg2 shouldOpenExternalURLs:(_Bool)arg3;	// IMP=0x0000000100084b38
- (id)loadRequest:(id)arg1 userDriven:(_Bool)arg2;	// IMP=0x0000000100084b28
@property(readonly, nonatomic) NSString *titleForStatePersisting;
@property(readonly, nonatomic) NSURL *URLForStatePersisting;
@property(retain, nonatomic) NSURL *URL;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool canGoForward;
@property(readonly, nonatomic) _Bool canGoBack;
@property(nonatomic) float estimatedProgress;

@end

