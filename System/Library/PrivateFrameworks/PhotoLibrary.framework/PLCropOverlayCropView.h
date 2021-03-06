/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface PLCropOverlayCropView : UIView {

	CGRect _cropRect;
	UIView* _aboveCropView;
	UIView* _cropRectView;
	UIView* _belowCropView;

}
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(void)_updateCropRectIfNeeded;
-(void)_removeCropViews;
@end

