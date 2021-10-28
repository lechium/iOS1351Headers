/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOVenueFloorInfo.h>

@protocol GEOVenueFloorInfo <NSObject>
@property (nonatomic,readonly) short ordinal; 
@property (nonatomic,readonly) unsigned long long levelID; 
@required
-(unsigned long long)levelID;
-(short)ordinal;

@end


@class NSString;

@interface GEOVenueFloorInfo : NSObject <GEOVenueFloorInfo> {

	short _ordinal;
	unsigned long long _levelID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) short ordinal;                           //@synthesize ordinal=_ordinal - In the implementation block
@property (nonatomic,readonly) unsigned long long levelID;              //@synthesize levelID=_levelID - In the implementation block
+(BOOL)isIntegerValidOrdinal:(long long)arg1 ;
+(id)floorInfosFromLevels:(id)arg1 ;
-(id)init;
-(id)initWithLevel:(id)arg1 ;
-(unsigned long long)levelID;
-(short)ordinal;
-(id)initWithOrdinal:(short)arg1 levelID:(unsigned long long)arg2 ;
@end
