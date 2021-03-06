/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXActivity.h>
#import <libobjc.A.dylib/PUPhotoStreamComposeServiceDelegate.h>
#import <libobjc.A.dylib/PUVideoTrimQueueControllerDelegate.h>

@protocol PXActivityItemSourceController, PLUserEditableAlbumProtocol, PUAlbumStreamActivityDelegate;
@class PUPhotoStreamComposeServiceViewController, UIViewController, PUVideoTrimQueueController, NSObject, NSString;

@interface PUAlbumStreamActivity : PXActivity <PUPhotoStreamComposeServiceDelegate, PUVideoTrimQueueControllerDelegate> {

	PUPhotoStreamComposeServiceViewController* _streamComposeVc;
	double _startTime;
	double _endTime;
	UIViewController* _presenterViewController;
	UIViewController* _activityController;
	PUVideoTrimQueueController* _trimController;
	BOOL _isPresentedFromActivityViewController;
	BOOL _destinationAlbumWasCreated;
	id<PXActivityItemSourceController> _itemSourceController;
	NSObject*<PLUserEditableAlbumProtocol> _destinationStreamingAlbum;
	UIViewController* _referenceViewController;
	id<PUAlbumStreamActivityDelegate> _albumStreamDelegate;

}

@property (nonatomic,retain) NSObject*<PLUserEditableAlbumProtocol> destinationStreamingAlbum;                                       //@synthesize destinationStreamingAlbum=_destinationStreamingAlbum - In the implementation block
@property (assign) BOOL destinationAlbumWasCreated;                                                                                  //@synthesize destinationAlbumWasCreated=_destinationAlbumWasCreated - In the implementation block
@property (assign,setter=setPresentedFromActivityViewController:,nonatomic) BOOL isPresentedFromActivityViewController;              //@synthesize isPresentedFromActivityViewController=_isPresentedFromActivityViewController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * referenceViewController;                                                      //@synthesize referenceViewController=_referenceViewController - In the implementation block
@property (assign,nonatomic,__weak) id<PUAlbumStreamActivityDelegate> albumStreamDelegate;                                           //@synthesize albumStreamDelegate=_albumStreamDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)activityCategory;
+(void)_recordRecentInvitationRecipient:(id)arg1 displayName:(id)arg2 date:(id)arg3 ;
+(id)customExportsOutputDirectoryForAsset:(id)arg1 ;
+(id)customExportsOutputDirectoryParent;
-(id)init;
-(id)activityType;
-(id)_systemImageName;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityViewController;
-(id)_activityBundleImageConfiguration;
-(BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)itemSourceController;
-(void)setItemSourceController:(id)arg1 ;
-(NSObject*<PLUserEditableAlbumProtocol>)destinationStreamingAlbum;
-(BOOL)destinationAlbumWasCreated;
-(void)photoStreamComposeService:(id)arg1 didPostComment:(id)arg2 ;
-(void)photoStreamComposeServiceDidCancel:(id)arg1 ;
-(void)controller:(id)arg1 didFinishTrimmingVideoSources:(id)arg2 ;
-(void)controller:(id)arg1 didCancelTrimmingVideoSources:(id)arg2 ;
-(void)presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAlbumStreamDelegate:(id<PUAlbumStreamActivityDelegate>)arg1 ;
-(void)setPresentedFromActivityViewController:(BOOL)arg1 ;
-(id)_selectedVideo;
-(void)_createStreamsPickerContainerWithExisting:(BOOL)arg1 ;
-(void)_handleDismissWithSuccess:(BOOL)arg1 ;
-(BOOL)_sharedAlbumAllowsAdding:(id)arg1 ;
-(void)_performPresentationOnViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_prepareToPost:(id)arg1 albumName:(id)arg2 recipients:(id)arg3 comments:(id)arg4 ;
-(void)_publishAssets:(id)arg1 withSharingInfos:(id)arg2 customExportsInfo:(id)arg3 andTrimmedVideoPathInfo:(id)arg4 toAlbum:(id)arg5 orCreateWithName:(id)arg6 comment:(id)arg7 invitationRecipients:(id)arg8 wantsPublicWebsite:(BOOL)arg9 completion:(/*^block*/id)arg10 ;
-(BOOL)isPresentedFromActivityViewController;
-(void)setDestinationStreamingAlbum:(NSObject*<PLUserEditableAlbumProtocol>)arg1 ;
-(void)setDestinationAlbumWasCreated:(BOOL)arg1 ;
-(UIViewController *)referenceViewController;
-(void)setReferenceViewController:(UIViewController *)arg1 ;
-(id<PUAlbumStreamActivityDelegate>)albumStreamDelegate;
@end

