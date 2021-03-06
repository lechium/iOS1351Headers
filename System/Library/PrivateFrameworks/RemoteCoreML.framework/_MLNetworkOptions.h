/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteCoreML.framework/RemoteCoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface _MLNetworkOptions : NSObject {

	NSMutableDictionary* _networkOptions;
	long long _receiveTimeout;

}

@property (nonatomic,readonly) NSMutableDictionary * networkOptions;              //@synthesize networkOptions=_networkOptions - In the implementation block
@property (nonatomic,readonly) long long receiveTimeout;                          //@synthesize receiveTimeout=_receiveTimeout - In the implementation block
-(id)initWithOptions:(id)arg1 ;
-(const char*)port;
-(const char*)localPort;
-(unsigned long long)family;
-(BOOL)useAWDL;
-(const char*)psk;
-(BOOL)useUDP;
-(BOOL)useTLS;
-(BOOL)useBonjour;
-(const char*)networkNameIdentifier;
-(const char*)localAddr;
-(long long)receiveTimeoutValue;
-(NSMutableDictionary *)networkOptions;
-(long long)receiveTimeout;
@end

