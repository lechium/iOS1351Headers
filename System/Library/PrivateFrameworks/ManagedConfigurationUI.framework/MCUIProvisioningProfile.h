/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
@class NSString;

@interface MCUIProvisioningProfile : NSObject {

	BOOL _isAppleInternal;
	BOOL _isBeta;
	BOOL _isFreeDeveloperProvisioningProfile;
	BOOL _isUniversalProvisioningProfile;
	NSString* _allowedApplicationIdentifierEntitlement;
	NSString* _UUID;

}

@property (nonatomic,retain) NSString * allowedApplicationIdentifierEntitlement;              //@synthesize allowedApplicationIdentifierEntitlement=_allowedApplicationIdentifierEntitlement - In the implementation block
@property (nonatomic,retain) NSString * UUID;                                                 //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) BOOL isAppleInternal;                                            //@synthesize isAppleInternal=_isAppleInternal - In the implementation block
@property (assign,nonatomic) BOOL isBeta;                                                     //@synthesize isBeta=_isBeta - In the implementation block
@property (assign,nonatomic) BOOL isFreeDeveloperProvisioningProfile;                         //@synthesize isFreeDeveloperProvisioningProfile=_isFreeDeveloperProvisioningProfile - In the implementation block
@property (assign,nonatomic) BOOL isUniversalProvisioningProfile;                             //@synthesize isUniversalProvisioningProfile=_isUniversalProvisioningProfile - In the implementation block
-(NSString *)UUID;
-(void)setUUID:(NSString *)arg1 ;
-(BOOL)isAppleInternal;
-(id)initWithProfile:(MISProfileRef)arg1 ;
-(BOOL)isBeta;
-(BOOL)allowsApplicationIdentifierEntitlement:(id)arg1 ;
-(NSString *)allowedApplicationIdentifierEntitlement;
-(void)setAllowedApplicationIdentifierEntitlement:(NSString *)arg1 ;
-(void)setIsAppleInternal:(BOOL)arg1 ;
-(void)setIsBeta:(BOOL)arg1 ;
-(BOOL)isFreeDeveloperProvisioningProfile;
-(void)setIsFreeDeveloperProvisioningProfile:(BOOL)arg1 ;
-(BOOL)isUniversalProvisioningProfile;
-(void)setIsUniversalProvisioningProfile:(BOOL)arg1 ;
@end

