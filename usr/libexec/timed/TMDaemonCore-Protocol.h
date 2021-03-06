//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol TMDaemonCore <NSObject>
- (void)resetTimeZone:(NSDictionary *)arg1;
- (void)setSourceTimeZone:(NSDictionary *)arg1;
- (void)setSourceTime:(NSDictionary *)arg1;
- (void)setAccurateThresholds:(_Bool)arg1;
- (void)testAndApplySystemTime;
- (_Bool)isAutomaticTimeEnabled;
- (void)addTimeProvider:(id)arg1 forKey:(NSString *)arg2;
- (id)timeProvider;
@end

