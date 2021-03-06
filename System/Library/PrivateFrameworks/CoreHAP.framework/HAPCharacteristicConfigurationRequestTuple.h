/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic;

@interface HAPCharacteristicConfigurationRequestTuple : HMFObject {

	BOOL _broadcastEnable;
	HAPCharacteristic* _characteristic;
	unsigned long long _broadcastInterval;

}

@property (nonatomic,retain) HAPCharacteristic * characteristic;                //@synthesize characteristic=_characteristic - In the implementation block
@property (assign,nonatomic) BOOL broadcastEnable;                              //@synthesize broadcastEnable=_broadcastEnable - In the implementation block
@property (assign,nonatomic) unsigned long long broadcastInterval;              //@synthesize broadcastInterval=_broadcastInterval - In the implementation block
+(id)configurationTupleForCharacteristic:(id)arg1 broadcastEnable:(BOOL)arg2 broadcastInterval:(unsigned long long)arg3 ;
-(void)setCharacteristic:(HAPCharacteristic *)arg1 ;
-(HAPCharacteristic *)characteristic;
-(BOOL)broadcastEnable;
-(unsigned long long)broadcastInterval;
-(void)setBroadcastEnable:(BOOL)arg1 ;
-(void)setBroadcastInterval:(unsigned long long)arg1 ;
@end

