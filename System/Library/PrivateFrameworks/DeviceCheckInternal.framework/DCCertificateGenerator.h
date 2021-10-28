/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, DCContext;

@interface DCCertificateGenerator : NSObject {

	NSData* _publicKey;
	DCContext* _context;

}
-(void)dealloc;
-(id)_encryptData:(id)arg1 error:(id*)arg2 ;
-(id)initWithContext:(id)arg1 publicKey:(id)arg2 ;
-(void)generateEncryptedCertificateChainWithCompletion:(/*^block*/id)arg1 ;
-(void)_generateCertificateChainWithCompletion:(/*^block*/id)arg1 ;
-(int)keybagHandle;
@end
