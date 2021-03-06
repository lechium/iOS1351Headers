/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXComposeRecipientViewDelegate;
@class UIFont, NSString, UIButton, NSArray;

@interface PXComposeRecipientView : UIView {

	SCD_Struct_PX44 _delegateRespondsTo;
	BOOL _separatorHidden;
	id<PXComposeRecipientViewDelegate> _delegate;
	UIFont* _baseFont;
	NSString* _text;
	NSString* _label;
	UIButton* _addButton;
	long long _maxRecipients;
	NSArray* _recipients;

}

@property (assign,nonatomic,__weak) id<PXComposeRecipientViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIFont * baseFont;                                             //@synthesize baseFont=_baseFont - In the implementation block
@property (nonatomic,copy) NSString * text;                                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * label;                                                  //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIButton * addButton;                                          //@synthesize addButton=_addButton - In the implementation block
@property (assign,nonatomic) long long maxRecipients;                                         //@synthesize maxRecipients=_maxRecipients - In the implementation block
@property (assign,getter=isSeparatorHidden,nonatomic) BOOL separatorHidden;                   //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recipients;                                     //@synthesize recipients=_recipients - In the implementation block
-(id)init;
-(id<PXComposeRecipientViewDelegate>)delegate;
-(void)setDelegate:(id<PXComposeRecipientViewDelegate>)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSArray *)recipients;
-(void)addRecipient:(id)arg1 ;
-(void)removeRecipient:(id)arg1 ;
-(void)addRecipients:(id)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(BOOL)isSeparatorHidden;
-(void)removeRecipients:(id)arg1 ;
-(UIButton *)addButton;
-(UIFont *)baseFont;
-(long long)maxRecipients;
-(void)setMaxRecipients:(long long)arg1 ;
@end

