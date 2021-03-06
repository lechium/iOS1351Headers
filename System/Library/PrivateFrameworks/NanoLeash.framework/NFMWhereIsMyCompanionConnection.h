/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NFMWhereIsMyCompanionConnectionProtocol.h>

@class NSXPCConnection, NSString;

@interface NFMWhereIsMyCompanionConnection : NSObject <NFMWhereIsMyCompanionConnectionProtocol> {

	NSXPCConnection* _serverConnection;
	/*^block*/id _playSoundCompletion;
	/*^block*/id _playSoundAndLEDCompletion;

}

@property (retain) NSXPCConnection * serverConnection;                //@synthesize serverConnection=_serverConnection - In the implementation block
@property (nonatomic,copy) id playSoundCompletion;                    //@synthesize playSoundCompletion=_playSoundCompletion - In the implementation block
@property (nonatomic,copy) id playSoundAndLEDCompletion;              //@synthesize playSoundAndLEDCompletion=_playSoundAndLEDCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDeviceConnection;
-(id)init;
-(NSXPCConnection *)serverConnection;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(void)applicationIdentifierWithReply:(/*^block*/id)arg1 ;
-(void)playedSound:(BOOL)arg1 ;
-(void)playedSoundAndLED:(BOOL)arg1 ;
-(void)playSoundOnCompanionWithCompletion:(/*^block*/id)arg1 ;
-(void)playSoundAndLightsOnCompanionWithCompletion:(/*^block*/id)arg1 ;
-(id)playSoundCompletion;
-(void)setPlaySoundCompletion:(id)arg1 ;
-(id)playSoundAndLEDCompletion;
-(void)setPlaySoundAndLEDCompletion:(id)arg1 ;
@end

