/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray;


@protocol PXGAccessibilityContentInfo <NSObject>
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) long long contentKind; 
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSString * imageName; 
@property (nonatomic,readonly) id<PXDisplayAsset> asset; 
@property (nonatomic,readonly) NSObject*<PXAccessibilityView> view; 
@property (nonatomic,readonly) BOOL selected; 
@property (nonatomic,copy,readonly) NSArray * selectedContent; 
@property (nonatomic,readonly) BOOL visible; 
@property (nonatomic,readonly) NSArray * px_accessibilityChildren; 
@required
-(NSString *)title;
-(CGRect)frame;
-(NSString *)text;
-(NSString *)subtitle;
-(id<PXDisplayAsset>)asset;
-(BOOL)visible;
-(NSObject*<PXAccessibilityView>)view;
-(BOOL)selected;
-(NSString *)imageName;
-(NSArray *)selectedContent;
-(long long)contentKind;
-(NSArray *)px_accessibilityChildren;

@end

