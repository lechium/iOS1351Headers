/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface _NMROriginProtobuf : PBCodable <NSCopying> {

	NSData* _deviceInfoData;
	NSString* _displayName;
	int _uniqueIdentifier;
	SCD_Struct_NM8 _has;

}

@property (assign,nonatomic) BOOL hasUniqueIdentifier; 
@property (assign,nonatomic) int uniqueIdentifier;                  //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceInfoData; 
@property (nonatomic,retain) NSData * deviceInfoData;               //@synthesize deviceInfoData=_deviceInfoData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)uniqueIdentifier;
-(NSString *)displayName;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setUniqueIdentifier:(int)arg1 ;
-(BOOL)hasDisplayName;
-(void)setHasUniqueIdentifier:(BOOL)arg1 ;
-(BOOL)hasUniqueIdentifier;
-(NSData *)deviceInfoData;
-(void)setDeviceInfoData:(NSData *)arg1 ;
-(BOOL)hasDeviceInfoData;
@end

