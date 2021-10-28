/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class _MKUserTrackingButton, MKMapView;

@interface MKUserTrackingButton : UIView {

	_MKUserTrackingButton* _button;

}

@property (assign,nonatomic,__weak) MKMapView * mapView; 
+(id)userTrackingButtonWithMapView:(id)arg1 ;
-(id)init;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)removeInteraction:(id)arg1 ;
-(void)addInteraction:(id)arg1 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(id)initWithFrame:(CGRect)arg1 button:(id)arg2 ;
@end
