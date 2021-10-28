/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class WFWorkflowIcon, NSData, UIImageView;

@interface WFWorkflowWizardNameIconButton : UIButton {

	WFWorkflowIcon* _icon;
	NSData* _customImageData;
	UIImageView* _backgroundImageView;

}

@property (assign,nonatomic,__weak) UIImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,readonly) WFWorkflowIcon * icon;                               //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSData * customImageData;                            //@synthesize customImageData=_customImageData - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(WFWorkflowIcon *)icon;
-(UIImageView *)backgroundImageView;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(NSData *)customImageData;
-(void)setIcon:(id)arg1 customImageData:(id)arg2 ;
@end
