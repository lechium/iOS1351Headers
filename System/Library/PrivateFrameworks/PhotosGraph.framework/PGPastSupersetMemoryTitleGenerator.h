/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGTitleGenerator.h>

@class PGGraphLocationNode, NSDateInterval;

@interface PGPastSupersetMemoryTitleGenerator : PGTitleGenerator {

	PGGraphLocationNode* _supersetLocationNode;
	NSDateInterval* _supersetDateInterval;

}

@property (readonly) PGGraphLocationNode * supersetLocationNode;              //@synthesize supersetLocationNode=_supersetLocationNode - In the implementation block
@property (readonly) NSDateInterval * supersetDateInterval;                   //@synthesize supersetDateInterval=_supersetDateInterval - In the implementation block
-(id)_locationTitle;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)initWithMomentNodes:(id)arg1 supersetLocationNode:(id)arg2 supersetDateInterval:(id)arg3 ;
-(id)_timeTitle;
-(PGGraphLocationNode *)supersetLocationNode;
-(NSDateInterval *)supersetDateInterval;
@end
