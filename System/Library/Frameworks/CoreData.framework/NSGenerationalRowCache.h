/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSPersistentStore, NSPersistentStoreCache, NSMutableDictionary;

@interface NSGenerationalRowCache : NSObject {

	NSPersistentStore* _store;
	NSPersistentStoreCache* _primaryCache;
	NSMutableDictionary* _rowCachesByGenerationToken;
	int _lock;

}
-(void)dealloc;
-(id)initWithStore:(id)arg1 ;
-(void)removeRowCacheForGenerationWithIdentifier:(id)arg1 ;
-(id)rowCacheForGeneration:(id)arg1 ;
-(void)forgetAllExternalData;
-(void)removeRowCacheForGeneration:(id)arg1 ;
@end
