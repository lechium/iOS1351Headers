/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDUserMessagePolicy.h>

@interface HMDMutableUserMessagePolicy : HMDUserMessagePolicy

@property (assign) unsigned long long userPrivilege; 
@property (assign) BOOL requiresRemoteAccess; 
@property (assign) BOOL requiresCameraStreamingAccess; 
+(id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(BOOL)arg3 ;
+(id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(BOOL)arg3 requiresCameraStreamingAccess:(BOOL)arg4 ;
-(void)setUserPrivilege:(unsigned long long)arg1 ;
-(void)setRequiresRemoteAccess:(BOOL)arg1 ;
-(void)setRequiresCameraStreamingAccess:(BOOL)arg1 ;
@end
