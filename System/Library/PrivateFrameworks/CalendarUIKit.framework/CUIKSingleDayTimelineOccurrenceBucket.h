/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CUIKSingleDayTimelineViewItem, CUIKSingleDayTimelineLayoutScreenUtils, CUIKSingleDayTimelineGeometryDelegate;
@class CUIKSingleDayTimelineLayoutPartition, NSMutableArray, NSArray;

@interface CUIKSingleDayTimelineOccurrenceBucket : NSObject {

	id<CUIKSingleDayTimelineViewItem> _temporaryOccurrenceAtBeginning;
	id<CUIKSingleDayTimelineViewItem> _temporaryOccurrenceAtEnd;
	id<CUIKSingleDayTimelineLayoutScreenUtils> _screenUtilsDelegate;
	BOOL _useTemporaryFitnessLevel;
	BOOL _temporaryFitnessLevelRequiresCalculation;
	double _temporaryFitnessLevel;
	BOOL _originalFitnessLevelRequiresCalculation;
	double _originalFitnessLevel;
	BOOL _ignoreFirstOccurrenceInFitnessCalculations;
	BOOL _ignoreLastOccurrenceInFitnessCalculations;
	BOOL _isOnlyBucket;
	CUIKSingleDayTimelineLayoutPartition* _correspondingPartition;
	id<CUIKSingleDayTimelineGeometryDelegate> _geometryDelegate;
	NSMutableArray* _currentOccurrences;

}

@property (nonatomic,retain) CUIKSingleDayTimelineLayoutPartition * correspondingPartition;              //@synthesize correspondingPartition=_correspondingPartition - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentOccurrences;                                        //@synthesize currentOccurrences=_currentOccurrences - In the implementation block
@property (nonatomic,readonly) NSArray * occurrences; 
@property (assign,nonatomic) BOOL isOnlyBucket;                                                          //@synthesize isOnlyBucket=_isOnlyBucket - In the implementation block
@property (__weak) id<CUIKSingleDayTimelineGeometryDelegate> geometryDelegate;                           //@synthesize geometryDelegate=_geometryDelegate - In the implementation block
-(id<CUIKSingleDayTimelineGeometryDelegate>)geometryDelegate;
-(void)setGeometryDelegate:(id<CUIKSingleDayTimelineGeometryDelegate>)arg1 ;
-(NSArray *)occurrences;
-(CUIKSingleDayTimelineLayoutPartition *)correspondingPartition;
-(id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2 screenUtilsDelegate:(id)arg3 geometryDelegate:(id)arg4 ;
-(void)addOccurrenceTemporarilyToEnd:(id)arg1 ;
-(void)makeTemporaryChangesPermanent;
-(void)setIsOnlyBucket:(BOOL)arg1 ;
-(void)stampFramesOntoOccurrences;
-(id)earliestOccurrence;
-(id)_occurrencesForFitnessLevel;
-(BOOL)isOnlyBucket;
-(id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2 screenUtilsDelegate:(id)arg3 ;
-(void)addOccurrenceTemporarilyToBeginning:(id)arg1 ;
-(void)removeOccurrenceAtBeginningTemporarily;
-(void)removeOccurrenceAtEndTemporarily;
-(void)revertTemporaryChanges;
-(void)setCorrespondingPartition:(CUIKSingleDayTimelineLayoutPartition *)arg1 ;
-(NSMutableArray *)currentOccurrences;
-(void)setCurrentOccurrences:(NSMutableArray *)arg1 ;
@end

