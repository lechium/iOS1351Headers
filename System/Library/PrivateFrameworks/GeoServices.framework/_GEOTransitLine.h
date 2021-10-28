/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOTransitLine.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GEOTransitSystem;
@class NSString, GEOMapItemIdentifier, NSArray, GEOPBTransitLine, GEOStyleAttributes;

@interface _GEOTransitLine : NSObject <GEOTransitLine, NSSecureCoding> {

	GEOPBTransitLine* _line;
	id<GEOTransitSystem> _system;
	SCD_Struct_GE32 _locationHint;

}

@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) GEOMapItemIdentifier * identifier; 
@property (nonatomic,readonly) id<GEOTransitSystem> system; 
@property (nonatomic,readonly) unsigned long long departureTimeDisplayStyle; 
@property (nonatomic,readonly) BOOL departuresAreVehicleSpecific; 
@property (nonatomic,readonly) BOOL isBus; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> modeArtwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> alternateArtwork; 
@property (nonatomic,readonly) BOOL hasLineColorString; 
@property (nonatomic,readonly) NSString * lineColorString; 
@property (nonatomic,readonly) BOOL showVehicleNumber; 
@property (nonatomic,readonly) NSArray * operatingHours; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GEOMapItemIdentifier *)identifier;
-(GEOStyleAttributes *)styleAttributes;
-(id<GEOTransitSystem>)system;
-(unsigned long long)muid;
-(id<GEOTransitArtworkDataSource>)artwork;
-(NSArray *)operatingHours;
-(id<GEOTransitArtworkDataSource>)modeArtwork;
-(id<GEOTransitArtworkDataSource>)alternateArtwork;
-(NSString *)lineColorString;
-(BOOL)showVehicleNumber;
-(id)initWithLine:(id)arg1 system:(id)arg2 locationHint:(SCD_Struct_GE32)arg3 ;
-(BOOL)departuresAreVehicleSpecific;
-(unsigned long long)departureTimeDisplayStyle;
-(BOOL)isBus;
-(BOOL)hasLineColorString;
@end
