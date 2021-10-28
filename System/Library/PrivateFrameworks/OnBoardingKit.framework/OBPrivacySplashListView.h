/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIStackView.h>

@class UITextView, NSMutableArray;

@interface OBPrivacySplashListView : UIStackView {

	BOOL _displayingPrivacyPane;
	UITextView* _footerTextView;
	NSMutableArray* _textViews;
	NSMutableArray* _stackedIconTextLists;

}

@property (assign) BOOL displayingPrivacyPane;                                   //@synthesize displayingPrivacyPane=_displayingPrivacyPane - In the implementation block
@property (nonatomic,retain) NSMutableArray * textViews;                         //@synthesize textViews=_textViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * stackedIconTextLists;              //@synthesize stackedIconTextLists=_stackedIconTextLists - In the implementation block
@property (nonatomic,readonly) UITextView * footerTextView;                      //@synthesize footerTextView=_footerTextView - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2 displayingPrivacyPane:(BOOL)arg3 ;
-(void)setDisplayingPrivacyPane:(BOOL)arg1 ;
-(NSMutableArray *)textViews;
-(NSMutableArray *)stackedIconTextLists;
-(void)updateSpacing;
-(void)updateFonts;
-(void)updateTextAlignment;
-(BOOL)displayingPrivacyPane;
-(id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2 ;
-(UITextView *)footerTextView;
-(void)setTextViews:(NSMutableArray *)arg1 ;
-(void)setStackedIconTextLists:(NSMutableArray *)arg1 ;
@end
