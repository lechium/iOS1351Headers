/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, NSAttributedString;

@interface FIUIPushyLabelView : UIView {

	NSArray* _currentSnapshotCharacters;
	NSArray* _incomingSnapshotCharacters;
	NSAttributedString* _currentAttributedText;
	id _pendingAttributedString;
	unsigned long long _pendingDirection;
	BOOL _pendingPushPerCharacter;
	double _currentAnimationFinishTime;

}
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_snapshotCharactersFromAttributedText:(id)arg1 perCharacter:(BOOL)arg2 ;
-(void)_setIncomingSnapshotCharacters:(id)arg1 ;
-(void)_layoutViewsAtIndex:(unsigned long long)arg1 forPushEndWithDirection:(unsigned long long)arg2 ;
-(void)_swapCurrentSnapshotCharacters:(id)arg1 forIncomingCharacters:(id)arg2 ;
-(void)_layoutForPushStartWithDirection:(unsigned long long)arg1 ;
-(void)_processPendingStringIfNeeded;
-(void)pushToAttributedText:(id)arg1 direction:(unsigned long long)arg2 perCharacter:(BOOL)arg3 ;
-(void)_setCurrentSnapshotCharacters:(id)arg1 ;
-(void)sizeToFitAttributedText:(id)arg1 ;
-(void)setAttributedTextUnanimated:(id)arg1 ;
-(id)currentAttributedText;
@end
