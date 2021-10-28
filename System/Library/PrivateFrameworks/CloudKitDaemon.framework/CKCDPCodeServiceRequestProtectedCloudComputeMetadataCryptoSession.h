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

@class NSData;

@interface CKCDPCodeServiceRequestProtectedCloudComputeMetadataCryptoSession : PBCodable <NSCopying> {

	NSData* _wrappedInvocationKey;

}

@property (nonatomic,readonly) BOOL hasWrappedInvocationKey; 
@property (nonatomic,retain) NSData * wrappedInvocationKey;               //@synthesize wrappedInvocationKey=_wrappedInvocationKey - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setWrappedInvocationKey:(NSData *)arg1 ;
-(BOOL)hasWrappedInvocationKey;
-(NSData *)wrappedInvocationKey;
@end
