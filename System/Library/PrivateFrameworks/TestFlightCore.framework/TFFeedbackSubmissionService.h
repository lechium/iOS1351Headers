/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:59 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TFFeedbackSubmissionService <NSObject>
@property (nonatomic,readonly) unsigned long long maxNumberOfScreenshotsAllowed; 
@property (nonatomic,readonly) unsigned long long maxNumberOfCommentSymbolsAllowed; 
@required
-(unsigned long long)maxNumberOfScreenshotsAllowed;
-(unsigned long long)maxNumberOfCommentSymbolsAllowed;
-(void)submitFeedbackForBundleId:(id)arg1 withContentsOfDataSource:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end
