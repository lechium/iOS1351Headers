/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SGSqlEntityStore;

@interface SGServiceContext : NSObject {

	SGSqlEntityStore* _store;

}

@property (nonatomic,readonly) SGSqlEntityStore * store;              //@synthesize store=_store - In the implementation block
-(id)init;
-(id)initWithStore:(id)arg1 ;
-(SGSqlEntityStore *)store;
@end
