/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADImageFillTechnique.h>

@interface OADTileTechnique : OADImageFillTechnique {

	float mOffsetX;
	BOOL mIsOffsetXOverridden;
	float mOffsetY;
	BOOL mIsOffsetYOverridden;
	float mScaleX;
	BOOL mIsScaleXOverridden;
	float mScaleY;
	BOOL mIsScaleYOverridden;
	int mFlipMode;
	BOOL mIsFlipModeOverridden;
	int mAlignment;
	BOOL mIsAlignmentOverridden;

}
+(id)defaultProperties;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)alignment;
-(void)setAlignment:(int)arg1 ;
-(id)initWithDefaults;
-(float)offsetX;
-(float)offsetY;
-(void)setOffsetX:(float)arg1 ;
-(void)setFlipMode:(int)arg1 ;
-(void)setOffsetY:(float)arg1 ;
-(void)setScaleX:(float)arg1 ;
-(void)setScaleY:(float)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)isFlipModeOverridden;
-(int)flipMode;
-(BOOL)isOffsetXOverridden;
-(BOOL)isOffsetYOverridden;
-(BOOL)isScaleXOverridden;
-(BOOL)isScaleYOverridden;
-(BOOL)isAlignmentOverridden;
-(float)scaleX;
-(float)scaleY;
@end

