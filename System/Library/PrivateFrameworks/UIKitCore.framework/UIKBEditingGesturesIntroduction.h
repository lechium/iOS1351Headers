/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKBTutorialModalDisplay.h>

@class NSLayoutConstraint;

@interface UIKBEditingGesturesIntroduction : UIKBTutorialModalDisplay {

	NSLayoutConstraint* _topPaddingConstraint;

}

@property (nonatomic,readonly) long long appearance; 
@property (nonatomic,retain) NSLayoutConstraint * topPaddingConstraint;              //@synthesize topPaddingConstraint=_topPaddingConstraint - In the implementation block
+(BOOL)shouldShowEditingIntroduction;
-(id)textBodyFont;
-(id)buttonTitle;
-(void)extraButtonTapAction;
-(id)mediaContents;
-(id)textTitleDescriptions;
-(id)textBodyDescriptions;
-(void)updateConstraints;
-(NSLayoutConstraint *)topPaddingConstraint;
-(id)animatedTutorialViewNamed:(id)arg1 ofType:(id)arg2 needsFrame:(BOOL)arg3 ;
-(void)setTopPaddingConstraint:(NSLayoutConstraint *)arg1 ;
-(double)pagingInterval;
-(BOOL)presentsFullScreen;
@end

