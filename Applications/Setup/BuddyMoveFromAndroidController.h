//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BFFFlowItem-Protocol.h"

@class NSString, WLWelcomeViewController;
@protocol BFFFlowItemDelegate;

@interface BuddyMoveFromAndroidController : NSObject <BFFFlowItem>
{
    WLWelcomeViewController *_welcomeViewController;	// 8 = 0x8
    id <BFFFlowItemDelegate> _delegate;	// 16 = 0x10
}

+ (id)cloudConfigSkipKey;	// IMP=0x0000000100043520
+ (_Bool)showMoveFromAndroidRestoreChoice;	// IMP=0x00000001000434a4
+ (void)prefetchShowMoveFromAndroidRestoreChoiceWithTimeout:(unsigned long long)arg1;	// IMP=0x0000000100043348
+ (void)prefetchShowMoveFromAndroidRestoreChoice;	// IMP=0x0000000100043338
- (void).cxx_destruct;	// IMP=0x000000010004376c
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_welcomeKitDidFinishWithSuccess:(_Bool)arg1;	// IMP=0x0000000100043688
- (_Bool)controllerAllowsNavigatingBack;	// IMP=0x0000000100043680
- (id)viewController;	// IMP=0x0000000100043678
- (id)init;	// IMP=0x0000000100043530

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
