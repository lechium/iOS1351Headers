//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseViewController.h"

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"

@class NSObject, NSString, PKGlyphView, UIButton, UIImageView, UILabel;
@protocol OS_dispatch_source;

@interface NFCTagReaderScanViewController : SVSBaseViewController <LSApplicationWorkspaceObserverProtocol>
{
    UILabel *_titleLabel;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
    UILabel *_info1Label;	// 48 = 0x30
    UIButton *_mainButton;	// 56 = 0x38
    UIButton *_notNowButton;	// 64 = 0x40
    PKGlyphView *_nfcAnimationView;	// 72 = 0x48
    long long _mode;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_timer;	// 88 = 0x58
    _Bool _idle;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000001000494d8
@property(nonatomic) _Bool idle; // @synthesize idle=_idle;
- (void)updatePurpose:(id)arg1;	// IMP=0x0000000100049490
- (void)dismissEventually;	// IMP=0x0000000100049340
- (void)nfcTagScanned;	// IMP=0x0000000100049048
- (void)handleNotNowButton:(id)arg1;	// IMP=0x0000000100048fb0
- (void)handleMainButton:(id)arg1;	// IMP=0x0000000100048f18
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100048e60
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100048ce8
- (void)showFailureUI;	// IMP=0x0000000100048b54
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000485a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

