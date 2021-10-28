/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <CameraEditKit/CEKBadgeTextView.h>

@interface CAMLivePhotoBadge : CEKBadgeTextView {

	long long _irisMode;

}

@property (assign,nonatomic) long long irisMode;              //@synthesize irisMode=_irisMode - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setIrisMode:(long long)arg1 ;
-(long long)irisMode;
-(void)_updateTextAndColors;
@end
