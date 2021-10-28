/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCMMActionPerformer.h>
#import <libobjc.A.dylib/PXCMMPhotoKitActionPerformer.h>

@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitAcceptMomentShareActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (nonatomic,readonly) PXCMMPhotoKitSession * session; 
-(void)performBackgroundTask;
-(BOOL)canPerformActionWithSession:(id)arg1 ;
@end
