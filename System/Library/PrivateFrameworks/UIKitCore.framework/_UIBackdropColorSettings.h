/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _UIBackdropViewSettings, UIColor;

@interface _UIBackdropColorSettings : NSObject {

	BOOL _hasObservedValues;
	_UIBackdropViewSettings* _parentSettings;

}

@property (assign,nonatomic) _UIBackdropViewSettings * parentSettings;              //@synthesize parentSettings=_parentSettings - In the implementation block
@property (assign,nonatomic) BOOL hasObservedValues;                                //@synthesize hasObservedValues=_hasObservedValues - In the implementation block
@property (assign,nonatomic) double averageHue; 
@property (assign,nonatomic) double averageSaturation; 
@property (assign,nonatomic) double averageBrightness; 
@property (assign,nonatomic) double contrast; 
@property (nonatomic,readonly) UIColor * color; 
-(UIColor *)color;
-(double)contrast;
-(void)setContrast:(double)arg1 ;
-(void)setDefaultValues;
-(double)averageBrightness;
-(double)averageSaturation;
-(void)setParentSettings:(_UIBackdropViewSettings *)arg1 ;
-(void)setValuesFromModel:(id)arg1 ;
-(void)setAverageHue:(double)arg1 ;
-(void)setAverageSaturation:(double)arg1 ;
-(void)setAverageBrightness:(double)arg1 ;
-(double)averageHue;
-(BOOL)applyCABackdropLayerStatistics:(id)arg1 ;
-(_UIBackdropViewSettings *)parentSettings;
-(BOOL)hasObservedValues;
-(void)setHasObservedValues:(BOOL)arg1 ;
@end
