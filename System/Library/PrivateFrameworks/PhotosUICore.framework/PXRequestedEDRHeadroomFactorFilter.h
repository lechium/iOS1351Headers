/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXNumberFilter.h>

@interface PXRequestedEDRHeadroomFactorFilter : PXNumberFilter {

	double _sustainDuration;
	double _highValue;
	double _lastDecreaseTime;

}

@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (assign,nonatomic) double highValue;                           //@synthesize highValue=_highValue - In the implementation block
@property (assign,nonatomic) double lastDecreaseTime;                    //@synthesize lastDecreaseTime=_lastDecreaseTime - In the implementation block
@property (assign,nonatomic) double sustainDuration;                     //@synthesize sustainDuration=_sustainDuration - In the implementation block
-(BOOL)isPaused;
-(void)setInput:(double)arg1 ;
-(id)initWithInput:(double)arg1 ;
-(double)updatedOutput;
-(double)highValue;
-(double)sustainDuration;
-(void)setSustainDuration:(double)arg1 ;
-(void)setHighValue:(double)arg1 ;
-(double)lastDecreaseTime;
-(void)setLastDecreaseTime:(double)arg1 ;
@end

