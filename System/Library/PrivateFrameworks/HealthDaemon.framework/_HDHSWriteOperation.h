/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HDHealthServiceCharacteristic;

@interface _HDHSWriteOperation : NSObject {

	BOOL _expectResponse;
	HDHealthServiceCharacteristic* _characteristic;
	/*^block*/id _completion;

}

@property (nonatomic,retain) HDHealthServiceCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (assign,nonatomic) BOOL expectResponse;                                         //@synthesize expectResponse=_expectResponse - In the implementation block
@property (nonatomic,copy) id completion;                                                 //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setCharacteristic:(HDHealthServiceCharacteristic *)arg1 ;
-(HDHealthServiceCharacteristic *)characteristic;
-(BOOL)expectResponse;
-(void)setExpectResponse:(BOOL)arg1 ;
@end

