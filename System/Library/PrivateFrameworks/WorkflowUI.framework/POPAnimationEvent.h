/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface POPAnimationEvent : NSObject {

	unsigned long long _type;
	double _time;
	NSString* _animationDescription;

}

@property (nonatomic,copy) NSString * animationDescription;              //@synthesize animationDescription=_animationDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double time;                              //@synthesize time=_time - In the implementation block
-(id)description;
-(unsigned long long)type;
-(double)time;
-(id)initWithType:(unsigned long long)arg1 time:(double)arg2 ;
-(void)setAnimationDescription:(NSString *)arg1 ;
-(void)_appendDescription:(id)arg1 ;
-(NSString *)animationDescription;
@end
