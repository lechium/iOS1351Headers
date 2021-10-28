/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PXStatsCalculator : NSObject {

	double _sum;
	double _squareSum;
	long long _count;
	double _min;
	double _max;

}

@property (nonatomic,readonly) long long count;                       //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) double mean; 
@property (nonatomic,readonly) double standardDeviation; 
@property (nonatomic,readonly) double min;                            //@synthesize min=_min - In the implementation block
@property (nonatomic,readonly) double max;                            //@synthesize max=_max - In the implementation block
-(long long)count;
-(double)max;
-(double)min;
-(void)addValue:(double)arg1 ;
-(double)standardDeviation;
-(double)mean;
@end
