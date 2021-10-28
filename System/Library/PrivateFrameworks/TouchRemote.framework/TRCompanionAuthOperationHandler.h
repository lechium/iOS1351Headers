/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:01 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TROperationHandler.h>

@class NSString;

@interface TRCompanionAuthOperationHandler : NSObject <TROperationHandler> {

	/*^block*/id _companionAuthHandler;

}

@property (nonatomic,copy) id companionAuthHandler;                 //@synthesize companionAuthHandler=_companionAuthHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerMessageHandlersForSession:(id)arg1 ;
-(void)_handleCompanionAuthenticationRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(id)initWithCompanionAuthHandler:(/*^block*/id)arg1 ;
-(id)companionAuthHandler;
-(void)setCompanionAuthHandler:(id)arg1 ;
@end
