/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BSCompoundAssertion, NSSet;

@interface BKSMousePointerPerDisplayInfo : NSObject {

	BSCompoundAssertion* _pointerSuppressionAssertion;
	BSCompoundAssertion* _globalEventsAssertion;
	NSSet* _previouslyRoutedContextIDs;

}

@property (nonatomic,retain) BSCompoundAssertion * pointerSuppressionAssertion;              //@synthesize pointerSuppressionAssertion=_pointerSuppressionAssertion - In the implementation block
@property (nonatomic,retain) BSCompoundAssertion * globalEventsAssertion;                    //@synthesize globalEventsAssertion=_globalEventsAssertion - In the implementation block
@property (nonatomic,retain) NSSet * previouslyRoutedContextIDs;                             //@synthesize previouslyRoutedContextIDs=_previouslyRoutedContextIDs - In the implementation block
-(BSCompoundAssertion *)pointerSuppressionAssertion;
-(void)setPointerSuppressionAssertion:(BSCompoundAssertion *)arg1 ;
-(BSCompoundAssertion *)globalEventsAssertion;
-(void)setGlobalEventsAssertion:(BSCompoundAssertion *)arg1 ;
-(NSSet *)previouslyRoutedContextIDs;
-(void)setPreviouslyRoutedContextIDs:(NSSet *)arg1 ;
@end

