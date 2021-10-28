//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, PDScheduledActivityCriteria;
@protocol NSObject><NSSecureCoding;

@protocol PDScheduledActivityClient <NSObject>
- (void)performScheduledActivityWithIdentifier:(NSString *)arg1 activityCriteria:(PDScheduledActivityCriteria *)arg2;

@optional
- (void)performScheduledActivityWithIdentifier:(NSString *)arg1 activityCriteria:(PDScheduledActivityCriteria *)arg2 activityContext:(id <NSObject><NSSecureCoding>)arg3;
@end
