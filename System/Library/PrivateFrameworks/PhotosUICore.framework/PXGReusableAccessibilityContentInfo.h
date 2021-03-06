/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGMutableAccessibilityContentInfo.h>
#import <libobjc.A.dylib/PXGAccessibilityContentInfo.h>
#import <libobjc.A.dylib/PXReusableObject.h>

@protocol PXDisplayAsset, PXAccessibilityView, PXGAccessibilityContentInfoDelegate;
@class NSString, NSArray, NSObject, PXScrollViewController, NSMutableArray;

@interface PXGReusableAccessibilityContentInfo : NSObject <PXGMutableAccessibilityContentInfo, PXGAccessibilityContentInfo, PXReusableObject> {

	BOOL _selected;
	BOOL _visible;
	BOOL _isPerformingChanges;
	BOOL _alternateUIVisible;
	long long _contentKind;
	NSString* _text;
	NSString* _title;
	NSString* _subtitle;
	NSString* _imageName;
	id<PXDisplayAsset> _asset;
	NSObject*<PXAccessibilityView> _view;
	NSArray* _selectedContent;
	PXScrollViewController* _scrollViewController;
	id<PXGAccessibilityContentInfoDelegate> _accessibilityDelegate;
	NSMutableArray* _mutableChildren;
	CGRect _frame;

}

@property (assign,nonatomic) BOOL isPerformingChanges;                                                          //@synthesize isPerformingChanges=_isPerformingChanges - In the implementation block
@property (assign,nonatomic) BOOL alternateUIVisible;                                                           //@synthesize alternateUIVisible=_alternateUIVisible - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableChildren;                                                  //@synthesize mutableChildren=_mutableChildren - In the implementation block
@property (nonatomic,retain) PXScrollViewController * scrollViewController;                                     //@synthesize scrollViewController=_scrollViewController - In the implementation block
@property (assign,nonatomic,__weak) id<PXGAccessibilityContentInfoDelegate> accessibilityDelegate;              //@synthesize accessibilityDelegate=_accessibilityDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect frame;                                                                      //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) long long contentKind;                                                             //@synthesize contentKind=_contentKind - In the implementation block
@property (nonatomic,retain) NSString * text;                                                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * title;                                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * imageName;                                                              //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,retain) id<PXDisplayAsset> asset;                                                          //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSObject*<PXAccessibilityView> view;                                               //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) BOOL selected;                                                                     //@synthesize selected=_selected - In the implementation block
@property (nonatomic,copy) NSArray * selectedContent;                                                           //@synthesize selectedContent=_selectedContent - In the implementation block
@property (assign,nonatomic) BOOL visible;                                                                      //@synthesize visible=_visible - In the implementation block
@property (nonatomic,readonly) NSArray * px_accessibilityChildren; 
+(id)_textInLayout:(id)arg1 atSpriteIndex:(unsigned)arg2 ;
+(id)_imageNameInLayout:(id)arg1 atSpriteIndex:(unsigned)arg2 ;
+(id)_titleSubtitleInLayout:(id)arg1 atSpriteIndex:(unsigned)arg2 ;
+(void)_assetSelectedInLayout:(id)arg1 atSpriteIndex:(unsigned)arg2 outAsset:(out id*)arg3 outSelected:(out BOOL*)arg4 ;
-(id)init;
-(NSString *)description;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(CGRect)frame;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id<PXDisplayAsset>)asset;
-(void)setAsset:(id<PXDisplayAsset>)arg1 ;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(NSObject*<PXAccessibilityView>)view;
-(void)setView:(NSObject*<PXAccessibilityView>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(NSArray *)selectedContent;
-(void)setSelectedContent:(NSArray *)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setAccessibilityDelegate:(id<PXGAccessibilityContentInfoDelegate>)arg1 ;
-(id<PXGAccessibilityContentInfoDelegate>)accessibilityDelegate;
-(long long)contentKind;
-(void)setContentKind:(long long)arg1 ;
-(NSMutableArray *)mutableChildren;
-(void)setMutableChildren:(NSMutableArray *)arg1 ;
-(void)becomeReusable;
-(BOOL)isPerformingChanges;
-(void)setIsPerformingChanges:(BOOL)arg1 ;
-(void)setScrollViewController:(PXScrollViewController *)arg1 ;
-(PXScrollViewController *)scrollViewController;
-(NSArray *)px_accessibilityChildren;
-(void)px_accessibilityAddChildElement:(id)arg1 ;
-(void)px_accessibilityRemoveAllChildren;
-(void)_performClassSwizzlingForContentKind:(long long)arg1 ;
-(BOOL)_fillForKind:(long long)arg1 withLayout:(id)arg2 spriteIndex:(unsigned)arg3 ;
-(BOOL)performChangesToContentKind:(long long)arg1 withLayout:(id)arg2 spriteIndex:(unsigned)arg3 spriteGeometry:(SCD_Struct_PX13)arg4 ;
-(BOOL)alternateUIVisible;
-(void)setAlternateUIVisible:(BOOL)arg1 ;
@end

