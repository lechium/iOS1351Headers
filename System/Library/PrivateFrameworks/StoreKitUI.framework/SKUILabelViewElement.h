/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewElement.h>
#import <libobjc.A.dylib/SKUILinkHandler.h>

@protocol SKUILinkHandler;
@class NSArray, NSMutableDictionary, NSString, SKUIViewElementText, IKDOMElement;

@interface SKUILabelViewElement : SKUIViewElement <SKUILinkHandler> {

	NSArray* _badges;
	BOOL _containsLinks;
	long long _labelViewStyle;
	long long _linkCounter;
	id<SKUILinkHandler> _linkDelegate;
	NSMutableDictionary* _linkToViewButtonElements;
	NSString* _moreButtonTitle;
	long long _numberOfLines;
	NSMutableDictionary* _domObjectsToViewElements;
	SKUIViewElementText* _text;
	NSArray* _trailingBadges;
	IKDOMElement* _xml;
	long long _badgePlacement;

}

@property (nonatomic,readonly) long long labelViewStyle;                           //@synthesize labelViewStyle=_labelViewStyle - In the implementation block
@property (assign,nonatomic,__weak) id<SKUILinkHandler> linkDelegate;              //@synthesize linkDelegate=_linkDelegate - In the implementation block
@property (nonatomic,readonly) NSString * moreButtonTitle;                         //@synthesize moreButtonTitle=_moreButtonTitle - In the implementation block
@property (nonatomic,readonly) long long numberOfLines;                            //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (nonatomic,readonly) SKUIViewElementText * text; 
@property (nonatomic,readonly) NSArray * badges;                                   //@synthesize badges=_badges - In the implementation block
@property (nonatomic,readonly) NSArray * trailingBadges;                           //@synthesize trailingBadges=_trailingBadges - In the implementation block
@property (nonatomic,readonly) long long badgePlacement;                           //@synthesize badgePlacement=_badgePlacement - In the implementation block
@property (assign,nonatomic) BOOL containsLinks;                                   //@synthesize containsLinks=_containsLinks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldParseChildDOMElements;
-(void)dealloc;
-(SKUIViewElementText *)text;
-(long long)numberOfLines;
-(long long)badgePlacement;
-(NSArray *)badges;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(long long)labelViewStyle;
-(id)uniquingMapKey;
-(NSString *)moreButtonTitle;
-(BOOL)containsLinks;
-(void)setContainsLinks:(BOOL)arg1 ;
-(id<SKUILinkHandler>)linkDelegate;
-(void)setLinkDelegate:(id<SKUILinkHandler>)arg1 ;
-(NSArray *)trailingBadges;
-(void)linkTapped:(id)arg1 range:(NSRange)arg2 ;
-(void)_walkDOM:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(void)_createText:(id)arg1 ;
-(id)_stringFromNumberElement:(id)arg1 ;
-(id)_stringFromDateElement:(id)arg1 ;
-(id)_stringFromDurationElement:(id)arg1 ;
@end

