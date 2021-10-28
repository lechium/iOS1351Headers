//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSNumber, NSXPCConnection;

@interface SSActiveViewController : SBUIRemoteAlertServiceViewController
{
    _Bool _userInfoSet;	// 8 = 0x8
    NSNumber *isPausedNumber;	// 16 = 0x10
    NSNumber *isScreenLockedNumber;	// 24 = 0x18
    NSXPCConnection *helperToolConnection;	// 32 = 0x20
    id helperTool;	// 40 = 0x28
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0000000100003c28
- (void).cxx_destruct;	// IMP=0x0000000100004b18
@property _Bool userInfoSet; // @synthesize userInfoSet=_userInfoSet;
@property(retain) id helperTool; // @synthesize helperTool;
@property(retain) NSXPCConnection *helperToolConnection; // @synthesize helperToolConnection;
@property(retain) NSNumber *isScreenLockedNumber; // @synthesize isScreenLockedNumber;
@property(retain) NSNumber *isPausedNumber; // @synthesize isPausedNumber;
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000100004a7c
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100004a48
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100004a04
- (void)viewDidLoad;	// IMP=0x00000001000049d0
- (void)sendResultAndTerminate:(int)arg1;	// IMP=0x0000000100004890
- (void)showControls;	// IMP=0x000000010000414c
- (void)setUserInfo:(id)arg1;	// IMP=0x0000000100003fac
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100003c30

@end
