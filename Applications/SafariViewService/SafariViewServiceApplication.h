//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>

#import "UIApplicationDelegate-Protocol.h"
#import "_SFSharedSiteMetadataManagerProvider-Protocol.h"
#import "_SFUIApplicationModifierFlagsProviding-Protocol.h"

@class NSString, UIWindow;

@interface SafariViewServiceApplication : UIApplication <_SFUIApplicationModifierFlagsProviding, UIApplicationDelegate, _SFSharedSiteMetadataManagerProvider>
{
    long long _currentKeyboardModifierFlags;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x00000001000023f4
@property(readonly, nonatomic) long long currentKeyboardModifierFlags;
- (void)handleKeyUIEvent:(id)arg1;	// IMP=0x0000000100002620
- (id)newSharedSiteMetadataManager;	// IMP=0x00000001000024f4
- (void)applicationDidFinishLaunching:(id)arg1;	// IMP=0x00000001000024a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
