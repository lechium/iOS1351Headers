/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoard/FrontBoard-Structs.h>
#import <FrontBoard/FBProcess.h>

@class FBSExtensionInfo, FBProcess;

@interface FBExtensionProcess : FBProcess {

	FBSExtensionInfo* _extensionInfo;
	int _hostPID;
	os_unfair_lock_s _hostProcessLock;
	FBProcess* _lock_hostProcess;

}

@property (nonatomic,readonly) FBSExtensionInfo * extensionInfo;              //@synthesize extensionInfo=_extensionInfo - In the implementation block
@property (nonatomic,readonly) FBProcess * hostProcess; 
@property (nonatomic,readonly) int hostPID;                                   //@synthesize hostPID=_hostPID - In the implementation block
-(id)succinctDescriptionBuilder;
-(FBProcess *)hostProcess;
-(int)hostPID;
-(id)initWithHandle:(id)arg1 identity:(id)arg2 hostPID:(int)arg3 ;
-(id)initWithHandle:(id)arg1 identity:(id)arg2 executionContext:(id)arg3 ;
-(id)initWithHandle:(id)arg1 identity:(id)arg2 hostProcess:(id)arg3 ;
-(BOOL)isExtensionProcess;
-(FBSExtensionInfo *)extensionInfo;
@end

