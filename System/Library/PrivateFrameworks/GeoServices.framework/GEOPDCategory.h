/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDCategory : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _localizedNames;
	int _level;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasLevel; 
@property (assign,nonatomic) int level; 
@property (nonatomic,retain) NSMutableArray * localizedNames; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)_allCategoriesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(id)categoryNamesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(BOOL)hasCategoryNamesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(Class)localizedNameType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)level;
-(id)dictionaryRepresentation;
-(NSMutableArray *)localizedNames;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLevel:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasLevel;
-(unsigned long long)localizedNamesCount;
-(void)clearLocalizedNames;
-(void)setLocalizedNames:(NSMutableArray *)arg1 ;
-(void)addLocalizedName:(id)arg1 ;
-(id)localizedNameAtIndex:(unsigned long long)arg1 ;
-(void)setHasLevel:(BOOL)arg1 ;
@end
