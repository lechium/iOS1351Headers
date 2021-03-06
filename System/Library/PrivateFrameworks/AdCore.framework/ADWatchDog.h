/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface ADWatchDog : NSObject {

	NSString* _reason;
	unsigned long long _delayTime;

}

@property (nonatomic,retain) NSString * reason;                         //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) unsigned long long delayTime;              //@synthesize delayTime=_delayTime - In the implementation block
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(void)setDelayTime:(unsigned long long)arg1 ;
-(unsigned long long)delayTime;
-(id)initWithReason:(id)arg1 andDelay:(unsigned long long)arg2 ;
-(void)updateReason:(id)arg1 ;
@end

