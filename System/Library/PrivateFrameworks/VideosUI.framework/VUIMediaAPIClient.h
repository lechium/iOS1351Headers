/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AMSURLSession, AMSMediaTokenService, NSString;

@interface VUIMediaAPIClient : NSObject {

	AMSURLSession* _session;
	AMSMediaTokenService* _tokenService;
	NSString* _clientIdentifier;

}

@property (nonatomic,retain) AMSURLSession * session;                          //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) AMSMediaTokenService * tokenService;              //@synthesize tokenService=_tokenService - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifier;                      //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
+(id)sharedInstance;
+(void)initializeWithAppleTVClientIdentifier;
-(AMSURLSession *)session;
-(void)setSession:(AMSURLSession *)arg1 ;
-(id)_createSession;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(id)initWithClientIdentifier:(id)arg1 ;
-(AMSMediaTokenService *)tokenService;
-(void)fetchContentForUrl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_createTokenServiceWithSession:(id)arg1 ;
-(void)setTokenService:(AMSMediaTokenService *)arg1 ;
@end

