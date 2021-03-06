/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NTFeedTransforming.h>

@protocol FCFeedTransforming;
@class NSString;

@interface NTFeedTransformationItemFeedTransformation : NSObject <NTFeedTransforming> {

	id<FCFeedTransforming> _feedItemTransformation;

}

@property (nonatomic,retain) id<FCFeedTransforming> feedItemTransformation;              //@synthesize feedItemTransformation=_feedItemTransformation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)transformFeedItems:(id)arg1 ;
-(id)initWithFeedItemTransformation:(id)arg1 ;
-(id<FCFeedTransforming>)feedItemTransformation;
-(void)setFeedItemTransformation:(id<FCFeedTransforming>)arg1 ;
@end

