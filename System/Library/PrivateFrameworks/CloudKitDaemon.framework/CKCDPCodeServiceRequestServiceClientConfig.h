/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKCDPCodeServiceRequestServiceClientConfig : PBCodable <NSCopying> {

	NSString* _host;
	unsigned _port;
	BOOL _useTls;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasHost; 
@property (nonatomic,retain) NSString * host;              //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) BOOL hasPort; 
@property (assign,nonatomic) unsigned port;                //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) BOOL hasUseTls; 
@property (assign,nonatomic) BOOL useTls;                  //@synthesize useTls=_useTls - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)host;
-(unsigned)port;
-(void)setPort:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHost:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasHost;
-(BOOL)hasPort;
-(void)setUseTls:(BOOL)arg1 ;
-(void)setHasPort:(BOOL)arg1 ;
-(void)setHasUseTls:(BOOL)arg1 ;
-(BOOL)hasUseTls;
-(BOOL)useTls;
@end

