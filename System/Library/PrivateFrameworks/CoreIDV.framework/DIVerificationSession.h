/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class DIVClient, DIVerificationSessionContext, NSError;

@interface DIVerificationSession : NSObject {

	DIVClient* _client;
	DIVerificationSessionContext* _context;
	NSError* _configureError;

}

@property (nonatomic,readonly) DIVerificationSessionContext * context;              //@synthesize context=_context - In the implementation block
+(void)concludeVerification:(id)arg1 ;
-(void)invalidate;
-(DIVerificationSessionContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)performVerificationWithAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)shareVerificationResultWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getVerificationResultWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)concludeVerification;
@end
