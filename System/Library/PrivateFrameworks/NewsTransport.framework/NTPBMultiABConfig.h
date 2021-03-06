/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NTPBConfig;

@interface NTPBMultiABConfig : PBCodable <NSCopying> {

	long long _moduloForHashing;
	NSMutableArray* _abConfigs;
	NTPBConfig* _defaultConfig;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,readonly) BOOL hasDefaultConfig; 
@property (nonatomic,retain) NTPBConfig * defaultConfig;              //@synthesize defaultConfig=_defaultConfig - In the implementation block
@property (assign,nonatomic) BOOL hasModuloForHashing; 
@property (assign,nonatomic) long long moduloForHashing;              //@synthesize moduloForHashing=_moduloForHashing - In the implementation block
@property (nonatomic,retain) NSMutableArray * abConfigs;              //@synthesize abConfigs=_abConfigs - In the implementation block
+(Class)abConfigsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NTPBConfig *)defaultConfig;
-(void)addAbConfigs:(id)arg1 ;
-(void)setDefaultConfig:(NTPBConfig *)arg1 ;
-(BOOL)hasDefaultConfig;
-(void)setModuloForHashing:(long long)arg1 ;
-(void)setHasModuloForHashing:(BOOL)arg1 ;
-(BOOL)hasModuloForHashing;
-(void)clearAbConfigs;
-(unsigned long long)abConfigsCount;
-(id)abConfigsAtIndex:(unsigned long long)arg1 ;
-(long long)moduloForHashing;
-(NSMutableArray *)abConfigs;
-(void)setAbConfigs:(NSMutableArray *)arg1 ;
@end

