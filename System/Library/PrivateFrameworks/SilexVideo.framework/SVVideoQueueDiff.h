/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SVVideoQueueDiff.h>
@class NSOrderedSet;


@protocol SVVideoQueueDiff <NSObject>
@property (nonatomic,readonly) NSOrderedSet * videosToInsert; 
@property (nonatomic,readonly) NSOrderedSet * videosToRemove; 
@required
-(NSOrderedSet *)videosToInsert;
-(NSOrderedSet *)videosToRemove;

@end


@class NSOrderedSet, NSString;

@interface SVVideoQueueDiff : NSObject <SVVideoQueueDiff> {

	NSOrderedSet* _videosToInsert;
	NSOrderedSet* _videosToRemove;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSOrderedSet * videosToInsert;              //@synthesize videosToInsert=_videosToInsert - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * videosToRemove;              //@synthesize videosToRemove=_videosToRemove - In the implementation block
-(id)initWithVideosToInsert:(id)arg1 videosToRemove:(id)arg2 ;
-(NSOrderedSet *)videosToInsert;
-(NSOrderedSet *)videosToRemove;
@end
