/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSDictionary, CUIPSDGradient;

@interface CUIThemeSchemaRendition : CUIThemeRendition {

	NSDictionary* cuiInfo;
	unsigned long long _nimages;
	CGImage* _image[9];
	CGRect _layoutRects[9];
	CGSize _intrinsicSize;
	CGRect _elementRect;
	long long _columnSlices;
	long long _rowSlices;
	SCD_Struct_CS11 _contentInsets;
	CUIPSDGradient* _gradient;

}

@property (nonatomic,readonly) unsigned long long numberOfSlices; 
@property (nonatomic,readonly) CGRect* sliceRects; 
@property (nonatomic,readonly) CUIPSDGradient * gradient; 
-(void)dealloc;
-(id)description;
-(unsigned short)identifier;
-(unsigned short)size;
-(unsigned short)value;
-(unsigned short)state;
-(double)scale;
-(unsigned short)direction;
-(unsigned short)previousState;
-(unsigned short)appearance;
-(unsigned short)layer;
-(SCD_Struct_CS11)contentInsets;
-(id)stringForState:(unsigned short)arg1 ;
-(CUIPSDGradient *)gradient;
-(id)slices;
-(unsigned short)previousValue;
-(unsigned short)drawingLayer;
-(unsigned long long)numberOfSlices;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(id)referenceImage;
-(unsigned short)dimension1;
-(unsigned short)presentationState;
-(unsigned short)dimension2;
-(unsigned short)keyScale;
-(id)stringForValue:(unsigned short)arg1 ;
-(unsigned short)look;
-(CGRect*)sliceRects;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(CGRect)alignmentRectangle;
-(CGRect)edgeInsets:(BOOL)arg1 ;
-(id)coreUIOptions;
-(id)defaultTemplateName;
-(long long)columnSlices;
-(long long)rowSlices;
-(CGPoint)renditionCoordinatesForPartFeatures:(long long)arg1 ;
-(unsigned short)localization;
-(id)typeLocalizedString;
-(id)stateLocalizedString;
-(id)previousStateLocalizedString;
-(id)directionLocalizedString;
-(id)valueLocalizedString;
-(id)previousValueLocalizedString;
-(id)sizeLocalizedString;
-(id)presentationStateLocalizedString;
-(id)dimension1LocalizedString;
-(id)dimension2LocalizedString;
-(id)drawingLayerLocalizedString;
-(id)lookLocalizedString;
-(id)scaleLocalizedString;
@end

