/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SFFeedback.h>

@class SFSearchSuggestion;

@interface SFSuggestionEngagementFeedback : SFFeedback {

	SFSearchSuggestion* _suggestion;

}

@property (nonatomic,retain) SFSearchSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSuggestion:(SFSearchSuggestion *)arg1 ;
-(SFSearchSuggestion *)suggestion;
-(id)initWithSuggestion:(id)arg1 ;
@end
