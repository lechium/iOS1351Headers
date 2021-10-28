/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol HomeKitEventRemoteLoginMetricProtocol;
@class NSString, HMDLogEvent;

@interface HMDRemoteLoginInitiatorSession : HMFObject {

	NSString* _sessionID;
	HMDLogEvent*<HomeKitEventRemoteLoginMetricProtocol> _metric;

}

@property (nonatomic,readonly) NSString * sessionID;                                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) HMDLogEvent*<HomeKitEventRemoteLoginMetricProtocol> metric;              //@synthesize metric=_metric - In the implementation block
-(void)dealloc;
-(id)description;
-(HMDLogEvent*<HomeKitEventRemoteLoginMetricProtocol>)metric;
-(void)setMetric:(HMDLogEvent*<HomeKitEventRemoteLoginMetricProtocol>)arg1 ;
-(NSString *)sessionID;
-(id)initWithSessionID:(id)arg1 ;
@end
