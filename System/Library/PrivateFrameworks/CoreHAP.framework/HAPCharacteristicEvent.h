/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSString, NSNumber, NSDate;

@interface HAPCharacteristicEvent : HMFObject {

	NSString* _serverIdentifier;
	NSNumber* _accessoryInstanceID;
	NSNumber* _serviceInstanceID;
	NSNumber* _characteristicInstanceID;
	id _value;
	NSDate* _updateTime;
	NSNumber* _stateNumber;

}

@property (nonatomic,copy,readonly) NSString * serverIdentifier;                      //@synthesize serverIdentifier=_serverIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * accessoryInstanceID;                   //@synthesize accessoryInstanceID=_accessoryInstanceID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * serviceInstanceID;                     //@synthesize serviceInstanceID=_serviceInstanceID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * characteristicInstanceID;              //@synthesize characteristicInstanceID=_characteristicInstanceID - In the implementation block
@property (nonatomic,copy,readonly) id value;                                         //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDate * updateTime;                                   //@synthesize updateTime=_updateTime - In the implementation block
@property (nonatomic,readonly) NSNumber * stateNumber;                                //@synthesize stateNumber=_stateNumber - In the implementation block
+(id)eventWithCharacteristic:(id)arg1 ;
-(id)init;
-(id)value;
-(NSDate *)updateTime;
-(NSString *)serverIdentifier;
-(id)initWithCharacteristic:(id)arg1 ;
-(NSNumber *)stateNumber;
-(NSNumber *)serviceInstanceID;
-(NSNumber *)accessoryInstanceID;
-(NSNumber *)characteristicInstanceID;
@end

