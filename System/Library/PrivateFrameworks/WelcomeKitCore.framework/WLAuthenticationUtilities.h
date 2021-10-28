/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WLAuthenticationUtilities : NSObject
+(void)_appendBase64Data:(id)arg1 toString:(id)arg2 ;
+(id)hashWithString:(id)arg1 ;
+(void)generateSelfSignedCertificateWithOrganization:(id)arg1 commonName:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)pemFormattedPublicKeyData:(id)arg1 ;
+(id)pemFormattedCertificateData:(id)arg1 ;
+(id)dataFromPEMFormattedData:(id)arg1 ;
@end
