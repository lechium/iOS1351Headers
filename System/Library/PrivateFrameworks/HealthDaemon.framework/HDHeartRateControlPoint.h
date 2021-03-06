/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@interface HDHeartRateControlPoint : HDHealthServiceCharacteristic {

	unsigned char _operation;

}

@property (assign,nonatomic) unsigned char operation;              //@synthesize operation=_operation - In the implementation block
+(id)uuid;
-(id)description;
-(unsigned char)operation;
-(void)setOperation:(unsigned char)arg1 ;
-(id)initWithOperation:(unsigned char)arg1 ;
-(id)getBinaryValueWithError:(id*)arg1 ;
@end

