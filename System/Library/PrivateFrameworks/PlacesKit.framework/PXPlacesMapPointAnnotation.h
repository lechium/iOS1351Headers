/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>
#import <libobjc.A.dylib/PXPlacesMapRenderable.h>

@protocol PXPlacesMapRenderer, PXPlacesMapSelectionHandler;
@class NSString, NSOrderedSet;

@interface PXPlacesMapPointAnnotation : NSObject <MKAnnotation, PXPlacesMapRenderable> {

	id<PXPlacesMapRenderer> renderer;
	id<PXPlacesMapSelectionHandler> selectionHandler;
	NSOrderedSet* geotaggables;
	long long index;
	CLLocationCoordinate2D coordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (__weak) id<PXPlacesMapRenderer> renderer; 
@property (__weak) id<PXPlacesMapSelectionHandler> selectionHandler; 
@property (retain) NSOrderedSet * geotaggables; 
@property (assign,nonatomic) long long index; 
-(NSString *)description;
-(CLLocationCoordinate2D)coordinate;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id<PXPlacesMapRenderer>)renderer;
-(void)setRenderer:(id<PXPlacesMapRenderer>)arg1 ;
-(void)setSelectionHandler:(id<PXPlacesMapSelectionHandler>)arg1 ;
-(id<PXPlacesMapSelectionHandler>)selectionHandler;
-(NSOrderedSet *)geotaggables;
-(void)setGeotaggables:(NSOrderedSet *)arg1 ;
@end

