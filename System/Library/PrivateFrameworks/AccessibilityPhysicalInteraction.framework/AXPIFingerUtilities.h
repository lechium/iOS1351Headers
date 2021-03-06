/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
@interface AXPIFingerUtilities : NSObject
+(BOOL)laserEnabled;
+(id)defaultLocationsForNumberOfFingers:(unsigned long long)arg1 aroundPoint:(CGPoint)arg2 withinBounds:(CGRect)arg3 ;
+(id)_points:(id)arg1 adjustedForBounds:(CGRect)arg2 ;
+(id)defaultLocationsForNumberOfFingers:(unsigned long long)arg1 aroundPoint:(CGPoint)arg2 ;
+(id)defaultPinchLocationsAroundPoint:(CGPoint)arg1 withinBounds:(CGRect)arg2 ;
+(void)updateFirstLocation:(CGPoint*)arg1 secondLocation:(CGPoint*)arg2 forPinchWithRadiusDelta:(double)arg3 angleDelta:(double)arg4 ;
+(id)fingerModelsForPointStrings:(id)arg1 ;
+(id)pointStringsForFingerModels:(id)arg1 ;
+(unsigned long long)fingerShapeForCorner:(unsigned long long)arg1 ;
+(id)pointerFiltersForLuminanceLevel:(unsigned long long)arg1 ;
+(id)pointerAnimationSettings;
@end

