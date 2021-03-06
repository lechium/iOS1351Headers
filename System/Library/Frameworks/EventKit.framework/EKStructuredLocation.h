/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKPredictedLocationOfInterest, NSString, NSData, CLLocation;

@interface EKStructuredLocation : EKObject <NSCopying> {

	BOOL _imprecise;
	EKPredictedLocationOfInterest* _predictedLOI;

}

@property (nonatomic,copy) NSString * contactLabel; 
@property (nonatomic,readonly) BOOL isStructured; 
@property (nonatomic,retain) NSString * routing; 
@property (nonatomic,copy) NSData * mapKitHandle; 
@property (nonatomic,readonly) BOOL hasKnownSpatialData; 
@property (nonatomic,retain) NSString * address; 
@property (assign,getter=isImprecise,nonatomic) BOOL imprecise;                         //@synthesize imprecise=_imprecise - In the implementation block
@property (nonatomic,retain) EKPredictedLocationOfInterest * predictedLOI;              //@synthesize predictedLOI=_predictedLOI - In the implementation block
@property (getter=isPrediction,nonatomic,readonly) BOOL prediction; 
@property (nonatomic,copy) NSString * derivedFrom; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) CLLocation * geoLocation; 
@property (assign,nonatomic) double radius; 
+(id)locationWithTitle:(id)arg1 ;
+(id)locationWithMapItem:(id)arg1 ;
+(Class)frozenClass;
+(id)_stringByStrippingControlCharactersFromString:(id)arg1 ;
+(id)displayLabelForContact:(id)arg1 unlocalizedLabel:(id)arg2 ;
-(id)humanReadableContactString;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)address;
-(BOOL)_reset;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)cacheKey;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(id)latitude;
-(id)longitude;
-(void)setLongitude:(id)arg1 ;
-(void)setLatitude:(id)arg1 ;
-(id)referenceFrame;
-(void)setReferenceFrame:(id)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(BOOL)isStructured;
-(NSString *)contactLabel;
-(void)setContactLabel:(NSString *)arg1 ;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(BOOL)isPrediction;
-(void)setRouting:(NSString *)arg1 ;
-(EKPredictedLocationOfInterest *)predictedLOI;
-(CLLocation *)geoLocation;
-(void)setGeoLocation:(CLLocation *)arg1 ;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(NSData *)mapKitHandle;
-(void)updateFromMapItem:(id)arg1 ;
-(id)calLocation;
-(BOOL)isImprecise;
-(NSString *)routing;
-(NSString *)derivedFrom;
-(void)setDerivedFrom:(NSString *)arg1 ;
-(void)setPredictedLOI:(EKPredictedLocationOfInterest *)arg1 ;
-(void)setImprecise:(BOOL)arg1 ;
-(id)geoURLString;
-(id)semanticIdentifier;
-(BOOL)hasKnownSpatialData;
-(void)_clearGeoLocationCache;
-(id)radiusRaw;
-(void)setRadiusRaw:(id)arg1 ;
@end

