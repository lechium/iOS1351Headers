//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseMainController.h"

@class NSString, SFAppContent, SVSCommonNavController, SubCredentialActivationStartViewController, UIImage, UIStoryboard;

@interface SubCredentialActivationMainController : SVSBaseMainController
{
    _Bool _activated;	// 24 = 0x18
    _Bool _appeared;	// 25 = 0x19
    NSString *_appName;	// 32 = 0x20
    UIImage *_appIconImage;	// 40 = 0x28
    _Bool _dismissed;	// 48 = 0x30
    UIStoryboard *_storyboard;	// 56 = 0x38
    SVSCommonNavController *_vcNav;	// 64 = 0x40
    SubCredentialActivationStartViewController *_vcStart;	// 72 = 0x48
    _Bool _appInfoDownloadEnabled;	// 80 = 0x50
    SFAppContent *_appContent;	// 88 = 0x58
    NSString *_adamID;	// 96 = 0x60
    NSString *_appStoreURL;	// 104 = 0x68
    NSString *_cardSubtitle;	// 112 = 0x70
    NSString *_cardTitle;	// 120 = 0x78
    NSString *_launchURL;	// 128 = 0x80
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x000000010007d63c
- (void).cxx_destruct;	// IMP=0x000000010007d354
@property(copy, nonatomic) NSString *launchURL; // @synthesize launchURL=_launchURL;
@property(copy, nonatomic) NSString *cardTitle; // @synthesize cardTitle=_cardTitle;
@property(copy, nonatomic) NSString *cardSubtitle; // @synthesize cardSubtitle=_cardSubtitle;
@property(copy, nonatomic) NSString *appStoreURL; // @synthesize appStoreURL=_appStoreURL;
@property(nonatomic) _Bool appInfoDownloadEnabled; // @synthesize appInfoDownloadEnabled=_appInfoDownloadEnabled;
@property(copy, nonatomic) NSString *adamID; // @synthesize adamID=_adamID;
@property(retain, nonatomic) SFAppContent *appContent; // @synthesize appContent=_appContent;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007d0f8
- (void)dismiss:(int)arg1;	// IMP=0x000000010007d064
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010007cf44
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010007ce8c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010007ce08
- (void)viewUpdateAppInfo;	// IMP=0x000000010007cdbc
- (void)viewPresentStartViewControllerIfReady;	// IMP=0x000000010007cb90
- (void)viewFetchContent;	// IMP=0x000000010007ca10
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000010007c948
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007bf68
- (_Bool)_canShowWhileLocked;	// IMP=0x000000010007bf60

@end
