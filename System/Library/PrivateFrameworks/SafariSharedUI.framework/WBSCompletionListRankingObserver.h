/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_CompletionListRankingObserverFeedbackGeneratorDelegate.h>

@protocol _CompletionListRankingObserverFeedbackGenerator, WBSCompletionListRankingObserverDelegate;
@class SFRankingFeedback, NSString;

@interface WBSCompletionListRankingObserver : NSObject <_CompletionListRankingObserverFeedbackGeneratorDelegate> {

	id<_CompletionListRankingObserverFeedbackGenerator> _feedbackGenerator;
	id<WBSCompletionListRankingObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WBSCompletionListRankingObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SFRankingFeedback * rankingFeedback; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WBSCompletionListRankingObserverDelegate>)delegate;
-(void)setDelegate:(id<WBSCompletionListRankingObserverDelegate>)arg1 ;
-(id)_createFeedbackGenerator;
-(SFRankingFeedback *)rankingFeedback;
-(void)didBeginRanking;
-(void)didEndRanking;
-(void)didBeginSectionWithBundleIdentifier:(id)arg1 ;
-(void)didAddItem:(id)arg1 hidingOutrankedResults:(id)arg2 hidingDuplicateResults:(id)arg3 ;
-(void)removeAllSectionsAndItems;
-(Class)_feedbackGeneratorClass;
-(unsigned long long)completionListRankingObserverFeedbackGenerator:(id)arg1 frequentlyVisitedSitesIndexOfItem:(id)arg2 hidingItem:(id)arg3 ;
-(void)didAddItem:(id)arg1 ;
@end
