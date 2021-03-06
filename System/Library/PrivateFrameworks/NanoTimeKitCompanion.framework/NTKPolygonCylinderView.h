/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKEditOptionContainerView.h>

@class _NTKPolygonCylinderTransformView, NSString;

@interface NTKPolygonCylinderView : UIView <NTKEditOptionContainerView> {

	_NTKPolygonCylinderTransformView* _transformView;
	double _rotationAngle;

}

@property (assign,nonatomic) unsigned long long numberOfSides; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long numberOfVisibleSides; 
-(id)init;
-(void)layoutSubviews;
-(void)_updateTransform;
-(void)setNumberOfSides:(unsigned long long)arg1 ;
-(void)enumerateSideViewsWithBlock:(/*^block*/id)arg1 ;
-(void)setView:(id)arg1 forSideAtIndex:(unsigned long long)arg2 ;
-(void)transitionToSideAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSides;
-(id)viewForSideAtIndex:(unsigned long long)arg1 ;
-(void)transitionToFraction:(double)arg1 fromSideAtIndex:(unsigned long long)arg2 toSideAtIndex:(unsigned long long)arg3 ;
-(unsigned long long)numberOfVisibleSides;
-(void)_setRotationAngle:(double)arg1 ;
-(double)_rotationAngleForFaceIndex:(long long)arg1 ;
-(void)_informFaceViewsOfRotation;
@end

