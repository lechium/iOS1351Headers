//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSDictionary, NSObject, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;
@protocol OS_dispatch_queue;

@interface PasswordSharingStartViewController : SVSBaseViewController <UIGestureRecognizerDelegate>
{
    UIButton *_acceptButton;	// 32 = 0x20
    UIActivityIndicatorView *_activityIndicatorView;	// 40 = 0x28
    UILabel *_activityLabel;	// 48 = 0x30
    UILabel *_detailLabel;	// 56 = 0x38
    UIButton *_dismissButton;	// 64 = 0x40
    UILabel *_infoLabel;	// 72 = 0x48
    UIImageView *_imageView;	// 80 = 0x50
    UIView *_progressView;	// 88 = 0x58
    UILabel *_titleLabel;	// 96 = 0x60
    _Bool _displayNameIsDevice;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 112 = 0x70
    NSString *_peerDisplayName;	// 120 = 0x78
    NSDictionary *_userInfo;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000100051320
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *peerDisplayName; // @synthesize peerDisplayName=_peerDisplayName;
@property(nonatomic) _Bool displayNameIsDevice; // @synthesize displayNameIsDevice=_displayNameIsDevice;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)handleTapOutsideView:(id)arg1;	// IMP=0x0000000100051204
- (void)handleDismissButtonPressed:(id)arg1;	// IMP=0x000000010005116c
- (void)handleAllowButtonPressed:(id)arg1;	// IMP=0x0000000100050ed0
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000100050e44
- (void)configureUIElementsForHotspot;	// IMP=0x0000000100050bb0
- (void)configureUIElementsDefault;	// IMP=0x0000000100050690
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000505d0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100050510
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100050384

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

