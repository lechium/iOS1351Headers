/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface APCListenerResultData : NSObject {

	unsigned long long _completionTime;

}

@property (assign,nonatomic) unsigned long long completionTime;              //@synthesize completionTime=_completionTime - In the implementation block
-(BOOL)isValid;
-(void)reset;
-(unsigned long long)completionTime;
-(id)initWithPasscodeDurationNSec:(unsigned long long)arg1 ;
-(void)setCompletionTime:(unsigned long long)arg1 ;
@end

