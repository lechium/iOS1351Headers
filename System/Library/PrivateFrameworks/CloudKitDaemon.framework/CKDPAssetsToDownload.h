/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPRequestedFields;

@interface CKDPAssetsToDownload : PBCodable <NSCopying> {

	CKDPRequestedFields* _assetFields;
	BOOL _allAssets;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasAllAssets; 
@property (assign,nonatomic) BOOL allAssets;                                 //@synthesize allAssets=_allAssets - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetFields; 
@property (nonatomic,retain) CKDPRequestedFields * assetFields;              //@synthesize assetFields=_assetFields - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAssetFields:(CKDPRequestedFields *)arg1 ;
-(CKDPRequestedFields *)assetFields;
-(void)setAllAssets:(BOOL)arg1 ;
-(BOOL)hasAssetFields;
-(void)setHasAllAssets:(BOOL)arg1 ;
-(BOOL)hasAllAssets;
-(BOOL)allAssets;
@end
