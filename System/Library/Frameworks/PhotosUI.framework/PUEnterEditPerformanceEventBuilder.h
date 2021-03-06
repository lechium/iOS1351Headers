/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PUEditableAsset;
@interface PUEnterEditPerformanceEventBuilder : NSObject {

	BOOL _editingWithRaw;
	id<PUEditableAsset> _asset;
	double _enterEditDuration;
	double _resourceCheckingDuration;
	double _resourceDownloadDuration;
	double _resourceLoadingDuration;
	double _autoCalcDuration;

}

@property (nonatomic,retain) id<PUEditableAsset> asset;                                //@synthesize asset=_asset - In the implementation block
@property (assign,getter=isEditingWithRaw,nonatomic) BOOL editingWithRaw;              //@synthesize editingWithRaw=_editingWithRaw - In the implementation block
@property (assign,nonatomic) double enterEditDuration;                                 //@synthesize enterEditDuration=_enterEditDuration - In the implementation block
@property (assign,nonatomic) double resourceCheckingDuration;                          //@synthesize resourceCheckingDuration=_resourceCheckingDuration - In the implementation block
@property (assign,nonatomic) double resourceDownloadDuration;                          //@synthesize resourceDownloadDuration=_resourceDownloadDuration - In the implementation block
@property (assign,nonatomic) double resourceLoadingDuration;                           //@synthesize resourceLoadingDuration=_resourceLoadingDuration - In the implementation block
@property (assign,nonatomic) double autoCalcDuration;                                  //@synthesize autoCalcDuration=_autoCalcDuration - In the implementation block
-(id<PUEditableAsset>)asset;
-(void)setAsset:(id<PUEditableAsset>)arg1 ;
-(id)buildEvent;
-(BOOL)isEditingWithRaw;
-(void)setEditingWithRaw:(BOOL)arg1 ;
-(double)enterEditDuration;
-(void)setEnterEditDuration:(double)arg1 ;
-(double)resourceCheckingDuration;
-(void)setResourceCheckingDuration:(double)arg1 ;
-(double)resourceDownloadDuration;
-(void)setResourceDownloadDuration:(double)arg1 ;
-(double)resourceLoadingDuration;
-(void)setResourceLoadingDuration:(double)arg1 ;
-(double)autoCalcDuration;
-(void)setAutoCalcDuration:(double)arg1 ;
@end

