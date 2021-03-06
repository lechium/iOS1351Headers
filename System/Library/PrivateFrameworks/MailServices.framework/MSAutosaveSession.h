/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MSDAutosaveSessionProtocol, MSDAutosaveProtocol;
@class NSString;

@interface MSAutosaveSession : NSObject {

	NSString* _autosaveIdentifier;
	id<MSDAutosaveSessionProtocol> _remoteSession;
	id<MSDAutosaveProtocol> _remoteService;

}

@property (nonatomic,retain) id<MSDAutosaveSessionProtocol> remoteSession;              //@synthesize remoteSession=_remoteSession - In the implementation block
@property (nonatomic,retain) id<MSDAutosaveProtocol> remoteService;                     //@synthesize remoteService=_remoteService - In the implementation block
@property (nonatomic,copy,readonly) NSString * autosaveIdentifier;                      //@synthesize autosaveIdentifier=_autosaveIdentifier - In the implementation block
+(id)log;
-(NSString *)autosaveIdentifier;
-(id<MSDAutosaveProtocol>)remoteService;
-(void)setRemoteService:(id<MSDAutosaveProtocol>)arg1 ;
-(id)initWithIdentifier:(id)arg1 remoteSession:(id)arg2 remoteService:(id)arg3 ;
-(void)didReconnectRemoteSession:(id)arg1 remoteService:(id)arg2 ;
-(void)remoteSessionDisconnectedWithError:(id)arg1 ;
-(void)setRemoteSession:(id<MSDAutosaveSessionProtocol>)arg1 ;
-(id<MSDAutosaveSessionProtocol>)remoteSession;
@end

