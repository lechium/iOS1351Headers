/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariSharedUI/WBSParsecLegacySearchResult.h>
#import <libobjc.A.dylib/WBSParsecSearchMapsResult.h>

@protocol WBSParsecSearchMapsResult <WBSParsecSearchResultPresentedInCard,WBSCompletionListItem,WBSParsecSearchMapsResultFeedbackSenderClient>
@end


@protocol WBSParsecSearchSession;
@class WBSParsecSearchMapsResultFeedbackSender, NSString, SFSearchResult, WBSQuerySuggestion;

@interface WBSParsecSearchMapsResult : WBSParsecLegacySearchResult <WBSParsecSearchMapsResult> {

	id<WBSParsecSearchSession> _parsecSearchSession;
	WBSParsecSearchMapsResultFeedbackSender* _mapsFeedbackSender;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<WBSParsecSearchSession> parsecSearchSession;                            //@synthesize parsecSearchSession=_parsecSearchSession - In the implementation block
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) SFSearchResult * sfSearchResultValue; 
@property (nonatomic,readonly) unsigned long long engagementDestination; 
@property (assign,nonatomic) long long parsecQueryID; 
@property (nonatomic,readonly) NSString * lastSearchQuery; 
@property (nonatomic,retain) WBSQuerySuggestion * siriSuggestion; 
@property (nonatomic,retain) WBSParsecSearchMapsResultFeedbackSender * mapsFeedbackSender;              //@synthesize mapsFeedbackSender=_mapsFeedbackSender - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(id<WBSParsecSearchSession>)parsecSearchSession;
-(void)setParsecSearchSession:(id<WBSParsecSearchSession>)arg1 ;
-(WBSParsecSearchMapsResultFeedbackSender *)mapsFeedbackSender;
-(void)setMapsFeedbackSender:(WBSParsecSearchMapsResultFeedbackSender *)arg1 ;
@end

