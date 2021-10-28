/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSArray;

@interface PGGraphPortraitKnowledgeToDonate : NSObject {

	NSDictionary* _topics;
	NSArray* _namedEntities;
	NSArray* _locationNamedEntities;

}

@property (nonatomic,readonly) NSDictionary * topics;                        //@synthesize topics=_topics - In the implementation block
@property (nonatomic,readonly) NSArray * namedEntities;                      //@synthesize namedEntities=_namedEntities - In the implementation block
@property (nonatomic,readonly) NSArray * locationNamedEntities;              //@synthesize locationNamedEntities=_locationNamedEntities - In the implementation block
-(NSDictionary *)topics;
-(NSArray *)namedEntities;
-(id)initWithTopics:(id)arg1 namedEntities:(id)arg2 locationNamedEntities:(id)arg3 ;
-(NSArray *)locationNamedEntities;
@end
