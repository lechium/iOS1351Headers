/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class VKMapView;

@interface _MKMuninLayerHostingView : UIView {

	VKMapView* _muninView;

}

@property (nonatomic,retain) VKMapView * muninView;              //@synthesize muninView=_muninView - In the implementation block
+(Class)layerClass;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(VKMapView *)muninView;
-(void)setMuninView:(VKMapView *)arg1 ;
@end

