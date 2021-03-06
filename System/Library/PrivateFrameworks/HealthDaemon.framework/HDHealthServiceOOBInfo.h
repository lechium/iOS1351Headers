/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface HDHealthServiceOOBInfo : NSObject {

	NSData* _oobData;
	NSData* _randomValue;
	NSData* _confirmationValue;
	NSData* _btAddress;

}

@property (nonatomic,readonly) NSData * oobData;                        //@synthesize oobData=_oobData - In the implementation block
@property (nonatomic,readonly) NSData * randomValue;                    //@synthesize randomValue=_randomValue - In the implementation block
@property (nonatomic,readonly) NSData * confirmationValue;              //@synthesize confirmationValue=_confirmationValue - In the implementation block
@property (nonatomic,readonly) NSData * btAddress;                      //@synthesize btAddress=_btAddress - In the implementation block
+(id)reverseData:(id)arg1 ;
-(id)description;
-(NSData *)btAddress;
-(NSData *)oobData;
-(NSData *)randomValue;
-(NSData *)confirmationValue;
-(id)initWithOOBData:(id)arg1 btAddress:(id)arg2 ;
@end

