/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUIPageComponent.h>

@class NSString, SKUIImageViewElement;

@interface SKUIBrowseItemComponent : SKUIPageComponent {

	NSString* _title;
	NSString* _subtitle;
	long long _index;
	SKUIImageViewElement* _decorationImage;
	BOOL _showTopBorder;

}

@property (nonatomic,readonly) SKUIImageViewElement * decorationImage;              //@synthesize decorationImage=_decorationImage - In the implementation block
@property (nonatomic,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) long long index;                                       //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL showTopBorder;                                    //@synthesize showTopBorder=_showTopBorder - In the implementation block
-(long long)index;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setIndex:(long long)arg1 ;
-(long long)componentType;
-(void)setShowTopBorder:(BOOL)arg1 ;
-(SKUIImageViewElement *)decorationImage;
-(BOOL)showTopBorder;
-(id)initWithViewElement:(id)arg1 ;
@end
