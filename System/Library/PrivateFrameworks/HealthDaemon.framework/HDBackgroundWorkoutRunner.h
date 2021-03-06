/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HDProcessStateObserver.h>
#import <libobjc.A.dylib/HDAssertionObserver.h>

@protocol OS_dispatch_queue;
@class HDDaemon, HDAssertionManager, NSObject, NSString;

@interface HDBackgroundWorkoutRunner : NSObject <HDProcessStateObserver, HDAssertionObserver> {

	HDDaemon* _daemon;
	HDAssertionManager* _assertionManager;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(void)assertionManager:(id)arg1 assertionTaken:(id)arg2 ;
-(id)initWithDaemon:(id)arg1 ;
-(void)processDidEnterForeground:(id)arg1 ;
-(BOOL)_queue_hasBackgroundPermissionForBundleIdentifier:(id)arg1 errorOut:(id*)arg2 ;
-(id)_queue_acquireBKSAssertionForClient:(id)arg1 ;
-(id)_queue_acquireCLInUseAssertionForClient:(id)arg1 ;
-(void)_queue_releaseCLInUseAssertion:(id)arg1 forClient:(id)arg2 ;
-(void)_queue_releaseBKSAssertion:(id)arg1 forClient:(id)arg2 ;
-(id)takeBackgroundRunningAssertionForOwnerIdentifier:(id)arg1 client:(id)arg2 includeCoreLocationAssertion:(BOOL)arg3 ;
-(BOOL)hasBackgroundPermissionForBundleIdentifier:(id)arg1 errorOut:(id*)arg2 ;
@end

