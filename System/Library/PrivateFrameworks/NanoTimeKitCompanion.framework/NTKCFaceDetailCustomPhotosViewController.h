/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKCNavigationController.h>
#import <libobjc.A.dylib/NTKCFaceDetailCustomPhotosViewControllerDelegate.h>

@class _NTKCFaceDetailCustomPhotosViewController, NTKFace, NTKCompanionCustomPhotosEditor, NSString;

@interface NTKCFaceDetailCustomPhotosViewController : NTKCNavigationController <NTKCFaceDetailCustomPhotosViewControllerDelegate> {

	_NTKCFaceDetailCustomPhotosViewController* _implementationVC;
	NTKFace* _face;
	NTKCompanionCustomPhotosEditor* _editor;

}

@property (nonatomic,retain) NTKCompanionCustomPhotosEditor * editor;                                           //@synthesize editor=_editor - In the implementation block
@property (nonatomic,retain) NTKFace * face;                                                                    //@synthesize face=_face - In the implementation block
@property (nonatomic,readonly) BOOL inGallery; 
@property (assign,nonatomic,__weak) id<NTKCFaceDetailCustomPhotosViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFace:(NTKFace *)arg1 ;
-(NTKFace *)face;
-(NTKCompanionCustomPhotosEditor *)editor;
-(void)setEditor:(NTKCompanionCustomPhotosEditor *)arg1 ;
-(BOOL)inGallery;
-(id)initWithPhotosEditor:(id)arg1 forFace:(id)arg2 inGallery:(BOOL)arg3 faceView:(id)arg4 externalImagesSet:(BOOL)arg5 ;
-(void)customPhotosControllerDidFinish:(id)arg1 ;
@end
