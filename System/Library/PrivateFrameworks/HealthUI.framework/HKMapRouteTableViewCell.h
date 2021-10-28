/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class MKMapView, NSString;

@interface HKMapRouteTableViewCell : UITableViewCell <MKMapViewDelegate> {

	MKMapView* _mapView;

}

@property (retain) MKMapView * mapView;                             //@synthesize mapView=_mapView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultReuseIdentifier;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(void)setupSubviews;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(void)setUpConstraints;
@end
