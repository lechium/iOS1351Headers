/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXGStringSource.h>
#import <libobjc.A.dylib/PXGNamedImageSource.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, PXAssetCollectionReference, PXCuratedLibraryChapterHeaderLayoutSpec, NSString, NSDictionary, PXNumberAnimator;

@interface PXCuratedLibraryChapterHeaderLayout : PXGLayout <PXChangeObserver, PXGStringSource, PXGNamedImageSource> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	unsigned short _titleVersion;
	unsigned short _subtitleVersion;
	CGSize _chevronSize;
	long long _alternateAppearanceFadeDirection;
	double _alternateAppearanceFadeStartThresholdDistance;
	NSArray* _itemIdentifierBySpriteIndex;
	long long _asyncDateGeneration;
	NSObject*<OS_dispatch_queue> _asyncDateQueue;
	BOOL _presentedAlternateAppearance;
	PXAssetCollectionReference* _assetCollectionReference;
	PXCuratedLibraryChapterHeaderLayoutSpec* _spec;
	NSString* _title;
	NSString* _subtitle;
	NSDictionary* _titleAttributes;
	NSDictionary* _floatingTitleAttributes;
	NSDictionary* _subtitleAttributes;
	NSDictionary* _floatingSubtitleAttributes;
	PXNumberAnimator* _alternateAppearanceMixAnimator;
	CGSize _titleSize;
	CGSize _subtitleSize;
	PXSimpleIndexPath _sectionIndexPath;
	UIEdgeInsets _padding;

}

@property (nonatomic,copy) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                  //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSDictionary * titleAttributes;                                       //@synthesize titleAttributes=_titleAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * floatingTitleAttributes;                               //@synthesize floatingTitleAttributes=_floatingTitleAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * subtitleAttributes;                                    //@synthesize subtitleAttributes=_subtitleAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * floatingSubtitleAttributes;                            //@synthesize floatingSubtitleAttributes=_floatingSubtitleAttributes - In the implementation block
@property (nonatomic,readonly) CGSize titleSize;                                                 //@synthesize titleSize=_titleSize - In the implementation block
@property (nonatomic,readonly) CGSize subtitleSize;                                              //@synthesize subtitleSize=_subtitleSize - In the implementation block
@property (nonatomic,readonly) PXNumberAnimator * alternateAppearanceMixAnimator;                //@synthesize alternateAppearanceMixAnimator=_alternateAppearanceMixAnimator - In the implementation block
@property (assign,nonatomic) BOOL presentedAlternateAppearance;                                  //@synthesize presentedAlternateAppearance=_presentedAlternateAppearance - In the implementation block
@property (nonatomic,retain) PXAssetCollectionReference * assetCollectionReference;              //@synthesize assetCollectionReference=_assetCollectionReference - In the implementation block
@property (assign,nonatomic) PXSimpleIndexPath sectionIndexPath;                                 //@synthesize sectionIndexPath=_sectionIndexPath - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryChapterHeaderLayoutSpec * spec;                     //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                               //@synthesize padding=_padding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)titleSize;
-(NSString *)subtitle;
-(void)update;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setTitleAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleAttributes;
-(UIEdgeInsets)padding;
-(void)setSpec:(PXCuratedLibraryChapterHeaderLayoutSpec *)arg1 ;
-(PXCuratedLibraryChapterHeaderLayoutSpec *)spec;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)imageNameAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)_updateSprites;
-(void)visibleRectDidChange;
-(void)referenceSizeDidChange;
-(void)referenceOptionsDidChange;
-(void)screenScaleDidChange;
-(void)setAssetCollectionReference:(PXAssetCollectionReference *)arg1 ;
-(void)_updateTitleAndSubtitle;
-(id)hitTestResultForSpriteIndex:(unsigned)arg1 ;
-(PXAssetCollectionReference *)assetCollectionReference;
-(PXSimpleIndexPath)sectionIndexPath;
-(id)stringAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)stringAttributesAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(long long)verticalAlignmentForStringAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)_invalidateAttributedTitle;
-(void)setSubtitleAttributes:(NSDictionary *)arg1 ;
-(void)_invalidateAttributedSubtitle;
-(BOOL)shouldSwapTitleAndSubtitle;
-(void)_handleAsyncTitle:(id)arg1 subtitle:(id)arg2 generation:(long long)arg3 ;
-(CGSize)subtitleSize;
-(void)setSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(NSDictionary *)floatingTitleAttributes;
-(void)setFloatingTitleAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)subtitleAttributes;
-(NSDictionary *)floatingSubtitleAttributes;
-(void)setFloatingSubtitleAttributes:(NSDictionary *)arg1 ;
-(PXNumberAnimator *)alternateAppearanceMixAnimator;
-(BOOL)presentedAlternateAppearance;
-(void)setPresentedAlternateAppearance:(BOOL)arg1 ;
@end

