/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class NSSet, NSDictionary, NSString;

@interface FCFeedTransformationNoneSurfacedBy : NSObject <FCFeedTransforming> {

	NSSet* _tagIDs;
	NSDictionary* _feedContextByFeedID;

}

@property (nonatomic,copy) NSSet * tagIDs;                                  //@synthesize tagIDs=_tagIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * feedContextByFeedID;              //@synthesize feedContextByFeedID=_feedContextByFeedID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithTagIDs:(id)arg1 feedContextByFeedID:(id)arg2 ;
-(id)transformFeedItems:(id)arg1 ;
-(void)setTagIDs:(NSSet *)arg1 ;
-(void)setFeedContextByFeedID:(NSDictionary *)arg1 ;
-(NSDictionary *)feedContextByFeedID;
-(NSSet *)tagIDs;
@end

