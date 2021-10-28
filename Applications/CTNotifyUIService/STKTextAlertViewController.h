//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "STKBaseAlertViewController.h"

#import "UINavigationBarDelegate-Protocol.h"

@class NSString, STKTextSessionAction;

@interface STKTextAlertViewController : STKBaseAlertViewController <UINavigationBarDelegate>
{
}

+ (_Bool)wantsTextView;	// IMP=0x0000000100006fa4
- (void)dismiss;	// IMP=0x0000000100007a5c
- (void)dismiss:(id)arg1;	// IMP=0x00000001000079f0
- (void)accept:(id)arg1;	// IMP=0x0000000100007984
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000078f0
- (id)alertText;	// IMP=0x0000000100007874
- (void)rightNavigationButtonPressed;	// IMP=0x0000000100007868
- (void)leftNavigationButtonPressed;	// IMP=0x00000001000077fc
- (id)newBottomBar;	// IMP=0x0000000100007248
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;	// IMP=0x0000000100007228
- (id)newTopBar;	// IMP=0x0000000100007070
- (_Bool)_sendsResponseUponDisplay;	// IMP=0x0000000100006ffc
- (_Bool)validateAction:(id)arg1;	// IMP=0x0000000100006fac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) STKTextSessionAction *sessionAction; // @dynamic sessionAction;
@property(readonly) Class superclass;

@end
