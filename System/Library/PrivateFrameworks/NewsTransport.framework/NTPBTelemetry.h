/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBTelemetry : PBCodable <NSCopying> {

	long long _appBuild;
	NSString* _appBuildNumber;
	NSString* _appVersion;
	NSString* _carrier;
	int _contentEnvironment;
	NSString* _countryCode;
	NSString* _deviceModel;
	NSString* _devicePlatform;
	NSString* _languageCode;
	NSString* _mobileCountryCode;
	NSString* _mobileNetworkCode;
	NSMutableArray* _networkEventGroups;
	NSString* _osCountryCode;
	int _osInstallVariant;
	NSString* _osVersion;
	NSString* _userId;
	NSString* _userStorefrontId;
	SCD_Struct_NT4 _has;

}

@property (nonatomic,readonly) BOOL hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;                           //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) BOOL hasDevicePlatform; 
@property (nonatomic,retain) NSString * devicePlatform;                        //@synthesize devicePlatform=_devicePlatform - In the implementation block
@property (nonatomic,readonly) BOOL hasOsVersion; 
@property (nonatomic,retain) NSString * osVersion;                             //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAppVersion; 
@property (nonatomic,retain) NSString * appVersion;                            //@synthesize appVersion=_appVersion - In the implementation block
@property (assign,nonatomic) BOOL hasAppBuild; 
@property (assign,nonatomic) long long appBuild;                               //@synthesize appBuild=_appBuild - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                           //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                          //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) BOOL hasCarrier; 
@property (nonatomic,retain) NSString * carrier;                               //@synthesize carrier=_carrier - In the implementation block
@property (nonatomic,readonly) BOOL hasMobileCountryCode; 
@property (nonatomic,retain) NSString * mobileCountryCode;                     //@synthesize mobileCountryCode=_mobileCountryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasMobileNetworkCode; 
@property (nonatomic,retain) NSString * mobileNetworkCode;                     //@synthesize mobileNetworkCode=_mobileNetworkCode - In the implementation block
@property (nonatomic,readonly) BOOL hasOsCountryCode; 
@property (nonatomic,retain) NSString * osCountryCode;                         //@synthesize osCountryCode=_osCountryCode - In the implementation block
@property (assign,nonatomic) BOOL hasOsInstallVariant; 
@property (assign,nonatomic) int osInstallVariant;                             //@synthesize osInstallVariant=_osInstallVariant - In the implementation block
@property (assign,nonatomic) BOOL hasContentEnvironment; 
@property (assign,nonatomic) int contentEnvironment;                           //@synthesize contentEnvironment=_contentEnvironment - In the implementation block
@property (nonatomic,readonly) BOOL hasUserId; 
@property (nonatomic,retain) NSString * userId;                                //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserStorefrontId; 
@property (nonatomic,retain) NSString * userStorefrontId;                      //@synthesize userStorefrontId=_userStorefrontId - In the implementation block
@property (nonatomic,retain) NSMutableArray * networkEventGroups;              //@synthesize networkEventGroups=_networkEventGroups - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBuildNumber; 
@property (nonatomic,retain) NSString * appBuildNumber;                        //@synthesize appBuildNumber=_appBuildNumber - In the implementation block
+(Class)networkEventGroupsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)languageCode;
-(NSString *)countryCode;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)carrier;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)mobileNetworkCode;
-(NSString *)mobileCountryCode;
-(void)setMobileCountryCode:(NSString *)arg1 ;
-(void)setMobileNetworkCode:(NSString *)arg1 ;
-(BOOL)hasLanguageCode;
-(BOOL)hasCountryCode;
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(BOOL)hasOsVersion;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
-(BOOL)hasDeviceModel;
-(void)setDevicePlatform:(NSString *)arg1 ;
-(NSString *)devicePlatform;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(void)setCarrier:(NSString *)arg1 ;
-(void)addNetworkEventGroups:(id)arg1 ;
-(void)setUserStorefrontId:(NSString *)arg1 ;
-(BOOL)hasUserStorefrontId;
-(NSString *)userStorefrontId;
-(BOOL)hasUserId;
-(void)setAppBuildNumber:(NSString *)arg1 ;
-(BOOL)hasDevicePlatform;
-(BOOL)hasAppVersion;
-(void)setAppBuild:(long long)arg1 ;
-(void)setHasAppBuild:(BOOL)arg1 ;
-(BOOL)hasAppBuild;
-(BOOL)hasCarrier;
-(int)osInstallVariant;
-(void)setOsInstallVariant:(int)arg1 ;
-(void)setHasOsInstallVariant:(BOOL)arg1 ;
-(BOOL)hasOsInstallVariant;
-(id)osInstallVariantAsString:(int)arg1 ;
-(int)StringAsOsInstallVariant:(id)arg1 ;
-(BOOL)hasAppBuildNumber;
-(long long)appBuild;
-(NSString *)appBuildNumber;
-(void)setOsCountryCode:(NSString *)arg1 ;
-(BOOL)hasMobileCountryCode;
-(BOOL)hasMobileNetworkCode;
-(BOOL)hasOsCountryCode;
-(int)contentEnvironment;
-(void)setContentEnvironment:(int)arg1 ;
-(void)setHasContentEnvironment:(BOOL)arg1 ;
-(BOOL)hasContentEnvironment;
-(void)clearNetworkEventGroups;
-(unsigned long long)networkEventGroupsCount;
-(id)networkEventGroupsAtIndex:(unsigned long long)arg1 ;
-(NSString *)osCountryCode;
-(NSMutableArray *)networkEventGroups;
-(void)setNetworkEventGroups:(NSMutableArray *)arg1 ;
@end

