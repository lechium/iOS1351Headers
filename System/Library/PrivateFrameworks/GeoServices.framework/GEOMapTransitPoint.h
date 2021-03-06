/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol GEOMapTransitPoint <NSObject>
@property (nonatomic,readonly) SCD_Struct_GE32 coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius; 
@property (nonatomic,readonly) SCD_Struct_GE40 boundingRect; 
@property (nonatomic,readonly) SCD_Struct_GE32* polygonPoints; 
@property (nonatomic,readonly) long long polygonPointsCount; 
@required
-(SCD_Struct_GE32)coordinate;
-(SCD_Struct_GE40)boundingRect;
-(unsigned long long)transitID;
-(id)findGeometryWithCompletionHandler:(/*^block*/id)arg1;
-(double)distanceInMetersFrom:(SCD_Struct_GE32)arg1;
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(NSString *)internalName;
-(double)boundingRadius;
-(SCD_Struct_GE32*)polygonPoints;
-(long long)polygonPointsCount;

@end

