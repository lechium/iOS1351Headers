/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface EFLinearFunction : NSObject {

	double _slope;
	double _intercept;

}

@property (assign,nonatomic) double slope;                  //@synthesize slope=_slope - In the implementation block
@property (assign,nonatomic) double intercept;              //@synthesize intercept=_intercept - In the implementation block
-(double)intercept;
-(double)slope;
-(id)initWithSlope:(double)arg1 intercept:(double)arg2 ;
-(id)initWithLineThroughPoints:(id)arg1 ;
-(double)evaluateX:(double)arg1 ;
-(double)evaluateReverse:(double)arg1 ;
-(void)setSlope:(double)arg1 ;
-(void)setIntercept:(double)arg1 ;
@end

