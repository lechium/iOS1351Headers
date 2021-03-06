/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/WDRunWithCharacterProperties.h>

@class OADDrawable;

@interface WDOfficeArt : WDRunWithCharacterProperties {

	OADDrawable* mDrawable;
	BOOL mFloating;

}
+(int)textBoxTextTypeForRegularTextType:(int)arg1 ;
-(id)description;
-(BOOL)isFloating;
-(void)setFloating:(BOOL)arg1 ;
-(id)imageName;
-(id)imageData;
-(id)initWithParagraph:(id)arg1 ;
-(id)drawable;
-(BOOL)isDrawableOverridden;
-(int)runType;
-(void)checkForFloating:(id)arg1 ;
-(void)setDrawable:(id)arg1 ;
-(void)setTextType:(int)arg1 recursivelyToDrawable:(id)arg2 ;
-(id)overrideDrawable;
-(void)clearDrawable;
-(id)imageBlipRef;
-(void)setImageBlipRef:(id)arg1 ;
-(void)propagateTextTypeToDrawables;
@end

