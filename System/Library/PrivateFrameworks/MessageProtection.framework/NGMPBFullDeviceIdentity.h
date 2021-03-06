/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NGMPBP256Key;

@interface NGMPBFullDeviceIdentity : PBCodable <NSCopying> {

	NSMutableArray* _prekeys;
	NGMPBP256Key* _signingKey;

}

@property (nonatomic,retain) NGMPBP256Key * signingKey;              //@synthesize signingKey=_signingKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * prekeys;               //@synthesize prekeys=_prekeys - In the implementation block
+(Class)prekeysType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NGMPBP256Key *)signingKey;
-(void)setSigningKey:(NGMPBP256Key *)arg1 ;
-(NSMutableArray *)prekeys;
-(void)addPrekeys:(id)arg1 ;
-(unsigned long long)prekeysCount;
-(void)clearPrekeys;
-(id)prekeysAtIndex:(unsigned long long)arg1 ;
-(void)setPrekeys:(NSMutableArray *)arg1 ;
@end

