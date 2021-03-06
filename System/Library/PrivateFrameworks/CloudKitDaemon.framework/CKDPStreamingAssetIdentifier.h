/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface CKDPStreamingAssetIdentifier : PBCodable <NSCopying> {

	NSData* _fileSignature;
	NSString* _owner;
	NSData* _referenceSignature;

}

@property (nonatomic,readonly) BOOL hasOwner; 
@property (nonatomic,retain) NSString * owner;                          //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) BOOL hasFileSignature; 
@property (nonatomic,retain) NSData * fileSignature;                    //@synthesize fileSignature=_fileSignature - In the implementation block
@property (nonatomic,readonly) BOOL hasReferenceSignature; 
@property (nonatomic,retain) NSData * referenceSignature;               //@synthesize referenceSignature=_referenceSignature - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOwner:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)owner;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)fileSignature;
-(NSData *)referenceSignature;
-(void)setFileSignature:(NSData *)arg1 ;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(BOOL)hasOwner;
-(BOOL)hasFileSignature;
-(BOOL)hasReferenceSignature;
@end

