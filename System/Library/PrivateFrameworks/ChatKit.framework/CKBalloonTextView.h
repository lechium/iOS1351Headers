/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UITextView.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>

@protocol CKBalloonTextViewInteractionDelegate;
@class NSAttributedString, NSString;

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate> {

	NSAttributedString* _attributedText;
	id<CKBalloonTextViewInteractionDelegate> _interactionDelegate;

}

@property (nonatomic,copy) NSAttributedString * attributedText;                                                //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic,__weak) id<CKBalloonTextViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textView;
-(NSString *)description;
-(void)setInteractionDelegate:(id<CKBalloonTextViewInteractionDelegate>)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)didMoveToWindow;
-(void)_interactionStartedFromPreviewItemController:(id)arg1 ;
-(void)_interactionStoppedFromPreviewItemController:(id)arg1 ;
-(id)initReadonlyAndUnselectableWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(id<CKBalloonTextViewInteractionDelegate>)interactionDelegate;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 isSingleLine:(BOOL*)arg3 ;
-(id)_textWithHyphenationAppliedForAttributedText:(id)arg1 ;
@end
