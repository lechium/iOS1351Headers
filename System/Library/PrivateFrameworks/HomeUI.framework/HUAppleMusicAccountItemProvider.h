/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Home/HFItemProvider.h>

@protocol HFMediaProfileContainer;
@class NSMutableSet;

@interface HUAppleMusicAccountItemProvider : HFItemProvider {

	NSMutableSet* _items;
	id<HFMediaProfileContainer> _mediaProfileContainer;
	/*^block*/id _filter;

}

@property (nonatomic,retain) NSMutableSet * items;                                             //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,copy) id filter;                                                          //@synthesize filter=_filter - In the implementation block
-(NSMutableSet *)items;
-(void)setItems:(NSMutableSet *)arg1 ;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)reloadItems;
-(id)invalidationReasons;
-(id)initWithMediaProfileContainer:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
@end

