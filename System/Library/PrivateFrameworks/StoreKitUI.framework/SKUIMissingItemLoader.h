/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:50 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SKUIItemRequestDelegate.h>

@protocol SKUIMissingItemDelegate;
@class NSString, SKUIResourceLoader, NSMutableDictionary;

@interface SKUIMissingItemLoader : NSObject <SKUIItemRequestDelegate> {

	long long _batchSize;
	id<SKUIMissingItemDelegate> _delegate;
	NSString* _imageProfile;
	NSString* _keyProfile;
	SKUIResourceLoader* _loader;
	NSMutableDictionary* _requests;

}

@property (assign,nonatomic) long long batchSize;                                      //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,copy) NSString * imageProfile;                                    //@synthesize imageProfile=_imageProfile - In the implementation block
@property (nonatomic,copy) NSString * keyProfile;                                      //@synthesize keyProfile=_keyProfile - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIMissingItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SKUIMissingItemDelegate>)delegate;
-(void)setDelegate:(id<SKUIMissingItemDelegate>)arg1 ;
-(long long)batchSize;
-(void)setBatchSize:(long long)arg1 ;
-(void)setKeyProfile:(NSString *)arg1 ;
-(NSString *)imageProfile;
-(NSString *)keyProfile;
-(void)setImageProfile:(NSString *)arg1 ;
-(void)loadItemsForPageComponent:(id)arg1 startIndex:(long long)arg2 reason:(long long)arg3 ;
-(id)initWithResourceLoader:(id)arg1 ;
-(void)itemRequest:(id)arg1 didFinishWithItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(void)loadItemsWithIdentifiers:(id)arg1 reason:(long long)arg2 ;
-(id)_existingRequestIDForItemID:(id)arg1 ;
-(void)_requestItems:(id)arg1 withReason:(long long)arg2 ;
@end

