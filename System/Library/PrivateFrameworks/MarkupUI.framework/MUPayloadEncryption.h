/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MUPayloadEncryption : NSObject {

	BOOL _keyInitialized;
	BOOL _haveKey;
	unsigned char _key[16];

}
+(id)sharedInstance;
-(id)init;
-(id)decryptData:(id)arg1 ;
-(id)encryptData:(id)arg1 ;
-(void)initializeKey;
@end

