/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBTestAlertItem : SBAlertItem {

	BOOL _shouldShowInLockScreen;
	BOOL _forcesModalAlertAppearance;
	BOOL _behavesSuperModally;
	BOOL _allowMenuButtonDismissal;
	BOOL _allowLockScreenDismissal;
	BOOL _reappearsAfterUnlock;
	BOOL _reappearsAfterLock;
	NSString* _title;

}

@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL shouldShowInLockScreen;                  //@synthesize shouldShowInLockScreen=_shouldShowInLockScreen - In the implementation block
@property (assign,nonatomic) BOOL forcesModalAlertAppearance;              //@synthesize forcesModalAlertAppearance=_forcesModalAlertAppearance - In the implementation block
@property (assign,nonatomic) BOOL behavesSuperModally;                     //@synthesize behavesSuperModally=_behavesSuperModally - In the implementation block
@property (assign,nonatomic) BOOL allowMenuButtonDismissal;                //@synthesize allowMenuButtonDismissal=_allowMenuButtonDismissal - In the implementation block
@property (assign,nonatomic) BOOL allowLockScreenDismissal;                //@synthesize allowLockScreenDismissal=_allowLockScreenDismissal - In the implementation block
@property (assign,nonatomic) BOOL reappearsAfterUnlock;                    //@synthesize reappearsAfterUnlock=_reappearsAfterUnlock - In the implementation block
@property (assign,nonatomic) BOOL reappearsAfterLock;                      //@synthesize reappearsAfterLock=_reappearsAfterLock - In the implementation block
+(id)alertItemWithShowInLockScreen:(BOOL)arg1 forcesModal:(BOOL)arg2 superModal:(BOOL)arg3 ;
-(id)description;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)allowMenuButtonDismissal;
-(BOOL)allowLockScreenDismissal;
-(BOOL)shouldShowInLockScreen;
-(BOOL)reappearsAfterLock;
-(BOOL)reappearsAfterUnlock;
-(BOOL)forcesModalAlertAppearance;
-(BOOL)behavesSuperModally;
-(void)setReappearsAfterLock:(BOOL)arg1 ;
-(void)setReappearsAfterUnlock:(BOOL)arg1 ;
-(void)setShouldShowInLockScreen:(BOOL)arg1 ;
-(void)setForcesModalAlertAppearance:(BOOL)arg1 ;
-(void)setBehavesSuperModally:(BOOL)arg1 ;
-(void)setAllowMenuButtonDismissal:(BOOL)arg1 ;
-(void)setAllowLockScreenDismissal:(BOOL)arg1 ;
@end
