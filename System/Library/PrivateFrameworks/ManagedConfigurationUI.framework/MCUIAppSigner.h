/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface MCUIAppSigner : NSObject {

	BOOL _appsRequireTrust;
	BOOL _appsRequireVerification;
	BOOL _hasFreeDeveloperProvisioningProfile;
	BOOL _hasUniversalProvisioningProfile;
	BOOL _appsRequireVerificationSoon;
	NSString* _displayName;
	NSString* _identity;
	NSArray* _applications;
	NSArray* _profiles;
	long long _numberOfAppsRequiringVerification;
	long long _numberOfAppsRequiringVerificationSoon;

}

@property (nonatomic,retain) NSString * displayName;                                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * identity;                                          //@synthesize identity=_identity - In the implementation block
@property (nonatomic,retain) NSArray * applications;                                       //@synthesize applications=_applications - In the implementation block
@property (nonatomic,retain) NSArray * profiles;                                           //@synthesize profiles=_profiles - In the implementation block
@property (assign,nonatomic) BOOL hasFreeDeveloperProvisioningProfile;                     //@synthesize hasFreeDeveloperProvisioningProfile=_hasFreeDeveloperProvisioningProfile - In the implementation block
@property (assign,nonatomic) BOOL hasUniversalProvisioningProfile;                         //@synthesize hasUniversalProvisioningProfile=_hasUniversalProvisioningProfile - In the implementation block
@property (assign,nonatomic) BOOL appsRequireTrust;                                        //@synthesize appsRequireTrust=_appsRequireTrust - In the implementation block
@property (assign,nonatomic) BOOL appsRequireVerification;                                 //@synthesize appsRequireVerification=_appsRequireVerification - In the implementation block
@property (assign,nonatomic) BOOL appsRequireVerificationSoon;                             //@synthesize appsRequireVerificationSoon=_appsRequireVerificationSoon - In the implementation block
@property (assign,nonatomic) long long numberOfAppsRequiringVerification;                  //@synthesize numberOfAppsRequiringVerification=_numberOfAppsRequiringVerification - In the implementation block
@property (assign,nonatomic) long long numberOfAppsRequiringVerificationSoon;              //@synthesize numberOfAppsRequiringVerificationSoon=_numberOfAppsRequiringVerificationSoon - In the implementation block
+(id)enterpriseAppSignersWithOutDeveloperAppSigners:(id*)arg1 ;
+(id)_uppProfilesBySignerIDWithOutFreeDevProfilesBySignerID:(id*)arg1 ;
+(void)_addProfile:(id)arg1 toSignerIdentity:(id)arg2 inDictionary:(id)arg3 ;
-(NSString *)displayName;
-(NSArray *)applications;
-(void)addApplication:(id)arg1 ;
-(void)removeApplication:(id)arg1 ;
-(void)setApplications:(NSArray *)arg1 ;
-(NSString *)identity;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setIdentity:(NSString *)arg1 ;
-(BOOL)isTrusted;
-(NSArray *)profiles;
-(BOOL)hasFreeDeveloperProvisioningProfile;
-(BOOL)hasUniversalProvisioningProfile;
-(id)_displayNameFromIdentity:(id)arg1 hasFreeDev:(BOOL)arg2 hasUPP:(BOOL)arg3 ;
-(BOOL)_isTrustRequiredForBundleIDs:(id)arg1 outNotVerifiedAppCount:(long long*)arg2 outExpiringSoonAppCount:(long long*)arg3 ;
-(void)setAppsRequireTrust:(BOOL)arg1 ;
-(void)setAppsRequireVerification:(BOOL)arg1 ;
-(void)setAppsRequireVerificationSoon:(BOOL)arg1 ;
-(void)setNumberOfAppsRequiringVerification:(long long)arg1 ;
-(void)setNumberOfAppsRequiringVerificationSoon:(long long)arg1 ;
-(void)refreshApplications;
-(id)initWithIdentity:(id)arg1 applications:(id)arg2 profiles:(id)arg3 hasUPP:(BOOL)arg4 hasFreeDeveloper:(BOOL)arg5 ;
-(void)removeApplications:(id)arg1 ;
-(void)setProfiles:(NSArray *)arg1 ;
-(BOOL)appsRequireTrust;
-(BOOL)appsRequireVerification;
-(long long)numberOfAppsRequiringVerification;
-(void)setHasFreeDeveloperProvisioningProfile:(BOOL)arg1 ;
-(void)setHasUniversalProvisioningProfile:(BOOL)arg1 ;
-(BOOL)appsRequireVerificationSoon;
-(long long)numberOfAppsRequiringVerificationSoon;
@end

