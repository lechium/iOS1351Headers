/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtectedCloudStorage/ProtectedCloudStorage-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PCSManateePrivateKey;

@interface PCSManateeShareableIdentity : PBCodable <NSCopying> {

	PCSManateePrivateKey* _encryptionPrivateKey;
	PCSManateePrivateKey* _signingPrivateKey;

}

@property (nonatomic,readonly) BOOL hasEncryptionPrivateKey; 
@property (nonatomic,retain) PCSManateePrivateKey * encryptionPrivateKey;              //@synthesize encryptionPrivateKey=_encryptionPrivateKey - In the implementation block
@property (nonatomic,readonly) BOOL hasSigningPrivateKey; 
@property (nonatomic,retain) PCSManateePrivateKey * signingPrivateKey;                 //@synthesize signingPrivateKey=_signingPrivateKey - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEncryptionPrivateKey:(PCSManateePrivateKey *)arg1 ;
-(void)setSigningPrivateKey:(PCSManateePrivateKey *)arg1 ;
-(BOOL)hasEncryptionPrivateKey;
-(BOOL)hasSigningPrivateKey;
-(PCSManateePrivateKey *)encryptionPrivateKey;
-(PCSManateePrivateKey *)signingPrivateKey;
@end

