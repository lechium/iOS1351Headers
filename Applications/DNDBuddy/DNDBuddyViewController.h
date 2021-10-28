//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class CARAutomaticDNDStatus, DNDBuddyContainer;

@interface DNDBuddyViewController : OBWelcomeController
{
    _Bool _initialPresentation;	// 8 = 0x8
    DNDBuddyContainer *_container;	// 16 = 0x10
    CARAutomaticDNDStatus *_DNDPreferences;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000056b4
@property(nonatomic) _Bool initialPresentation; // @synthesize initialPresentation=_initialPresentation;
@property(retain, nonatomic) CARAutomaticDNDStatus *DNDPreferences; // @synthesize DNDPreferences=_DNDPreferences;
@property(readonly, nonatomic) __weak DNDBuddyContainer *container; // @synthesize container=_container;
- (void)laterButtonTapped:(id)arg1;	// IMP=0x00000001000054d4
- (void)useButtonTapped:(id)arg1;	// IMP=0x0000000100005214
- (void)learnMoreVCComplete:(id)arg1;	// IMP=0x0000000100005200
- (void)learnMoreButtonTapped:(id)arg1;	// IMP=0x00000001000050b8
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000001000050b0
- (_Bool)shouldAutorotate;	// IMP=0x00000001000050a8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100005068
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100004fd4
- (void)viewDidLoad;	// IMP=0x0000000100004c8c
- (id)initWithContainer:(id)arg1 initialPresentation:(_Bool)arg2;	// IMP=0x0000000100004b78

@end
