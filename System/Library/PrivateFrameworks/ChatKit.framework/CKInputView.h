/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIInputView.h>

@interface CKInputView : UIInputView {

	long long _lastContentSizeInterfaceOrientation;
	CGSize _lastContentSize;

}

@property (assign,nonatomic) CGSize lastContentSize;                                     //@synthesize lastContentSize=_lastContentSize - In the implementation block
@property (assign,nonatomic) long long lastContentSizeInterfaceOrientation;              //@synthesize lastContentSizeInterfaceOrientation=_lastContentSizeInterfaceOrientation - In the implementation block
+(CGSize)defaultContentSize;
+(CGSize)defaultContentSizeLargerThanKeyboard:(BOOL*)arg1 ;
-(CGSize)intrinsicContentSize;
-(CGSize)lastContentSize;
-(long long)lastContentSizeInterfaceOrientation;
-(void)setLastContentSize:(CGSize)arg1 ;
-(void)setLastContentSizeInterfaceOrientation:(long long)arg1 ;
@end

