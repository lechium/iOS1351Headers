/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:54 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIImageView.h>

@class UIImage;

@interface OBTintInheritingImageView : UIImageView {

	UIImage* _originalImage;

}

@property (nonatomic,retain) UIImage * originalImage;              //@synthesize originalImage=_originalImage - In the implementation block
-(void)setImage:(id)arg1 ;
-(void)tintColorDidChange;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(UIImage *)originalImage;
-(void)setOriginalImage:(UIImage *)arg1 ;
@end
