/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:59 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriCore/SiriCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMapTable;

@interface SiriCorePingInfo : NSObject <NSCopying> {

	NSMapTable* _outstandingPings;
	long long _pingAcknowledgedCount;
	double _avgPingTime;

}

@property (nonatomic,readonly) long long pingAcknowledgedCount;              //@synthesize pingAcknowledgedCount=_pingAcknowledgedCount - In the implementation block
@property (nonatomic,readonly) double avgPingTime;                           //@synthesize avgPingTime=_avgPingTime - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)markPingSentWithIndex:(long long)arg1 ;
-(void)markPongReceivedWithIndex:(long long)arg1 ;
-(unsigned long long)numberOfUnacknowledgedPings;
-(long long)pingAcknowledgedCount;
-(double)avgPingTime;
@end
