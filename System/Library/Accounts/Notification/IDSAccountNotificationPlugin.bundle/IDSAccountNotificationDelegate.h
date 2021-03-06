/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Accounts/Notification/IDSAccountNotificationPlugin.bundle/IDSAccountNotificationPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface IDSAccountNotificationDelegate : NSObject <ACDAccountNotificationPlugin> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _setupRequestPending;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(id)_findExistingIdentityServicesACAccountWithUserName:(id)arg1 inStore:(id)arg2 ;
-(id)_passwordEquivalentTokenOrPasswordFromAccount:(id)arg1 ;
-(void)_iCloudSignInBasedOnAccount:(id)arg1 inStore:(id)arg2 ;
-(void)_iCloudSignOut;
-(void)_iCloudModifyBasedOnUsername:(id)arg1 ;
-(void)_iTunesSignInBasedOnAccount:(id)arg1 ;
-(void)_iTunesSignOut;
-(void)_notifyRemoteDeviceOfIDMSAccountForAccount:(id)arg1 store:(id)arg2 changeType:(int)arg3 ;
@end

