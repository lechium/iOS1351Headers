/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/PDAnimationShapeTarget.h>

@interface PDAnimationChartTarget : PDAnimationShapeTarget {

	BOOL mHasCatagoryIndex;
	int mCatagoryIndex;
	BOOL mHasSeriesIndex;
	int mSeriesIndex;
	BOOL mHasBuildStep;
	int mBuildStep;
	int mChartSubElementType;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)seriesIndex;
-(void)setSeriesIndex:(int)arg1 ;
-(BOOL)hasSeriesIndex;
-(void)setChartSubElementType:(int)arg1 ;
-(int)chartSubElementType;
-(int)catagoryIndex;
-(int)buildStep;
-(BOOL)hasCatagoryIndex;
-(void)setCatagoryIndex:(int)arg1 ;
-(BOOL)hasBuildStep;
-(void)setBuildStep:(int)arg1 ;
@end

