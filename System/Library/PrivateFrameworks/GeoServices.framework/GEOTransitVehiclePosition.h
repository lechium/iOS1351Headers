/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate, NSString;


@protocol GEOTransitVehiclePosition <NSObject>
@property (nonatomic,readonly) unsigned long long tripID; 
@property (nonatomic,readonly) SCD_Struct_GE32 coordinate; 
@property (nonatomic,readonly) double heading; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,copy,readonly) NSString * direction; 
@property (nonatomic,copy,readonly) NSString * headsign; 
@property (nonatomic,copy,readonly) NSString * colorHexString; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artworkDataSource; 
@required
-(SCD_Struct_GE32)coordinate;
-(NSDate *)timestamp;
-(NSString *)direction;
-(double)heading;
-(unsigned long long)tripID;
-(NSString *)headsign;
-(NSString *)colorHexString;
-(id<GEOTransitArtworkDataSource>)artworkDataSource;

@end

