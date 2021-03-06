/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXRelatedEntry;
@class UIViewController;

@interface _PXUIRelatedPreviewOrbContext : NSObject {

	UIViewController* _previewViewController;
	id<PXRelatedEntry> _relatedEntry;

}

@property (nonatomic,retain) UIViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (nonatomic,retain) id<PXRelatedEntry> relatedEntry;                       //@synthesize relatedEntry=_relatedEntry - In the implementation block
-(void)setPreviewViewController:(UIViewController *)arg1 ;
-(UIViewController *)previewViewController;
-(id<PXRelatedEntry>)relatedEntry;
-(void)setRelatedEntry:(id<PXRelatedEntry>)arg1 ;
@end

