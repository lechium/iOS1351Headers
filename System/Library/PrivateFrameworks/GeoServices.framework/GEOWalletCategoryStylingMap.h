/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOWalletCategoryStylingMap : PBCodable <NSCopying> {

	NSMutableArray* _mappings;

}

@property (nonatomic,retain) NSMutableArray * mappings; 
+(BOOL)isValid:(id)arg1 ;
+(Class)mappingsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)addMappings:(id)arg1 ;
-(unsigned long long)mappingsCount;
-(void)clearMappings;
-(id)mappingsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)mappings;
-(void)setMappings:(NSMutableArray *)arg1 ;
@end

