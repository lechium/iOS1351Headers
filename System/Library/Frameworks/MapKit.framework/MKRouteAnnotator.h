/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MapKit/MapKit-Structs.h>
@class GEOComposedRoute;

@interface MKRouteAnnotator : NSObject {

	SCD_Struct_MK13 _boundingRegion;
	GEOComposedRoute* _composedRoute;
	CGSize* _mapPoints;
	CGSize _topLeftCorner;
	CGSize _snapshotSize;
	double _zoomLevel;

}
-(void)dealloc;
-(void)_generateMapPoints;
-(SCD_Struct_MK8)_calculateBoundingRegionForRoute;
-(double)_zoomLevelForCoordinateRegion:(SCD_Struct_MK8)arg1 contentRect:(CGRect)arg2 ;
-(CGAffineTransform)_overviewAffineTransformForRect:(CGRect)arg1 zoomLevel:(double)arg2 ;
-(void)_drawRouteLineInRect:(CGRect)arg1 zoomLevel:(double)arg2 transform:(CGAffineTransform)arg3 inImage:(id)arg4 ;
-(id)_createSnapshotter;
-(id)_drawRouteInImage:(id)arg1 ;
-(id)initWithComposedRoute:(id)arg1 contentSize:(CGSize)arg2 ;
-(void)createSnapshotOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

