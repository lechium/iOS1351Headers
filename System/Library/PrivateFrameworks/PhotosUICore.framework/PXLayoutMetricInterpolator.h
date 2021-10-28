/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableArray, NSValue;

@interface PXLayoutMetricInterpolator : NSObject {

	SCD_Struct_PX24 _needsUpdateFlags;
	NSMutableArray* __referenceValuesByMetrics;
	double __cachedMetric;
	NSValue* __cachedValue;

}

@property (nonatomic,readonly) NSMutableArray * _referenceValuesByMetrics;                //@synthesize _referenceValuesByMetrics=__referenceValuesByMetrics - In the implementation block
@property (assign,setter=_setCachedMetric:,nonatomic) double _cachedMetric;               //@synthesize _cachedMetric=__cachedMetric - In the implementation block
@property (setter=_setCachedValue:,nonatomic,retain) NSValue * _cachedValue;              //@synthesize _cachedValue=__cachedValue - In the implementation block
+(id)memoriesFeedInteritemSpacingInterpolator;
+(id)memoriesFeedPortraitEdgeInsetsInterpolator;
+(id)memoriesFeedLandscapeEdgeInsetsInterpolator;
+(id)memoriesDetailsEdgeInsetsInterpolator;
+(id)memoriesItemWidthInterpolator;
+(id)albumsGridEdgeInsetsInterpolator;
+(id)albumsGridItemWidthInterpolator;
+(id)legacyLayoutMarginWidthInterpolator;
+(id)layoutMarginWidthInterpolator;
+(id)gadgetColumnSpacingSpanSingleSetAInterpolator;
+(id)gadgetColumnWidthSpanSingleSetAInterpolator;
+(id)gadgetColumnSpacingSpanDoubleSetAInterpolator;
+(id)gadgetColumnWidthSpanDoubleSetAInterpolator;
+(id)gadgetColumnSpacingSpanDoubleSetBInterpolator;
+(id)gadgetColumnWidthSpanDoubleSetBInterpolator;
+(id)allLayoutMetricConfigurationSizes;
+(long long)photosGridSizeSubclassForScreenSize:(CGSize)arg1 ;
+(unsigned long long)photosGridLayoutColumnsForWidth:(double)arg1 ;
+(CGSize)zoomableGridLayoutSmallItemSizeForWidth:(double)arg1 ;
+(CGSize)bestItemSizeForAvailableWidth:(double)arg1 screenScale:(double)arg2 columns:(unsigned long long)arg3 bestSpacing:(double*)arg4 bestInset:(double*)arg5 ;
-(id)init;
-(void)_setNeedsUpdate;
-(void)_invalidateReferenceValuesByMetricsOrder;
-(void)_updateReferenceValuesByMetricsOrderIfNeeded;
-(void)setReferenceValue:(double)arg1 forMetric:(double)arg2 ;
-(void)_getReferenceValueForMetric:(double)arg1 exactMatch:(id*)arg2 closestBeforeMatch:(id*)arg3 closestAfterMatch:(id*)arg4 ;
-(id)_valueForMetric:(double)arg1 fromInterpolationBetweenValue:(id)arg2 secondValue:(id)arg3 ;
-(double)valueForMetric:(double)arg1 ;
-(NSMutableArray *)_referenceValuesByMetrics;
-(double)_cachedMetric;
-(void)_setCachedMetric:(double)arg1 ;
-(NSValue *)_cachedValue;
-(void)_setCachedValue:(id)arg1 ;
@end
