/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface PUReviewScreenDoneButton : UIButton {

	BOOL __needsUpdate;
	unsigned long long _preferredStyle;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (assign,nonatomic) BOOL _needsUpdate;                              //@synthesize _needsUpdate=__needsUpdate - In the implementation block
@property (assign,nonatomic) unsigned long long preferredStyle;              //@synthesize preferredStyle=_preferredStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
+(id)doneButton;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)setPreferredStyle:(unsigned long long)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(unsigned long long)preferredStyle;
-(BOOL)_needsUpdate;
-(void)_updateIfNeeded;
-(void)set_needsUpdate:(BOOL)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
@end

