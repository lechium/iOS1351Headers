/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGGeneratedSublayoutComposition.h>

@class PXYearsLayoutGenerator, PXYearsLayoutMetrics;

@interface PXYearsSublayoutComposition : PXGGeneratedSublayoutComposition {

	PXYearsLayoutGenerator* _layoutGenerator;
	PXYearsLayoutMetrics* _metrics;

}

@property (nonatomic,copy) PXYearsLayoutMetrics * metrics;                      //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) long long presentedNumberOfColumns; 
-(PXYearsLayoutMetrics *)metrics;
-(void)setMetrics:(PXYearsLayoutMetrics *)arg1 ;
-(id)configuredLayoutGenerator;
-(long long)presentedNumberOfColumns;
-(UIEdgeInsets)sublayoutInsetsForStylableType:(long long)arg1 ;
@end

