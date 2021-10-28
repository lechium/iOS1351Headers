/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@protocol FIUIHealthSettingsForceUpdatable;
@class UIView;

@interface FIUIHealthSettingsTableViewCell : UITableViewCell {

	UIView* _inputView;
	id<FIUIHealthSettingsForceUpdatable> _forceUpdatable;

}

@property (assign,nonatomic,__weak) id<FIUIHealthSettingsForceUpdatable> forceUpdatable;              //@synthesize forceUpdatable=_forceUpdatable - In the implementation block
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(id)inputView;
-(void)setInputView:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setForceUpdatable:(id<FIUIHealthSettingsForceUpdatable>)arg1 ;
-(id<FIUIHealthSettingsForceUpdatable>)forceUpdatable;
@end
