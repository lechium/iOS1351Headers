/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class MKCompassView, MKMapView;

@interface MKCompassButton : UIView {

	MKCompassView* _compassView;
	BOOL _visible;
	MKMapView* _mapView;
	long long _compassVisibility;

}

@property (assign,nonatomic,__weak) MKMapView * mapView;               //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic) long long compassVisibility;              //@synthesize compassVisibility=_compassVisibility - In the implementation block
+(id)compassButtonWithMapView:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)removeInteraction:(id)arg1 ;
-(void)addInteraction:(id)arg1 ;
-(void)_updateVisibility;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(id)initWithFrame:(CGRect)arg1 mapView:(id)arg2 ;
-(void)didTapCompassGesture:(id)arg1 ;
-(void)mapViewDidUpdateYawNotification:(id)arg1 ;
-(void)setCompassVisibility:(long long)arg1 ;
-(long long)compassVisibility;
@end
