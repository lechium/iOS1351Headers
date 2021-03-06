/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISEGestureFeatureSettings.h>

@protocol _UISEGestureFeatureSettings
@property (nonatomic,readonly) double bottomEdgeAngleWindow; 
@property (nonatomic,readonly) double bottomEdgeRegionSize; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) double cornerAngleWindow; 
@property (nonatomic,readonly) double edgeAngleWindow; 
@property (nonatomic,readonly) double edgeAngleWindowDecayTime; 
@property (nonatomic,readonly) double edgeRegionSize; 
@property (nonatomic,readonly) double hysteresis; 
@property (nonatomic,readonly) unsigned long long interfaceBottomEdge; 
@property (nonatomic,readonly) unsigned long long minimumNumberOfSubfeatures; 
@property (nonatomic,readonly) double maximumSwipeDuration; 
@property (nonatomic,readonly) unsigned long long targetEdges; 
@required
-(CGRect)bounds;
-(unsigned long long)targetEdges;
-(unsigned long long)interfaceBottomEdge;
-(double)bottomEdgeRegionSize;
-(double)edgeRegionSize;
-(double)hysteresis;
-(double)bottomEdgeAngleWindow;
-(double)cornerAngleWindow;
-(double)edgeAngleWindow;
-(double)edgeAngleWindowDecayTime;
-(unsigned long long)minimumNumberOfSubfeatures;
-(double)maximumSwipeDuration;

@end


@interface _UISEGestureFeatureSettings : NSObject <_UISEGestureFeatureSettings> {

	double _bottomEdgeAngleWindow;
	double _bottomEdgeRegionSize;
	double _cornerAngleWindow;
	double _edgeAngleWindow;
	double _edgeAngleWindowDecayTime;
	double _edgeRegionSize;
	double _hysteresis;
	unsigned long long _interfaceBottomEdge;
	unsigned long long _minimumNumberOfSubfeatures;
	double _maximumSwipeDuration;
	unsigned long long _targetEdges;
	CGRect _bounds;

}

@property (assign,nonatomic) double bottomEdgeAngleWindow;                               //@synthesize bottomEdgeAngleWindow=_bottomEdgeAngleWindow - In the implementation block
@property (assign,nonatomic) double bottomEdgeRegionSize;                                //@synthesize bottomEdgeRegionSize=_bottomEdgeRegionSize - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                              //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) double cornerAngleWindow;                                   //@synthesize cornerAngleWindow=_cornerAngleWindow - In the implementation block
@property (assign,nonatomic) double edgeAngleWindow;                                     //@synthesize edgeAngleWindow=_edgeAngleWindow - In the implementation block
@property (assign,nonatomic) double edgeAngleWindowDecayTime;                            //@synthesize edgeAngleWindowDecayTime=_edgeAngleWindowDecayTime - In the implementation block
@property (assign,nonatomic) double edgeRegionSize;                                      //@synthesize edgeRegionSize=_edgeRegionSize - In the implementation block
@property (assign,nonatomic) double hysteresis;                                          //@synthesize hysteresis=_hysteresis - In the implementation block
@property (assign,nonatomic) unsigned long long interfaceBottomEdge;                     //@synthesize interfaceBottomEdge=_interfaceBottomEdge - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfSubfeatures;              //@synthesize minimumNumberOfSubfeatures=_minimumNumberOfSubfeatures - In the implementation block
@property (assign,nonatomic) double maximumSwipeDuration;                                //@synthesize maximumSwipeDuration=_maximumSwipeDuration - In the implementation block
@property (assign,nonatomic) unsigned long long targetEdges;                             //@synthesize targetEdges=_targetEdges - In the implementation block
-(id)init;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(unsigned long long)targetEdges;
-(unsigned long long)interfaceBottomEdge;
-(double)bottomEdgeRegionSize;
-(double)edgeRegionSize;
-(double)hysteresis;
-(double)bottomEdgeAngleWindow;
-(double)cornerAngleWindow;
-(double)edgeAngleWindow;
-(double)edgeAngleWindowDecayTime;
-(unsigned long long)minimumNumberOfSubfeatures;
-(double)maximumSwipeDuration;
-(void)setBottomEdgeAngleWindow:(double)arg1 ;
-(void)setBottomEdgeRegionSize:(double)arg1 ;
-(void)setCornerAngleWindow:(double)arg1 ;
-(void)setEdgeAngleWindow:(double)arg1 ;
-(void)setEdgeAngleWindowDecayTime:(double)arg1 ;
-(void)setEdgeRegionSize:(double)arg1 ;
-(void)setHysteresis:(double)arg1 ;
-(void)setInterfaceBottomEdge:(unsigned long long)arg1 ;
-(void)setMinimumNumberOfSubfeatures:(unsigned long long)arg1 ;
-(void)setMaximumSwipeDuration:(double)arg1 ;
-(void)setTargetEdges:(unsigned long long)arg1 ;
@end

