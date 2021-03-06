/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:21 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IAMApplicationContextProvider;
@class ICInAppMessageMetadataEntry, NSArray, NSDictionary, NSDate;

@interface IAMEvaluator : NSObject {

	ICInAppMessageMetadataEntry* _currentMetadata;
	ICInAppMessageMetadataEntry* _currentProximityMetadata;
	NSArray* _messageEntries;
	NSDictionary* _metadataEntries;
	NSDate* _lastDisplayTimeForRestrictedPresentationPolicyGroup;
	NSDate* _lastDisplayTimeForNormalPresentationPolicyGroup;
	id<IAMApplicationContextProvider> _applicationContext;
	NSArray* _passingMessageEntries;
	NSArray* _messagesCloseToPassing;

}

@property (retain) NSArray * passingMessageEntries;               //@synthesize passingMessageEntries=_passingMessageEntries - In the implementation block
@property (retain) NSArray * messagesCloseToPassing;              //@synthesize messagesCloseToPassing=_messagesCloseToPassing - In the implementation block
+(long long)_compareCurrentTimeWithMessageTime:(double)arg1 ;
+(BOOL)_isMessageWithinDateRange:(id)arg1 ;
+(BOOL)applicationContext:(id)arg1 allowsPresentationForPolicyGroup:(long long)arg2 withLastDisplayTime:(id)arg3 ;
-(id)initWithMessageEntries:(id)arg1 metadataEntries:(id)arg2 applicationContext:(id)arg3 lastDisplayTimeForRestrictedPresentationPolicyGroup:(id)arg4 lastDisplayTimeForNormalPresentationPolicyGroup:(id)arg5 ;
-(id)computeMessagesCloseToPassingWithProximityThreshold:(unsigned long long)arg1 ;
-(id)computePassingMessageEntries;
-(BOOL)_evaluateRule:(id)arg1 ;
-(BOOL)_didCacheResourcesForMessageIfRequired:(id)arg1 ;
-(BOOL)_doesPresentationPolicyAllowPresentationOfMessage:(id)arg1 ;
-(void)setPassingMessageEntries:(NSArray *)arg1 ;
-(NSArray *)passingMessageEntries;
-(unsigned long long)_messageEntryProximity:(id)arg1 ;
-(void)setMessagesCloseToPassing:(NSArray *)arg1 ;
-(NSArray *)messagesCloseToPassing;
-(BOOL)_evaluateCondition:(id)arg1 ;
-(BOOL)_evaluateCompoundRule:(id)arg1 ;
-(unsigned long long)_calculateRuleProximity:(id)arg1 ;
-(unsigned long long)_calculateConditionProximity:(id)arg1 ;
-(unsigned long long)_calculateCompoundRuleProximity:(id)arg1 ;
@end

