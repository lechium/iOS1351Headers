/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:02 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRExternalDeviceTransport.h>

@class _MRDeviceInfoMessageProtobuf, NSNetService;

@interface MRNetServiceTransport : MRExternalDeviceTransport {

	_MRDeviceInfoMessageProtobuf* _deviceInfo;
	BOOL _requiresCustomPairing;
	NSNetService* _netService;

}

@property (nonatomic,retain) NSNetService * netService;               //@synthesize netService=_netService - In the implementation block
@property (assign,nonatomic) BOOL requiresCustomPairing; 
+(id)createDeviceInfoFromNetService:(id)arg1 ;
+(id)createDeviceInfoFromTXTRecord:(id)arg1 ;
-(id)description;
-(id)name;
-(long long)port;
-(id)error;
-(void)reset;
-(long long)connectionType;
-(id)hostname;
-(BOOL)getInputStream:(id*)arg1 outputStream:(id*)arg2 ;
-(id)deviceInfo;
-(id)initWithNetService:(id)arg1 ;
-(NSNetService *)netService;
-(BOOL)requiresCustomPairing;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1 ;
-(void)setRequiresCustomPairing:(BOOL)arg1 ;
-(void)setNetService:(NSNetService *)arg1 ;
-(void)updateDeviceInfoWithTXTRecord:(id)arg1 ;
-(BOOL)shouldUseSystemAuthenticationPrompt;
@end

