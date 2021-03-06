/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class PUPhotoStreamRecipientViewController, UIBarButtonItem, PLCloudSharedAlbum;

@interface PUAddSubscribersViewController : UIViewController {

	PUPhotoStreamRecipientViewController* _composeRecipientController;
	UIBarButtonItem* _addButton;
	PLCloudSharedAlbum* _album;

}

@property (nonatomic,readonly) PLCloudSharedAlbum * album;              //@synthesize album=_album - In the implementation block
-(void)dealloc;
-(PLCloudSharedAlbum *)album;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_dismiss;
-(id)contentScrollView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)initWithSharedStream:(id)arg1 ;
-(void)_addButtonHandler;
-(void)_cancelButtonHandler;
-(void)_saveAndDismiss;
-(BOOL)_validateRecipientsToAdd:(id)arg1 ;
-(void)recipientViewControllerDidAddRecipient:(id)arg1 ;
-(void)recipientViewControllerDidRemoveRecipient:(id)arg1 ;
-(void)recipientViewController:(id)arg1 didEnterText:(id)arg2 ;
@end

