/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVVideoAccessoryItemSizing.h>

@class NSString;

@interface SVVideoAccessoryItemSizer : NSObject <SVVideoAccessoryItemSizing>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)frameOfLeadingItemWithDisplayMode:(unsigned long long)arg1 constrainedToSize:(CGSize)arg2 ;
-(CGRect)frameOfTrailingItemWithDisplayMode:(unsigned long long)arg1 constrainedToSize:(CGSize)arg2 ;
-(CGSize)sizeForDisplayMode:(unsigned long long)arg1 constrainedToSize:(CGSize)arg2 ;
-(CGPoint)originForLeadingItemWithDisplayMode:(unsigned long long)arg1 constraintToSize:(CGSize)arg2 itemSize:(CGSize)arg3 ;
-(CGPoint)originForTrailingItemWithDisplayMode:(unsigned long long)arg1 constraintToSize:(CGSize)arg2 itemSize:(CGSize)arg3 ;
@end
