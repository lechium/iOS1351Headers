/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUNavigationController.h>
#import <libobjc.A.dylib/PUPhotosSharingPresentationCoordinator.h>

@class PUPhotosSharingViewController;

@interface PUPhotosSharingNavigationController : PUNavigationController <PUPhotosSharingPresentationCoordinator> {

	BOOL _didStartDelayingPresentation;
	PUPhotosSharingViewController* _sharingViewController;

}
-(void)_viewControllerPresentationDidInitiate;
-(id)initWithSharingViewController:(id)arg1 ;
-(void)shareSheetIsReadyForPresentation;
@end

