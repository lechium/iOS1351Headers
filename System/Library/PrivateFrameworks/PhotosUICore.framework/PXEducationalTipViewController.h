/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class UIVisualEffectView, UIImageView, UILabel, UIButton, UIImage, NSString;

@interface PXEducationalTipViewController : UIViewController {

	UIVisualEffectView* _visualEffectView;
	UIImageView* _imageView;
	UILabel* _messageLabel;
	UIButton* _dismissButton;
	UIImage* _image;
	NSString* _message;
	NSString* _dismissButtonTitle;
	/*^block*/id _dismissHandler;

}

@property (nonatomic,copy) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * message;                         //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * dismissButtonTitle;              //@synthesize dismissButtonTitle=_dismissButtonTitle - In the implementation block
@property (nonatomic,copy) id dismissHandler;                          //@synthesize dismissHandler=_dismissHandler - In the implementation block
-(void)setTitle:(id)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)setDismissHandler:(id)arg1 ;
-(id)dismissHandler;
-(NSString *)dismissButtonTitle;
-(void)setDismissButtonTitle:(NSString *)arg1 ;
-(void)_invalidateContent;
-(void)_handleDismissButton:(id)arg1 ;
@end

