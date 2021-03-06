/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/VKCustomFeatureAnnotation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class VKCustomFeature, MKAnnotationView, NSString;

@interface _MKAnnotationViewCustomFeatureAnnotation : NSObject <VKCustomFeatureAnnotation, NSSecureCoding> {

	VKCustomFeature* _customFeature;
	MKAnnotationView* _annotationView;
	CGSize _coordinate;

}

@property (nonatomic,readonly) VKCustomFeature * feature; 
@property (assign,nonatomic) CGSize coordinate;                                     //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic,__weak) MKAnnotationView * annotationView;              //@synthesize annotationView=_annotationView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double course; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)coordinate;
-(VKCustomFeature *)feature;
-(void)setCoordinate:(CGSize)arg1 ;
-(MKAnnotationView *)annotationView;
-(void)setAnnotationView:(MKAnnotationView *)arg1 ;
-(void)setCustomFeature:(id)arg1 ;
@end

