//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSString, SSMetricsController;

@interface AnalyticsRecordingOperation : ISOperation
{
    NSArray *_events;	// 96 = 0x60
    SSMetricsController *_metricsController;	// 104 = 0x68
    NSString *_eventTopicOverride;	// 112 = 0x70
    NSString *_appBundleId;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000001001d5794
@property(copy, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(copy, nonatomic) NSString *eventTopicOverride; // @synthesize eventTopicOverride=_eventTopicOverride;
- (void)run;	// IMP=0x00000001001d48cc
- (id)initWithMetricsEvents:(id)arg1;	// IMP=0x00000001001d484c

@end
