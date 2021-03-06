//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CARApplicationInfo, NSDate, NSString;

@interface _CARAnalyticsAppInfo : NSObject
{
    _Bool _wasVisibleBeforeCarScreen;	// 8 = 0x8
    _Bool _wasVisibleInDashboardBeforeCarScreen;	// 9 = 0x9
    CARApplicationInfo *_appInfo;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    NSDate *_lastVisibilityEventTime;	// 32 = 0x20
    double _visibilityTime;	// 40 = 0x28
    NSDate *_lastDashboardVisibilityEventTime;	// 48 = 0x30
    double _dashboardVisibilityTime;	// 56 = 0x38
    NSDate *_lastPlaybackStartTime;	// 64 = 0x40
    double _playbackTime;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010002f06c
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property(retain, nonatomic) NSDate *lastPlaybackStartTime; // @synthesize lastPlaybackStartTime=_lastPlaybackStartTime;
@property(nonatomic) _Bool wasVisibleInDashboardBeforeCarScreen; // @synthesize wasVisibleInDashboardBeforeCarScreen=_wasVisibleInDashboardBeforeCarScreen;
@property(nonatomic) _Bool wasVisibleBeforeCarScreen; // @synthesize wasVisibleBeforeCarScreen=_wasVisibleBeforeCarScreen;
@property(nonatomic) double dashboardVisibilityTime; // @synthesize dashboardVisibilityTime=_dashboardVisibilityTime;
@property(retain, nonatomic) NSDate *lastDashboardVisibilityEventTime; // @synthesize lastDashboardVisibilityEventTime=_lastDashboardVisibilityEventTime;
@property(nonatomic) double visibilityTime; // @synthesize visibilityTime=_visibilityTime;
@property(retain, nonatomic) NSDate *lastVisibilityEventTime; // @synthesize lastVisibilityEventTime=_lastVisibilityEventTime;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) CARApplicationInfo *appInfo; // @synthesize appInfo=_appInfo;
- (void)stopCountingDashboardVisibleTime;	// IMP=0x000000010002eee0
- (void)stopCountingVisibleTime;	// IMP=0x000000010002edf0
- (void)startCountingDashboardVisibleTime;	// IMP=0x000000010002ed9c
- (void)startCountingVisibleTime;	// IMP=0x000000010002ed48
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x000000010002ecc8
- (id)initWithAppInfo:(id)arg1;	// IMP=0x000000010002ec40

@end

