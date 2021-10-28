//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "UIApplicationDelegate-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSObject, NSString, UIWindow;
@protocol OS_dispatch_queue;

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    _Bool _isInitialized;	// 8 = 0x8
    UIWindow *_window;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_acceptQueue;	// 24 = 0x18
    NSMutableSet *_activeSharingURLs;	// 32 = 0x20
    NSMutableDictionary *_activeVettingURLToVettingAcceptor;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010001a9c0
@property(retain, nonatomic, getter=activeVettingURLToVettingAcceptor) NSMutableDictionary *activeVettingURLToVettingAcceptor; // @synthesize activeVettingURLToVettingAcceptor=_activeVettingURLToVettingAcceptor;
@property(retain, nonatomic, getter=activeSharingURLs) NSMutableSet *activeSharingURLs; // @synthesize activeSharingURLs=_activeSharingURLs;
@property(retain, nonatomic, getter=acceptQueue) NSObject<OS_dispatch_queue> *acceptQueue; // @synthesize acceptQueue=_acceptQueue;
@property(nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x000000010001a85c
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000010001a854
- (void)_handleURL:(id)arg1;	// IMP=0x000000010001a69c
- (void)vetURL:(id)arg1;	// IMP=0x0000000100019f94
- (void)acceptShareWithMetadata:(id)arg1 shareURL:(id)arg2;	// IMP=0x0000000100019f04
- (void)acceptShareWithURL:(id)arg1;	// IMP=0x0000000100019e90
- (void)_acceptShareWithAcceptor:(id)arg1;	// IMP=0x0000000100019708
- (void)initOnce;	// IMP=0x0000000100019488
- (_Bool)_shouldLaunchAcceptFlowForShareURL:(id)arg1;	// IMP=0x000000010001930c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
