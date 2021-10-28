//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/EDMailDropMetadataGenerator.h>

#import "WKNavigationDelegate-Protocol.h"

@class EFPromise, NSMutableArray, NSString, NSTimer, WKWebView;

@interface MailDropMetadataGenerator_iOS : EDMailDropMetadataGenerator <WKNavigationDelegate>
{
    WKWebView *_webView;	// 8 = 0x8
    NSTimer *_watchdogTimer;	// 16 = 0x10
    NSMutableArray *_scriptHandlers;	// 24 = 0x18
    EFPromise *_activePromise;	// 32 = 0x20
}

+ (id)log;	// IMP=0x000000010003c238
- (void).cxx_destruct;	// IMP=0x000000010003e790
@property(retain, nonatomic) EFPromise *activePromise; // @synthesize activePromise=_activePromise;
@property(retain, nonatomic) NSMutableArray *scriptHandlers; // @synthesize scriptHandlers=_scriptHandlers;
@property(retain, nonatomic) NSTimer *watchdogTimer; // @synthesize watchdogTimer=_watchdogTimer;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void)_addScriptHandlerForKey:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003e418
- (void)insertMaildropAttachmentViewForContentURL:(id)arg1 HTMLByContentID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010003dcd4
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x000000010003dbb8
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x000000010003da80
- (void)webViewWebContentProcessDidTerminate:(id)arg1;	// IMP=0x000000010003d964
- (void)_webViewWatchdogTimerFired:(id)arg1;	// IMP=0x000000010003d8f8
- (void)_findMailDropNodesInFileURL:(id)arg1 promise:(id)arg2;	// IMP=0x000000010003cf98
- (_Bool)_shouldSearchForMailDropNodesInFileURL:(id)arg1;	// IMP=0x000000010003cc80
- (void)tearDownWebView;	// IMP=0x000000010003c988
- (void)generateMailDropMetadataForContentURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003c848
- (id)withTimeout:(double)arg1 do:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003c3a4
- (void)dealloc;	// IMP=0x000000010003c328

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
