/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUOneUpPresentationHelperAssetDisplayDelegate.h>

@protocol PUPhotoBrowserZoomTransitionDelegate;
@class NSSet, NSString;

@interface PUPhotoBrowserOneUpPresentationAdaptor : NSObject <PUOneUpPresentationHelperAssetDisplayDelegate> {

	struct {
		BOOL respondsToTransitionImageForPhotoToken;
		BOOL respondsToWillBeginForOperation;
		BOOL respondsToDidFinishForOperation;
		BOOL respondsToWillBeginAnimationForOperation;
		BOOL respondsToDidFinishAnimationForOperation;
		BOOL respondsToShouldHidePhotosTokens;
		BOOL respondsToSetVisibilityForPhotoToken;
	}  _zoomTransitionDelegateFlags;
	BOOL __shouldDisableScroll;
	id<PUPhotoBrowserZoomTransitionDelegate> _zoomTransitionDelegate;
	NSSet* __photoTokensForHiddenAssetReferences;

}

@property (setter=_setPhotoTokensForHiddenAssetReferences:,nonatomic,copy) NSSet * _photoTokensForHiddenAssetReferences;              //@synthesize _photoTokensForHiddenAssetReferences=__photoTokensForHiddenAssetReferences - In the implementation block
@property (assign,setter=_setShouldDisableScroll:,nonatomic) BOOL _shouldDisableScroll;                                               //@synthesize _shouldDisableScroll=__shouldDisableScroll - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoBrowserZoomTransitionDelegate> zoomTransitionDelegate;                                  //@synthesize zoomTransitionDelegate=_zoomTransitionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setZoomTransitionDelegate:(id<PUPhotoBrowserZoomTransitionDelegate>)arg1 ;
-(id)oneUpPresentationHelper:(id)arg1 currentImageForAssetReference:(id)arg2 ;
-(void)oneUpPresentationHelper:(id)arg1 shouldDisableScroll:(BOOL)arg2 ;
-(CGRect)oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(UIEdgeInsets*)arg3 contentsRect:(CGRect*)arg4 ;
-(void)oneUpPresentationHelper:(id)arg1 scrollAssetReferenceToVisible:(id)arg2 ;
-(void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2 ;
-(id)_photoTokenForAssetReference:(id)arg1 ;
-(void)_setPhotoTokensForHiddenAssetReferences:(id)arg1 ;
-(void)_setShouldDisableScroll:(BOOL)arg1 ;
-(id<PUPhotoBrowserZoomTransitionDelegate>)zoomTransitionDelegate;
-(NSSet *)_photoTokensForHiddenAssetReferences;
-(BOOL)_shouldDisableScroll;
@end
