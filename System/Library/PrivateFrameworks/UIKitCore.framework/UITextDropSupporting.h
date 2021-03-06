/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UITextDropSupporting <UITextDroppable,UITextPasteConfigurationSupporting>
@property (assign,nonatomic) CGPoint contentOffsetForSameViewDrops; 
@optional
-(id)_attributedStringForInsertionOfAttributedString:(id)arg1;
-(void)sanitizeAttributedText:(id)arg1;
-(CGPoint)contentOffsetForSameViewDrops;
-(void)setContentOffsetForSameViewDrops:(CGPoint)arg1;

@required
-(BOOL)allowsEditingTextAttributes;
-(BOOL)canBecomeDropResponder;
-(void)becomeDropResponder;
-(void)resignDropResponderWithDropPerformed:(BOOL)arg1;
-(void)droppingStarted;
-(void)droppingFinished;

@end

