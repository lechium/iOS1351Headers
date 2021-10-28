/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@interface HDBodySensorLocation : HDHealthServiceCharacteristic {

	long long _sensorLocation;

}

@property (assign,nonatomic) long long sensorLocation;              //@synthesize sensorLocation=_sensorLocation - In the implementation block
+(id)uuid;
+(id)_buildWithBinaryValue:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(long long)sensorLocation;
-(void)setSensorLocation:(long long)arg1 ;
@end
