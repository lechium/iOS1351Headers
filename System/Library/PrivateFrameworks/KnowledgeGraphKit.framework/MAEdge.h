/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/MAElement.h>

@class MANode, NSSet;

@interface MAEdge : MAElement {

	MANode* _sourceNode;
	MANode* _targetNode;

}

@property (nonatomic,__weak,readonly) MANode * sourceNode;              //@synthesize sourceNode=_sourceNode - In the implementation block
@property (nonatomic,__weak,readonly) MANode * targetNode;              //@synthesize targetNode=_targetNode - In the implementation block
@property (nonatomic,readonly) NSSet * nodes; 
-(id)init;
-(id)description;
-(NSSet *)nodes;
-(id)shortDescription;
-(MANode *)sourceNode;
-(BOOL)isLoop;
-(MANode *)targetNode;
-(id)oppositeNode:(id)arg1 ;
-(id)commonNode:(id)arg1 ;
-(BOOL)isUnique;
-(id)visualString;
-(id)visualStringWithName:(id)arg1 andPropertyKeys:(id)arg2 ;
-(unsigned long long)_memoryFootprint:(id)arg1 ;
-(BOOL)isEqualToElement:(id)arg1 ;
-(BOOL)isNode;
-(void)_removePersistentStorePropertyForKey:(id)arg1 ;
-(void)_removeAllPersistentStoreProperties;
-(void)_setPersistentStorePropertyValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setPersistentStoreProperties:(id)arg1 ;
-(id)visualStringWithName:(id)arg1 ;
-(BOOL)conformsToEdgeSchema:(id)arg1 ;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(BOOL)isEqualToEdge:(id)arg1 ;
@end

