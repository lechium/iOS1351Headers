/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKBarSeries.h>

@class NSArray;

@interface HKStackedBarSeries : HKBarSeries {

	NSArray* _selectedFillStyles;
	NSArray* _unselectedFillStyles;

}

@property (nonatomic,copy) NSArray * selectedFillStyles;                //@synthesize selectedFillStyles=_selectedFillStyles - In the implementation block
@property (nonatomic,copy) NSArray * unselectedFillStyles;              //@synthesize unselectedFillStyles=_unselectedFillStyles - In the implementation block
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK9)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(void)_drawPaths:(id)arg1 withFillStyles:(id)arg2 strokeStyle:(id)arg3 axisRect:(CGRect)arg4 context:(CGContextRef)arg5 ;
-(void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(CGAffineTransform)arg3 context:(CGContextRef)arg4 axisRect:(CGRect)arg5 ;
-(NSArray *)unselectedFillStyles;
-(NSArray *)selectedFillStyles;
-(void)setUnselectedFillStyles:(NSArray *)arg1 ;
-(void)setSelectedFillStyles:(NSArray *)arg1 ;
@end
