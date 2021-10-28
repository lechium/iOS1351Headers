/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVTAvatarAttributeEditorSectionColorDataSourceDelegate;
@class AVTAvatarAttributeEditorColorSection;

@interface AVTAvatarAttributeEditorSectionColorDataSource : NSObject {

	AVTAvatarAttributeEditorColorSection* _colorSection;
	id<AVTAvatarAttributeEditorSectionColorDataSourceDelegate> _delegate;
	long long _selectedPrimaryColorIndex;
	long long _selectedExtendedColorIndex;
	long long _displayMode;

}

@property (assign,nonatomic) long long selectedPrimaryColorIndex;                                              //@synthesize selectedPrimaryColorIndex=_selectedPrimaryColorIndex - In the implementation block
@property (assign,nonatomic) long long selectedExtendedColorIndex;                                             //@synthesize selectedExtendedColorIndex=_selectedExtendedColorIndex - In the implementation block
@property (assign,nonatomic) long long displayMode;                                                            //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,readonly) long long selectedItemIndex; 
@property (nonatomic,retain) AVTAvatarAttributeEditorColorSection * colorSection;                              //@synthesize colorSection=_colorSection - In the implementation block
@property (nonatomic,readonly) BOOL isShowingSlider; 
@property (nonatomic,readonly) BOOL isShowingExtended; 
@property (assign,nonatomic) id<AVTAvatarAttributeEditorSectionColorDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)selectedItemFromItems:(id)arg1 ;
+(long long)indexOfItem:(id)arg1 inItems:(id)arg2 ;
-(id)init;
-(id<AVTAvatarAttributeEditorSectionColorDataSourceDelegate>)delegate;
-(void)setDelegate:(id<AVTAvatarAttributeEditorSectionColorDataSourceDelegate>)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)displayMode;
-(void)setDisplayMode:(long long)arg1 ;
-(long long)selectedItemIndex;
-(void)resetToDefaultDisplayMode;
-(void)updateSelectedIndexesSelectingItem:(id)arg1 fromUserInteraction:(BOOL)arg2 ;
-(BOOL)isShowingExtended;
-(long long)selectedExtendedColorIndex;
-(long long)selectedPrimaryColorIndex;
-(id)indexPathOfExtendedIcon;
-(void)setSelectedPrimaryColorIndex:(long long)arg1 ;
-(void)setSelectedExtendedColorIndex:(long long)arg1 ;
-(AVTAvatarAttributeEditorColorSection *)colorSection;
-(BOOL)isShowingSlider;
-(void)toggleSliderMode;
-(void)toggleExtendedMode;
-(id)sectionItemAtIndex:(long long)arg1 ;
-(void)setColorSection:(AVTAvatarAttributeEditorColorSection *)arg1 ;
-(void)selectSectionItemAtIndexPath:(id)arg1 ;
@end
