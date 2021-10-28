/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SettingsFoundation.framework/SettingsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SFRestrictionsPasscodeController : NSObject
+(BOOL)validatePIN:(id)arg1 ;
+(void)setPIN:(id)arg1 ;
+(BOOL)settingEnabled;
+(void)migrateRestrictionsPasscode;
+(id)_keychainPasswordForRestrictions;
+(BOOL)hasHashAndSaltLegacyPassword;
+(id)pinFromHashAndSaltLegacyPassword;
+(void)removePasswordForHashAndSaltLegacyRestrictions;
+(void)_setKeychainPasswordForRestrictions:(id)arg1 ;
+(void)_removeKeychainPasswordForRestrictions;
+(void)_migrateRestrictionsPasscodeIfNeeded;
+(BOOL)legacyRestrictionsInEffect;
+(id)hashForHashAndSaltLegacyRestrictions;
+(id)saltForHashAndSaltLegacyRestrictions;
+(id)newHashDataForPassword:(id)arg1 andSalt:(id)arg2 ;
+(id)_generateSalt;
@end
