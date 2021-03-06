/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSHashTable;

@interface REDependencyGraphNode : NSObject {

	id _item;
	NSHashTable* _connections;

}

@property (nonatomic,readonly) id item;                              //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSHashTable * connections;              //@synthesize connections=_connections - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)item;
-(id)initWithItem:(id)arg1 ;
-(NSHashTable *)connections;
-(void)setConnections:(NSHashTable *)arg1 ;
@end

