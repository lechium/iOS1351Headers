/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class PUPhotosPickerViewController, PUPhotosPickerViewControllerSpec, PHPhotosPickerOptions;

@interface PHPhotosPickerViewController : UIViewController {

	PUPhotosPickerViewController* _photosPickerViewController;
	PUPhotosPickerViewControllerSpec* _spec;
	PHPhotosPickerOptions* _options;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) PHPhotosPickerOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)init;
-(PHPhotosPickerOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_commonPHPhotosPickerViewControllerInitializer;
-(void)_handlePickerViewControllerDidFinish:(id)arg1 ;
-(BOOL)_updateSpecIfNeeded;
@end

