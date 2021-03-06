/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UINavigationController.h>

@protocol PUPhotoPickerRemoteNavigationControllerDelegate;
@interface PUPhotoPickerRemoteNavigationController : UINavigationController {

	BOOL _initialized;
	id<PUPhotoPickerRemoteNavigationControllerDelegate> _remoteViewControllerdelegate;

}

@property (assign,getter=isInitialized,nonatomic) BOOL initialized;                                                                //@synthesize initialized=_initialized - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoPickerRemoteNavigationControllerDelegate> remoteViewControllerdelegate;              //@synthesize remoteViewControllerdelegate=_remoteViewControllerdelegate - In the implementation block
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithRootViewController:(id)arg1 ;
-(BOOL)isInitialized;
-(void)setInitialized:(BOOL)arg1 ;
-(id<PUPhotoPickerRemoteNavigationControllerDelegate>)remoteViewControllerdelegate;
-(void)setRemoteViewControllerdelegate:(id<PUPhotoPickerRemoteNavigationControllerDelegate>)arg1 ;
@end

