/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoMusicSync/NanoMusicSync-Structs.h>
#import <MediaPlayer/MPStoreModelRequest.h>

@class NSArray;

@interface NMSStoreModelLookupRequest : MPStoreModelRequest {

	NSArray* _containerIDs;

}

@property (nonatomic,copy) NSArray * containerIDs;              //@synthesize containerIDs=_containerIDs - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContainerIDs:(NSArray *)arg1 ;
-(NSArray *)containerIDs;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
@end
