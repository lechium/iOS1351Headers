/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PXDiagnosticsEnvironment.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate, PUAlbumGadgetDelegate;
@class PXGadgetSpec, NSString, PUAlbumListCellContentView, PHCollection, NSIndexSet, PUAlbumListCellContentViewHelper;

@interface PUAlbumGadget : NSObject <PXDiagnosticsEnvironment, PXGadget> {

	BOOL _contentViewVisible;
	BOOL _needsUpdate;
	PXGadgetSpec* _gadgetSpec;
	id<PXGadgetDelegate> _delegate;
	PUAlbumListCellContentView* _albumListCellContentView;
	PHCollection* _collection;
	id<PUAlbumGadgetDelegate> _albumGadgetDelegate;
	NSIndexSet* _indexesOfHiddenStackItems;

}

@property (nonatomic,readonly) PUAlbumListCellContentViewHelper * albumListCellContentViewHelper; 
@property (assign,getter=isContentViewVisible,nonatomic) BOOL contentViewVisible;                              //@synthesize contentViewVisible=_contentViewVisible - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                                                                 //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (nonatomic,retain) PHCollection * collection;                                                        //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) PUAlbumListCellContentView * albumListCellContentView;                          //@synthesize albumListCellContentView=_albumListCellContentView - In the implementation block
@property (assign,nonatomic,__weak) id<PUAlbumGadgetDelegate> albumGadgetDelegate;                             //@synthesize albumGadgetDelegate=_albumGadgetDelegate - In the implementation block
@property (nonatomic,copy) NSIndexSet * indexesOfHiddenStackItems;                                             //@synthesize indexesOfHiddenStackItems=_indexesOfHiddenStackItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                                        //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasContentToDisplay; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
-(id)init;
-(NSString *)description;
-(id<PXGadgetDelegate>)delegate;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(PHCollection *)collection;
-(NSString *)title;
-(BOOL)needsUpdate;
-(id)contentView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(void)_updateContent;
-(void)setCollection:(PHCollection *)arg1 ;
-(unsigned long long)gadgetType;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(void)contentViewWillAppear;
-(void)contentViewDidDisappear;
-(unsigned long long)gadgetCapabilities;
-(PXGadgetSpec *)gadgetSpec;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(BOOL)hasContentToDisplay;
-(BOOL)isContentViewVisible;
-(void)setContentViewVisible:(BOOL)arg1 ;
-(id)initWithCollection:(id)arg1 albumGadgetDelegate:(id)arg2 ;
-(void)reconfigure;
-(void)setAlbumGadgetDelegate:(id<PUAlbumGadgetDelegate>)arg1 ;
-(PUAlbumListCellContentView *)albumListCellContentView;
-(void)setIndexesOfHiddenStackItems:(NSIndexSet *)arg1 ;
-(CGRect)rectForStackItemAtIndex:(long long)arg1 inCoordinateSpace:(id)arg2 ;
-(long long)estimatedIndexInCollection:(id)arg1 ofAssetForStackItemAtIndex:(long long)arg2 ;
-(PUAlbumListCellContentViewHelper *)albumListCellContentViewHelper;
-(id<PUAlbumGadgetDelegate>)albumGadgetDelegate;
-(NSIndexSet *)indexesOfHiddenStackItems;
@end

