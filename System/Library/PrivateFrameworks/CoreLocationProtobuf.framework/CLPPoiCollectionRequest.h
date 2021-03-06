/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPMeta;

@interface CLPPoiCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _harvests;
	CLPMeta* _meta;

}

@property (nonatomic,retain) CLPMeta * meta;                         //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * harvests;              //@synthesize harvests=_harvests - In the implementation block
+(Class)harvestsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(CLPMeta *)meta;
-(void)setMeta:(CLPMeta *)arg1 ;
-(void)addHarvests:(id)arg1 ;
-(unsigned long long)harvestsCount;
-(void)clearHarvests;
-(id)harvestsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)harvests;
-(void)setHarvests:(NSMutableArray *)arg1 ;
@end

