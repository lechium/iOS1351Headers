/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SWMessageHandler.h>
#import <libobjc.A.dylib/SWDatastoreObserver.h>
#import <libobjc.A.dylib/SWDatastoreSynchronizationManager.h>

@protocol SWDatastoreSynchronizationManager <NSObject>
@end


@protocol SWDatastoreManager, SWDatastoreFactory, SWScriptsManager, SWSessionManager, SWLogger;
@class NSString;

@interface SWDatastoreSynchronizationManager : NSObject <SWMessageHandler, SWDatastoreObserver, SWDatastoreSynchronizationManager> {

	id<SWDatastoreManager> _datastoreManager;
	id<SWDatastoreFactory> _settingsFactory;
	id<SWScriptsManager> _scriptsManager;
	id<SWSessionManager> _sessionManager;
	id<SWLogger> _logger;

}

@property (nonatomic,readonly) id<SWDatastoreManager> datastoreManager;              //@synthesize datastoreManager=_datastoreManager - In the implementation block
@property (nonatomic,readonly) id<SWDatastoreFactory> settingsFactory;               //@synthesize settingsFactory=_settingsFactory - In the implementation block
@property (nonatomic,readonly) id<SWScriptsManager> scriptsManager;                  //@synthesize scriptsManager=_scriptsManager - In the implementation block
@property (nonatomic,readonly) id<SWSessionManager> sessionManager;                  //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,readonly) id<SWLogger> logger;                                  //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SWLogger>)logger;
-(id<SWSessionManager>)sessionManager;
-(id<SWScriptsManager>)scriptsManager;
-(void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2 ;
-(id<SWDatastoreManager>)datastoreManager;
-(id)initWithDatastoreManager:(id)arg1 settingsFactory:(id)arg2 scriptsManager:(id)arg3 messageHandlerManager:(id)arg4 sessionManager:(id)arg5 logger:(id)arg6 ;
-(void)datastoreManager:(id)arg1 didChangeFromDatastore:(id)arg2 originatingSession:(id)arg3 ;
-(id<SWDatastoreFactory>)settingsFactory;
@end
