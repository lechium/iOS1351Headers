/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <GeoServices/GEOBaseMapItem.h>

@class VKLabelMarker;

@interface _MKLabelMarkerItem : GEOBaseMapItem {

	VKLabelMarker* _labelMarker;

}
+(id)labelMarkerItemWithLabelMarker:(id)arg1 ;
-(id)name;
-(BOOL)isValid;
-(id)_identifier;
-(CGSize)coordinate;
-(int)referenceFrame;
-(id)_styleAttributes;
-(unsigned long long)_muid;
-(id)_place;
-(BOOL)_hasMUID;
-(BOOL)_hasResolvablePartialInformation;
-(BOOL)_isTransitDisplayFeature;
-(BOOL)_hasVenueFeatureType;
-(int)_venueFeatureType;
-(id)_venueInfo;
-(id)initWithLabelMarker:(id)arg1 ;
-(id)_labelMarker;
@end
