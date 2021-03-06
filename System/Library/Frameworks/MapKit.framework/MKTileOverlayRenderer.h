/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayRenderer.h>

@protocol OS_dispatch_queue;
@class GEOTileKeyList, NSObject;

@interface MKTileOverlayRenderer : MKOverlayRenderer {

	GEOTileKeyList* _pendingRequests;
	NSObject*<OS_dispatch_queue> _pendingRequestsLock;

}
-(void)reloadData;
-(id)initWithOverlay:(id)arg1 ;
-(void)drawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(BOOL)canDrawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 ;
-(BOOL)_mayExtendOutsideBounds;
-(id)initWithTileOverlay:(id)arg1 ;
@end

