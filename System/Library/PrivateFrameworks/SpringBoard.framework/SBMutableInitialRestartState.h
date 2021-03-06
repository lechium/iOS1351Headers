/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBInitialRestartState.h>

@class SBBootDefaults;

@interface SBMutableInitialRestartState : SBInitialRestartState

@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated; 
@property (assign,getter=isInLostMode,nonatomic) BOOL inLostMode; 
@property (assign,getter=isBlocked,nonatomic) BOOL blocked; 
@property (assign,nonatomic) BOOL requiresSetup; 
@property (assign,nonatomic) BOOL hasPasscodeSet; 
@property (assign,nonatomic) BOOL shouldNeverLock; 
@property (assign,getter=isLoginSession,nonatomic) BOOL loginSession; 
@property (nonatomic,retain) SBBootDefaults * bootDefaults; 
@property (assign,getter=isForSimulator,nonatomic) BOOL forSimulator; 
@end

