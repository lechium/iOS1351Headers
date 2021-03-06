/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSArray;

@interface PUVideoListContentUnavailableView : UIView {

	BOOL _needsUpdateConstraints;
	UILabel* _messageLabel1;
	UILabel* _messageLabel2;
	NSArray* _constraints;
	CGRect _safeAreaLayoutGuideFrameRect;

}

@property (nonatomic,retain) UILabel * messageLabel1;                                  //@synthesize messageLabel1=_messageLabel1 - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel2;                                  //@synthesize messageLabel2=_messageLabel2 - In the implementation block
@property (setter=_setConstraints:,nonatomic,copy) NSArray * constraints;              //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic) CGRect safeAreaLayoutGuideFrameRect;                      //@synthesize safeAreaLayoutGuideFrameRect=_safeAreaLayoutGuideFrameRect - In the implementation block
-(NSArray *)constraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(id)_messageLabel;
-(void)_setConstraints:(id)arg1 ;
-(void)_invalidateConstraints;
-(void)_updateConstraintsIfNeeded;
-(void)_setMessageText:(id)arg1 toLabel:(id)arg2 ;
-(CGRect)safeAreaLayoutGuideFrameRect;
-(void)setSafeAreaLayoutGuideFrameRect:(CGRect)arg1 ;
-(UILabel *)messageLabel1;
-(void)setMessageLabel1:(UILabel *)arg1 ;
-(UILabel *)messageLabel2;
-(void)setMessageLabel2:(UILabel *)arg1 ;
@end

