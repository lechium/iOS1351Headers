/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedTransitRouteStep.h>

@class GEOTransitTransferInfo, GEOTransitEnterExitInfo, GEOPBTransitAccessPoint, NSString;

@interface GEOComposedTransitStationRouteStep : GEOComposedTransitRouteStep {

	unsigned _expectedTime;
	BOOL _isArrivalUncertain;
	GEOTransitTransferInfo* _transitTransfer;
	GEOTransitEnterExitInfo* _enterExitInfo;
	GEOPBTransitAccessPoint* _accessPoint;

}

@property (nonatomic,readonly) GEOPBTransitAccessPoint * accessPoint;                 //@synthesize accessPoint=_accessPoint - In the implementation block
@property (nonatomic,readonly) unsigned expectedTime;                                 //@synthesize expectedTime=_expectedTime - In the implementation block
@property (nonatomic,readonly) GEOTransitTransferInfo * transitTransfer;              //@synthesize transitTransfer=_transitTransfer - In the implementation block
@property (nonatomic,readonly) BOOL isArrivalUncertain;                               //@synthesize isArrivalUncertain=_isArrivalUncertain - In the implementation block
@property (nonatomic,readonly) NSString * exitSign; 
@property (nonatomic,readonly) BOOL displayStop; 
@property (nonatomic,readonly) BOOL hasDisplayStop; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)expectedTime;
-(SCD_Struct_GE95)startGeoCoordinate;
-(SCD_Struct_GE95)endGeoCoordinate;
-(GEOPBTransitAccessPoint *)accessPoint;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned)arg5 pointRange:(NSRange)arg6 ;
-(BOOL)displayStop;
-(BOOL)hasDisplayStop;
-(NSString *)exitSign;
-(GEOTransitTransferInfo *)transitTransfer;
-(BOOL)isArrivalUncertain;
@end

