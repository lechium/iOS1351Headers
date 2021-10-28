//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TPSAnalyticsController : NSObject
{
    _Bool _launchedKeyTrack;	// 8 = 0x8
    _Bool _shouldShowAggregatedLogs;	// 9 = 0x9
    NSString *_currentViewType;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010000b3d0
- (void).cxx_destruct;	// IMP=0x000000010000bd60
@property(retain, nonatomic) NSString *currentViewType; // @synthesize currentViewType=_currentViewType;
- (void)increaseCountForKeyWithFormat:(id)arg1;	// IMP=0x000000010000bc00
- (void)launchedWithTipID:(id)arg1 collectionID:(id)arg2 type:(id)arg3;	// IMP=0x000000010000bad4
- (void)appSessionLaunchTrackingDelay;	// IMP=0x000000010000ba78
- (void)appSessionEnded;	// IMP=0x000000010000ba3c
- (void)appSessionStarted;	// IMP=0x000000010000b9dc
- (void)firstLaunchWithUserType:(id)arg1;	// IMP=0x000000010000b980
- (void)sharedTipID:(id)arg1 activityType:(id)arg2;	// IMP=0x000000010000b8b8
- (void)viewedWithTipID:(id)arg1 collectionID:(id)arg2 type:(id)arg3;	// IMP=0x000000010000b7b4
- (void)viewedWithTipID:(id)arg1 collectionID:(id)arg2;	// IMP=0x000000010000b760
- (void)notificationPostedErrorWithTipID:(id)arg1 collectionID:(id)arg2 error:(id)arg3;	// IMP=0x000000010000b668
- (void)notificationPostedWithTipID:(id)arg1 collectionID:(id)arg2;	// IMP=0x000000010000b5a0
- (void)learnMoreWithTipID:(id)arg1;	// IMP=0x000000010000b544
- (id)analyticsNormalizedValueForParameter:(id)arg1;	// IMP=0x000000010000b4ec
- (void)resetCurrentViewType;	// IMP=0x000000010000b4d4
- (id)init;	// IMP=0x000000010000b43c

@end
