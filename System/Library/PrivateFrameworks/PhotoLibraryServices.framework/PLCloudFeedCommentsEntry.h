/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLCloudFeedEntry.h>

@class NSString, NSOrderedSet, NSMutableOrderedSet;

@interface PLCloudFeedCommentsEntry : PLCloudFeedEntry

@property (nonatomic,retain) NSString * entryCloudAssetGUID; 
@property (nonatomic,retain) NSOrderedSet * entryLikeComments; 
@property (nonatomic,retain) NSOrderedSet * entryComments; 
@property (nonatomic,__weak,readonly) NSMutableOrderedSet * mutableEntryLikeComments; 
@property (nonatomic,__weak,readonly) NSMutableOrderedSet * mutableEntryComments; 
+(id)entityName;
-(BOOL)shouldBeRemovedFromPhotoLibrary:(id)arg1 ;
-(NSMutableOrderedSet *)mutableEntryLikeComments;
-(NSMutableOrderedSet *)mutableEntryComments;
@end

