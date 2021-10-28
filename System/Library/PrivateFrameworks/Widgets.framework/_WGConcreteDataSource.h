/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSMutableDictionary, NSArray;

@interface _WGConcreteDataSource : NSObject {

	NSMutableArray* _observers;
	NSMutableDictionary* _identifiersToData;

}

@property (nonatomic,readonly) NSArray * dataIdentifiers; 
@property (nonatomic,readonly) NSArray * data; 
-(id)init;
-(NSArray *)data;
-(void)addObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dataSource:(id)arg1 replaceWithDatum:(id)arg2 observerUpdateBlock:(/*^block*/id)arg3 ;
-(void)dataSource:(id)arg1 removeDatumWithIdentifier:(id)arg2 observerUpdateBlock:(/*^block*/id)arg3 ;
-(NSArray *)dataIdentifiers;
-(id)datumWithIdentifier:(id)arg1 ;
@end
