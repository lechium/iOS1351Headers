/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardFoundation/SBFLockScreenActionContext.h>

@class NSString;

@interface SBFMutableLockScreenActionContext : SBFLockScreenActionContext

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * lockLabel; 
@property (nonatomic,retain) NSString * shortLockLabel; 
@property (nonatomic,copy) NSString * unlockDestination; 
@property (nonatomic,copy) id action; 
@property (assign,nonatomic) BOOL requiresUIUnlock; 
@property (assign,nonatomic) BOOL deactivateAwayController; 
@property (assign,nonatomic) BOOL canBypassPinLock; 
@property (assign,nonatomic) BOOL requiresAuthentication; 
@property (assign,nonatomic) BOOL wantsBiometricPresentation; 
@property (assign,nonatomic) BOOL confirmedNotInPocket; 
@property (assign,nonatomic) int source; 
@property (assign,nonatomic) int intent; 
@end
