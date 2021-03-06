/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CHNonTextCandidateStroke.h>

@class NSDictionary;

@interface CHMutableNonTextCandidateStroke : CHNonTextCandidateStroke

@property (nonatomic,retain) NSDictionary * supportByStrokeIdentifier; 
-(id)description;
-(BOOL)_removeSupportForStrokeIdentifier:(id)arg1 ;
-(BOOL)_adjustSupportForLineClassificationByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2 ;
-(BOOL)_adjustSupportForContainerClassificationByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2 ;
-(void)_setSupportForStrokeIdentifier:(id)arg1 support:(double)arg2 ;
-(void)setSupportByStrokeIdentifier:(NSDictionary *)arg1 ;
-(BOOL)adjustSupportByRemovingStrokeIdentifier:(id)arg1 ;
-(BOOL)adjustSupportByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2 ;
@end

