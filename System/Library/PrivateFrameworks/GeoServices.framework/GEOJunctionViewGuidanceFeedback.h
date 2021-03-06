/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:32 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOJunctionViewGuidanceFeedback : PBCodable <NSCopying> {

	NSMutableArray* _imageIDs;
	BOOL _imageDisplayed;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasImageDisplayed; 
@property (assign,nonatomic) BOOL imageDisplayed; 
@property (nonatomic,retain) NSMutableArray * imageIDs; 
+(BOOL)isValid:(id)arg1 ;
+(Class)imageIDType;
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
-(NSMutableArray *)imageIDs;
-(void)addImageID:(id)arg1 ;
-(unsigned long long)imageIDsCount;
-(void)clearImageIDs;
-(id)imageIDAtIndex:(unsigned long long)arg1 ;
-(BOOL)imageDisplayed;
-(void)setImageDisplayed:(BOOL)arg1 ;
-(void)setHasImageDisplayed:(BOOL)arg1 ;
-(BOOL)hasImageDisplayed;
-(void)setImageIDs:(NSMutableArray *)arg1 ;
@end

