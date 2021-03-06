/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface CUBitCoderEncryptRequest : NSObject {

	NSData* _aad;
	unsigned long long _authTagLength;
	NSData* _data;
	NSData* _nonce;

}

@property (nonatomic,copy) NSData * aad;                                    //@synthesize aad=_aad - In the implementation block
@property (assign,nonatomic) unsigned long long authTagLength;              //@synthesize authTagLength=_authTagLength - In the implementation block
@property (nonatomic,copy) NSData * data;                                   //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSData * nonce;                                  //@synthesize nonce=_nonce - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSData *)nonce;
-(void)setNonce:(NSData *)arg1 ;
-(NSData *)aad;
-(void)setAad:(NSData *)arg1 ;
-(unsigned long long)authTagLength;
-(void)setAuthTagLength:(unsigned long long)arg1 ;
@end

