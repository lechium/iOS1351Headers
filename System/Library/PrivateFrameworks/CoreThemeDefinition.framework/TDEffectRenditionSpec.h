/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSNumber, NSOrderedSet, TDEffectComponent;

@interface TDEffectRenditionSpec : TDRenditionSpec

@property (nonatomic,retain) NSNumber * effectScale; 
@property (nonatomic,retain) NSOrderedSet * components; 
@property (nonatomic,retain,readonly) TDEffectComponent * CUIShapeEffectShapeOpacity; 
@property (nonatomic,retain,readonly) TDEffectComponent * CUIShapeEffectOutputOpacity; 
+(id)keyPathsForValuesAffectingCUIShapeEffectShapeOpacity;
+(id)keyPathsForValuesAffectingCUIShapeEffectOutputOpacity;
-(id)effectPreset;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(BOOL)canBePackedWithDocument:(id)arg1 ;
-(void)setComponentsFromEffectPreset:(id)arg1 withDocument:(id)arg2 ;
-(id)componentOfType:(unsigned)arg1 ;
-(void)replaceComponentsWithComponentsFromEffectRendition:(id)arg1 withDocument:(id)arg2 ;
-(TDEffectComponent *)CUIShapeEffectShapeOpacity;
-(TDEffectComponent *)CUIShapeEffectOutputOpacity;
@end

