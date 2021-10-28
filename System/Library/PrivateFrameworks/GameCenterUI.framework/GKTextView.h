/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UITextView.h>

@class GKTextStyle, GKLabel, NSString, NSAttributedString;

@interface GKTextView : UITextView {

	GKTextStyle* __baseStyle;
	GKTextStyle* _appliedStyle;
	GKLabel* _placeholderLabel;

}

@property (nonatomic,retain) GKTextStyle * appliedStyle;                                  //@synthesize appliedStyle=_appliedStyle - In the implementation block
@property (assign,nonatomic) GKLabel * placeholderLabel;                                  //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,retain) NSString * placeholderText; 
@property (nonatomic,retain) NSAttributedString * attributedPlaceholderText; 
@property (nonatomic,retain) GKTextStyle * _baseStyle;                                    //@synthesize _baseStyle=__baseStyle - In the implementation block
+(void)initialize;
-(void)_UIAppearance_set_baseStyle:(id)arg1 ;
-(void)dealloc;
-(void)setText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAttributedText:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(id)insertDictationResultPlaceholder;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(GKLabel *)placeholderLabel;
-(void)setPlaceholderLabel:(GKLabel *)arg1 ;
-(void)applyTextStyle:(id)arg1 ;
-(void)set_baseStyle:(GKTextStyle *)arg1 ;
-(void)replayAndApplyStyle;
-(void)updatePlaceholderVisibility;
-(void)setAttributedPlaceholderText:(NSAttributedString *)arg1 ;
-(void)textStorageDidChangeNotification:(id)arg1 ;
-(NSAttributedString *)attributedPlaceholderText;
-(GKTextStyle *)_baseStyle;
-(GKTextStyle *)appliedStyle;
-(void)setAppliedStyle:(GKTextStyle *)arg1 ;
@end
