/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Proximity/Proximity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PRGetPowerStatsResponse : NSObject <NSCopying, NSSecureCoding> {

	unsigned short _numPacketsReceived;
	unsigned short _numPacketsTransmitted;
	unsigned _sleepDuration;
	unsigned _wakeDuration;
	unsigned _singleAntennaSearchDuration;
	unsigned _dualAntennaSearchDuration;
	unsigned _singleChainRxPacketDuration;
	unsigned _dualChainRxPacketDuration;
	unsigned _tripleChainRxPacketDuration;
	unsigned _dspProcessingDuration;
	unsigned _txDuration;
	unsigned _sleepCount;
	unsigned _wakeCount;

}

@property (nonatomic,readonly) unsigned sleepDuration;                            //@synthesize sleepDuration=_sleepDuration - In the implementation block
@property (nonatomic,readonly) unsigned wakeDuration;                             //@synthesize wakeDuration=_wakeDuration - In the implementation block
@property (nonatomic,readonly) unsigned singleAntennaSearchDuration;              //@synthesize singleAntennaSearchDuration=_singleAntennaSearchDuration - In the implementation block
@property (nonatomic,readonly) unsigned dualAntennaSearchDuration;                //@synthesize dualAntennaSearchDuration=_dualAntennaSearchDuration - In the implementation block
@property (nonatomic,readonly) unsigned singleChainRxPacketDuration;              //@synthesize singleChainRxPacketDuration=_singleChainRxPacketDuration - In the implementation block
@property (nonatomic,readonly) unsigned dualChainRxPacketDuration;                //@synthesize dualChainRxPacketDuration=_dualChainRxPacketDuration - In the implementation block
@property (nonatomic,readonly) unsigned tripleChainRxPacketDuration;              //@synthesize tripleChainRxPacketDuration=_tripleChainRxPacketDuration - In the implementation block
@property (nonatomic,readonly) unsigned dspProcessingDuration;                    //@synthesize dspProcessingDuration=_dspProcessingDuration - In the implementation block
@property (nonatomic,readonly) unsigned txDuration;                               //@synthesize txDuration=_txDuration - In the implementation block
@property (nonatomic,readonly) unsigned short numPacketsReceived;                 //@synthesize numPacketsReceived=_numPacketsReceived - In the implementation block
@property (nonatomic,readonly) unsigned short numPacketsTransmitted;              //@synthesize numPacketsTransmitted=_numPacketsTransmitted - In the implementation block
@property (nonatomic,readonly) unsigned sleepCount;                               //@synthesize sleepCount=_sleepCount - In the implementation block
@property (nonatomic,readonly) unsigned wakeCount;                                //@synthesize wakeCount=_wakeCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)sleepDuration;
-(id)initWithSleepDuration:(unsigned)arg1 wakeDuration:(unsigned)arg2 singleAntennaSearchDuration:(unsigned)arg3 dualAntennaSearchDuration:(unsigned)arg4 singleChainRxPacketDuration:(unsigned)arg5 dualChainRxPacketDuration:(unsigned)arg6 tripleChainRxPacketDuration:(unsigned)arg7 dspProcessingDuration:(unsigned)arg8 txDuration:(unsigned)arg9 numPacketsReceived:(unsigned short)arg10 numPacketsTransmitted:(unsigned short)arg11 sleepCount:(unsigned)arg12 wakeCount:(unsigned)arg13 ;
-(unsigned)wakeDuration;
-(unsigned)singleAntennaSearchDuration;
-(unsigned)dualAntennaSearchDuration;
-(unsigned)singleChainRxPacketDuration;
-(unsigned)dualChainRxPacketDuration;
-(unsigned)tripleChainRxPacketDuration;
-(unsigned)dspProcessingDuration;
-(unsigned)txDuration;
-(unsigned short)numPacketsReceived;
-(unsigned short)numPacketsTransmitted;
-(unsigned)sleepCount;
-(unsigned)wakeCount;
-(id)initWithGetPowerStatsResponse:(const GetPowerStatsResponse*)arg1 ;
@end

