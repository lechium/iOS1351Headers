/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSArray;

@interface SUItemValidator : NSObject {

	NSMutableArray* _collectionTests;
	NSMutableArray* _itemTests;

}

@property (nonatomic,readonly) NSArray * validationTests; 
-(void)dealloc;
-(BOOL)validateItems:(id)arg1 offers:(id)arg2 error:(id*)arg3 ;
-(void)addCollectionValidationTests:(id)arg1 ;
-(void)addItemValidationTests:(id)arg1 ;
-(void)removeValidationTest:(id)arg1 ;
-(BOOL)validateItems:(id)arg1 error:(id*)arg2 ;
-(NSArray *)validationTests;
@end

