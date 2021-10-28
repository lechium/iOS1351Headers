/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOComposedRouteTransitSection <NSObject>
@property (nonatomic,readonly) SCD_Struct_GE68 fromNodeID; 
@property (nonatomic,readonly) SCD_Struct_GE68 toNodeID; 
@property (nonatomic,readonly) unsigned long long lineID; 
@property (nonatomic,readonly) BOOL isTransfer; 
@property (nonatomic,readonly) int toNodeSignificance; 
@required
-(unsigned long long)lineID;
-(BOOL)isTransfer;
-(SCD_Struct_GE68)fromNodeID;
-(SCD_Struct_GE68)toNodeID;
-(int)toNodeSignificance;

@end
