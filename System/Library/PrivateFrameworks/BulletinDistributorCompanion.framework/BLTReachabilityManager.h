/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PCInterfaceMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface BLTReachabilityManager : NSObject <PCInterfaceMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _updateQueue;
	BOOL _internetReachable;

}

@property (getter=isInternetReachable) BOOL internetReachable;              //@synthesize internetReachable=_internetReachable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)isInternetReachable;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(void)interfaceRadioHotnessChanged:(id)arg1 ;
-(void)setInternetReachable:(BOOL)arg1 ;
@end

