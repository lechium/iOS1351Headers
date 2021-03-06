/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PXFeedbackCollector, PXFeedbackSender;

@interface PXFeedbackManager : NSObject {

	unsigned long long _feedbackCollectionType;
	PXFeedbackCollector* _feedbackCollector;
	PXFeedbackSender* _feedbackSender;

}

@property (nonatomic,readonly) PXFeedbackCollector * feedbackCollector;              //@synthesize feedbackCollector=_feedbackCollector - In the implementation block
@property (nonatomic,readonly) PXFeedbackSender * feedbackSender;                    //@synthesize feedbackSender=_feedbackSender - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)removeFeedbackEntry:(id)arg1 ;
-(id)provideUserFeedbackFromDictionary:(id)arg1 forFeedbackType:(unsigned long long)arg2 ;
-(void)provideUserFeedbackEntry:(id)arg1 ;
-(PXFeedbackCollector *)feedbackCollector;
-(PXFeedbackSender *)feedbackSender;
@end

