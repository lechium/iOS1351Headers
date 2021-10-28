/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CSAESKeyManager : NSObject
+(id)generateIfNecessaryVoiceTriggerProfilesAESKey;
+(id)getVoiceTriggerProfilesAESKey;
+(id)generateIfNecessaryAESKeyWithKeySizeInBits:(unsigned long long)arg1 applicationTag:(id)arg2 keyLabel:(id)arg3 shouldGenerateIfNecessary:(BOOL)arg4 ;
+(id)generateAESKeyWithKeySizeInBits:(unsigned long long)arg1 ;
+(BOOL)storeAESKeyInKeychain:(id)arg1 applicationTag:(id)arg2 keyLabel:(id)arg3 ;
+(id)getAESKeyFromKeychainWithApplicationTag:(id)arg1 keyLabel:(id)arg2 ;
+(BOOL)deleteAESKeyWithApplicationTag:(id)arg1 keyLabel:(id)arg2 ;
+(id)getKeychainAttributesForAESKeyWithApplicationTag:(id)arg1 keyLabel:(id)arg2 ;
@end
