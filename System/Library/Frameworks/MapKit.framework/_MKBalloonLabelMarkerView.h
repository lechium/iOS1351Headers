/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/_MKLabelMarkerView.h>
#import <libobjc.A.dylib/_MKBalloonCalloutViewConfiguring.h>

@class UIColor, UIImage, UIView, NSString;

@interface _MKBalloonLabelMarkerView : _MKLabelMarkerView <_MKBalloonCalloutViewConfiguring> {

	UIView* _anchorDotView;
	BOOL _needsToResolveBalloonAttributes;
	long long _balloonCalloutStyle;
	BOOL _balloonCalloutShouldOriginateFromSmallSize;
	UIColor* _balloonFillColor;
	UIColor* _balloonStrokeColor;
	UIImage* _balloonImage;
	UIView* _balloonContentView;
	double _smallBalloonScaleFactor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_balloonCalloutStyle,nonatomic,readonly) long long balloonCalloutStyle; 
@property (getter=_balloonTintColor,nonatomic,readonly) UIColor * balloonTintColor; 
@property (getter=_balloonStrokeColor,nonatomic,readonly) UIColor * balloonStrokeColor; 
@property (getter=_balloonImage,nonatomic,readonly) UIImage * balloonImage; 
@property (getter=_balloonContentView,nonatomic,readonly) UIView * balloonContentView; 
@property (getter=_balloonInnerStrokeColor,nonatomic,readonly) UIColor * balloonInnerStrokeColor; 
+(Class)calloutViewClass;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg1 ;
-(BOOL)shouldShowCallout;
-(long long)_balloonCalloutStyle;
-(id)_balloonTintColor;
-(id)_balloonStrokeColor;
-(id)_balloonImage;
-(BOOL)_balloonCalloutShouldOriginateFromSmallSize:(double*)arg1 ;
-(id)_balloonContentView;
-(id)_balloonInnerStrokeColor;
-(void)_configureBalloonForDataIconImageKeys:(id)arg1 scale:(double)arg2 ;
-(void)_resolveBalloonAttributesIfNecessary;
-(void)_addAnchorDotViewIfNeeded;
@end

