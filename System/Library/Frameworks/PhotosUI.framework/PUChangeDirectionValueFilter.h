/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUValueFilter.h>

@interface PUChangeDirectionValueFilter : PUValueFilter {

	double _threshold;
	double _minimumChangeValue;

}

@property (assign,nonatomic) double minimumChangeValue;              //@synthesize minimumChangeValue=_minimumChangeValue - In the implementation block
-(void)setMinimumChangeValue:(double)arg1 ;
-(double)updatedValue:(double)arg1 withTargetValue:(double)arg2 ;
-(double)minimumChangeValue;
@end

