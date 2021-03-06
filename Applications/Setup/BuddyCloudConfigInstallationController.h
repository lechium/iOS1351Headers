//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BFFFlowItem-Protocol.h"

@class NSString, UILabel, UIView;
@protocol BFFFlowItemDelegate;

@interface BuddyCloudConfigInstallationController : UIViewController <BFFFlowItem>
{
    _Bool _controllerDoneCalled;	// 8 = 0x8
    _Bool _cloudConfigurationChangedDuringInstallation;	// 9 = 0x9
    int _state;	// 12 = 0xc
    id <BFFFlowItemDelegate> _delegate;	// 16 = 0x10
    UIView *_containerView;	// 24 = 0x18
    UILabel *_messageView;	// 32 = 0x20
    UILabel *_activityLabel;	// 40 = 0x28
    NSString *_lastErrorDescription;	// 48 = 0x30
    CDUnknownBlockType _deviceConfiguredCompletionBlock;	// 56 = 0x38
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000f9cac
+ (_Bool)controllerNeedsToRun;	// IMP=0x00000001000f9c0c
- (void).cxx_destruct;	// IMP=0x00000001000fb978
@property(nonatomic) _Bool cloudConfigurationChangedDuringInstallation; // @synthesize cloudConfigurationChangedDuringInstallation=_cloudConfigurationChangedDuringInstallation;
@property(copy, nonatomic) CDUnknownBlockType deviceConfiguredCompletionBlock; // @synthesize deviceConfiguredCompletionBlock=_deviceConfiguredCompletionBlock;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *lastErrorDescription; // @synthesize lastErrorDescription=_lastErrorDescription;
@property(retain, nonatomic) UILabel *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) UILabel *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)nextButtonPressed:(id)arg1;	// IMP=0x00000001000fb84c
- (void)cloudConfigDidChange:(id)arg1;	// IMP=0x00000001000fb5f8
- (void)_setupForState;	// IMP=0x00000001000fa928
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000fa6f8
- (void)controllerDone;	// IMP=0x00000001000fa440
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000fa400
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000fa244
- (void)dealloc;	// IMP=0x00000001000fa1cc
- (id)init;	// IMP=0x00000001000f9cb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

