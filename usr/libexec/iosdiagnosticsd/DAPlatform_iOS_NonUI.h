//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DAPlatform_iOS.h"

@interface DAPlatform_iOS_NonUI : DAPlatform_iOS
{
}

+ (id)sharedInstance;	// IMP=0x000000010000972c
- (void)activateSimpleAlertWithTitle:(id)arg1 message:(id)arg2 defaultButtonName:(id)arg3 cancelButtonName:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000097c0
- (void)undimCheckerBoardDisplay;	// IMP=0x00000001000097bc
- (void)dimCheckerBoardDisplay;	// IMP=0x00000001000097b8
- (void)sceneStatusBarStyle:(long long)arg1;	// IMP=0x00000001000097b4
- (void)hideSceneStatusBar;	// IMP=0x00000001000097b0
- (void)showSceneStatusBar;	// IMP=0x00000001000097ac
- (_Bool)didSetProxyServerInformation;	// IMP=0x00000001000097a4
- (void)exitCheckerBoard;	// IMP=0x00000001000097a0
- (_Bool)isCheckerBoardActive;	// IMP=0x0000000100009798

@end
