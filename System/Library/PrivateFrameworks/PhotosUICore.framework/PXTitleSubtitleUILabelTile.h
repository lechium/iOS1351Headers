/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@class UIView, PXTitleSubtitleUILabel, NSString, PXTitleSubtitleLabelSpec;

@interface PXTitleSubtitleUILabelTile : NSObject <PXUIViewBasicTile> {

	UIView* _view;
	PXTitleSubtitleUILabel* _label;
	BOOL _rendersTextAsynchronously;
	NSString* _title;
	NSString* _subtitle;
	PXTitleSubtitleLabelSpec* _labelSpec;
	long long __animationCount;

}

@property (assign,setter=_setAnimationCount:,nonatomic) long long _animationCount;              //@synthesize _animationCount=__animationCount - In the implementation block
@property (nonatomic,copy) NSString * title;                                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) PXTitleSubtitleLabelSpec * labelSpec;                       //@synthesize labelSpec=_labelSpec - In the implementation block
@property (assign,nonatomic) BOOL rendersTextAsynchronously;                                    //@synthesize rendersTextAsynchronously=_rendersTextAsynchronously - In the implementation block
@property (nonatomic,readonly) double lastBaseline; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(NSString *)subtitle;
-(UIView *)view;
-(void)setSubtitle:(NSString *)arg1 ;
-(long long)_animationCount;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(void)willAnimateToGeometry:(PXTileGeometry*)arg1 toUserData:(id)arg2 withOptions:(id)arg3 ;
-(void)didAnimateToGeometry:(PXTileGeometry*)arg1 toUserData:(id)arg2 withOptions:(id)arg3 ;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)becomeReusable;
-(double)lastBaseline;
-(void)_setAnimationCount:(long long)arg1 ;
-(void)setRendersTextAsynchronously:(BOOL)arg1 ;
-(void)_updateLabelTitleAndSubtitle;
-(PXTitleSubtitleLabelSpec *)labelSpec;
-(BOOL)rendersTextAsynchronously;
@end
