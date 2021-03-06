/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class NSArray, NSMutableArray, NUIContainerStackView, NSString;

@interface TLKImagesView : TLKView <NUIContainerViewDelegate> {

	BOOL _paddingDisabled;
	NSArray* _images;
	NSMutableArray* _imageViews;

}

@property (nonatomic,retain) NSMutableArray * imageViews;                                //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) NUIContainerStackView * contentView; 
@property (nonatomic,retain) NSArray * images;                                           //@synthesize images=_images - In the implementation block
@property (assign,getter=isPaddingDisabled,nonatomic) BOOL paddingDisabled;              //@synthesize paddingDisabled=_paddingDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)images;
-(void)setImages:(NSArray *)arg1 ;
-(void)setImageViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)imageViews;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(BOOL)usesDefaultInsets;
-(void)updateWithImages:(id)arg1 ;
-(BOOL)isPaddingDisabled;
-(void)updateForPaddingDisabled:(BOOL)arg1 ;
-(void)setPaddingDisabled:(BOOL)arg1 ;
@end

