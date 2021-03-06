/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WBSFormAutoFillFeedbackProcessor.h>

@protocol WBSParsecGlobalFeedbackDispatcher, OS_dispatch_queue, WBSFormAutoFillFeedbackDomainPolicyProvider;
@class WBSCrowdsourcedFeedbackDomainNormalizer, NSObject, NSString;

@interface WBSFormAutoFillParsecFeedbackProcessor : NSObject <WBSFormAutoFillFeedbackProcessor> {

	id<WBSParsecGlobalFeedbackDispatcher> _globalFeedbackDispatcher;
	unsigned long long _autoFillVersion;
	WBSCrowdsourcedFeedbackDomainNormalizer* _domainNormalizer;
	NSObject*<OS_dispatch_queue> _internalQueue;
	id<WBSFormAutoFillFeedbackDomainPolicyProvider> _domainPolicyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<WBSFormAutoFillFeedbackDomainPolicyProvider> domainPolicyProvider;              //@synthesize domainPolicyProvider=_domainPolicyProvider - In the implementation block
-(id)init;
-(void)sendFeedbackWithCorrectionSet:(id)arg1 ;
-(void)_getFeedbackWithCorrectionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_feedbackWithCorrectionSet:(id)arg1 includeOrigin:(BOOL)arg2 ;
-(id<WBSFormAutoFillFeedbackDomainPolicyProvider>)domainPolicyProvider;
-(void)setDomainPolicyProvider:(id<WBSFormAutoFillFeedbackDomainPolicyProvider>)arg1 ;
-(id)initWithGlobalFeedbackDispatcher:(id)arg1 domainPolicyProvider:(id)arg2 autoFillVersion:(unsigned long long)arg3 ;
@end

