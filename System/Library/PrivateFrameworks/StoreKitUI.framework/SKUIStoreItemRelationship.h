/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:47 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SKUIStoreIdentifier, NSSet;

@interface SKUIStoreItemRelationship : NSObject {

	SKUIStoreIdentifier* _singleParent;
	NSSet* _chidItems;

}

@property (nonatomic,copy,readonly) SKUIStoreIdentifier * singleParent;              //@synthesize singleParent=_singleParent - In the implementation block
@property (nonatomic,copy,readonly) NSSet * chidItems;                               //@synthesize chidItems=_chidItems - In the implementation block
-(id)initWithParent:(id)arg1 andChildren:(id)arg2 ;
-(SKUIStoreIdentifier *)singleParent;
-(NSSet *)chidItems;
@end
