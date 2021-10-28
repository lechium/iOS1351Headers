/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOLogMsgStateDeviceIdentifier : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _deviceHwIdentifier;
	NSString* _deviceOsVersion;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _deviceDarkMode;
	BOOL _isInternalInstall;
	BOOL _isInternalTool;
	struct {
		unsigned has_deviceDarkMode : 1;
		unsigned has_isInternalInstall : 1;
		unsigned has_isInternalTool : 1;
		unsigned read_deviceHwIdentifier : 1;
		unsigned read_deviceOsVersion : 1;
		unsigned wrote_deviceHwIdentifier : 1;
		unsigned wrote_deviceOsVersion : 1;
		unsigned wrote_deviceDarkMode : 1;
		unsigned wrote_isInternalInstall : 1;
		unsigned wrote_isInternalTool : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDeviceOsVersion; 
@property (nonatomic,retain) NSString * deviceOsVersion; 
@property (nonatomic,readonly) BOOL hasDeviceHwIdentifier; 
@property (nonatomic,retain) NSString * deviceHwIdentifier; 
@property (assign,nonatomic) BOOL hasIsInternalTool; 
@property (assign,nonatomic) BOOL isInternalTool; 
@property (assign,nonatomic) BOOL hasIsInternalInstall; 
@property (assign,nonatomic) BOOL isInternalInstall; 
@property (assign,nonatomic) BOOL hasDeviceDarkMode; 
@property (assign,nonatomic) BOOL deviceDarkMode; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isInternalInstall;
-(void)readAll:(BOOL)arg1 ;
-(void)setDeviceDarkMode:(BOOL)arg1 ;
-(void)setDeviceOsVersion:(NSString *)arg1 ;
-(void)setDeviceHwIdentifier:(NSString *)arg1 ;
-(void)setIsInternalInstall:(BOOL)arg1 ;
-(void)setIsInternalTool:(BOOL)arg1 ;
-(BOOL)deviceDarkMode;
-(void)setHasDeviceDarkMode:(BOOL)arg1 ;
-(BOOL)hasDeviceDarkMode;
-(BOOL)isInternalTool;
-(void)setHasIsInternalTool:(BOOL)arg1 ;
-(BOOL)hasIsInternalTool;
-(void)setHasIsInternalInstall:(BOOL)arg1 ;
-(BOOL)hasIsInternalInstall;
-(void)_readDeviceOsVersion;
-(void)_readDeviceHwIdentifier;
-(NSString *)deviceOsVersion;
-(NSString *)deviceHwIdentifier;
-(BOOL)hasDeviceOsVersion;
-(BOOL)hasDeviceHwIdentifier;
@end
