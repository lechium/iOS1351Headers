/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/_MPCPlayerCommand.h>
#import <libobjc.A.dylib/MPCPlayerReorderItemsCommand.h>

@class NSString;

@interface _MPCPlayerReorderItemsCommand : _MPCPlayerCommand <MPCPlayerReorderItemsCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)moveItem:(id)arg1 afterItem:(id)arg2 ;
-(id)limitedIndexPathForMovingIndexPath:(id)arg1 toProprosedIndexPath:(id)arg2 ;
-(BOOL)canMoveItem:(id)arg1 ;
@end
