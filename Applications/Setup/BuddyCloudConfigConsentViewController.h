//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BuddySimpleTCController.h"

@class BuddyCloudConfigController, NSArray, NSData;

@interface BuddyCloudConfigConsentViewController : BuddySimpleTCController
{
    BuddyCloudConfigController *_configController;	// 48 = 0x30
    NSData *_profileData;	// 56 = 0x38
    NSArray *_profileWarnings;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000f9bbc
@property(retain, nonatomic) NSArray *profileWarnings; // @synthesize profileWarnings=_profileWarnings;
@property(retain, nonatomic) NSData *profileData; // @synthesize profileData=_profileData;
@property(nonatomic) __weak BuddyCloudConfigController *configController; // @synthesize configController=_configController;
- (void)agree:(id)arg1;	// IMP=0x00000001000f9a98
- (void)disagree:(id)arg1;	// IMP=0x00000001000f9a50
- (id)titleString;	// IMP=0x00000001000f99dc
- (id)tcContent;	// IMP=0x00000001000f9740
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000f96d0

@end
