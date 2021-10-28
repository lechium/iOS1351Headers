/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMDApplicationMonitor, NSObject, LSApplicationWorkspace, NSMutableDictionary, NSString;

@interface HMDApplicationRegistry : HMFObject <LSApplicationWorkspaceObserverProtocol, HMFLogging> {

	HMDApplicationMonitor* _monitor;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	LSApplicationWorkspace* _appWorkspace;
	NSMutableDictionary* _applications;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> xpcQueue;              //@synthesize xpcQueue=_xpcQueue - In the implementation block
@property (nonatomic,retain) HMDApplicationMonitor * monitor;                    //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,retain) LSApplicationWorkspace * appWorkspace;              //@synthesize appWorkspace=_appWorkspace - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * applications;                 //@synthesize applications=_applications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(HMDApplicationMonitor *)monitor;
-(void)applicationsDidUninstall:(id)arg1 ;
-(NSMutableDictionary *)applications;
-(void)setApplications:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)xpcQueue;
-(void)setXpcQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMonitor:(HMDApplicationMonitor *)arg1 ;
-(LSApplicationWorkspace *)appWorkspace;
-(void)setAppWorkspace:(LSApplicationWorkspace *)arg1 ;
-(id)initQueue:(id)arg1 ;
-(void)startMonitoringConnection:(id)arg1 ;
-(void)stopMonitoringConnection:(id)arg1 ;
-(void)processTerminated:(id)arg1 ;
-(void)_startObservingAppUninstalls;
-(void)_stopObservingAppUninstalls;
-(id)ignoredForegroundAppBundleIdentifiers;
@end
