/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFParameter.h>

@class NSArray;

@interface WFEnumerationParameter : WFParameter {

	BOOL _alwaysShowsButton;
	NSArray* _staticPossibleStates;
	NSArray* _displayNames;

}

@property (nonatomic,readonly) NSArray * staticPossibleStates;                       //@synthesize staticPossibleStates=_staticPossibleStates - In the implementation block
@property (nonatomic,readonly) NSArray * displayNames;                               //@synthesize displayNames=_displayNames - In the implementation block
@property (nonatomic,readonly) BOOL preferItemPickerSheet; 
@property (nonatomic,readonly) NSArray * possibleStatesForLocalization; 
@property (nonatomic,readonly) BOOL alwaysShowsButton;                               //@synthesize alwaysShowsButton=_alwaysShowsButton - In the implementation block
@property (nonatomic,readonly) NSArray * possibleStates; 
@property (nonatomic,readonly) BOOL hidesAccessoryIconInEditor; 
-(id)initWithDefinition:(id)arg1 ;
-(NSArray *)possibleStates;
-(NSArray *)displayNames;
-(Class)singleStateClass;
-(NSArray *)possibleStatesForLocalization;
-(id)localizedTitleForButtonWithState:(id)arg1 ;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)localizedLabelForPossibleState:(id)arg1 inMultipleState:(id)arg2 ;
-(id)localizedLabelForMultipleState:(id)arg1 ;
-(id)localizedLabelForMultipleCompleteState:(id)arg1 ;
-(id)localizedSubtitleLabelForPossibleState:(id)arg1 ;
-(id)accessoryColorForPossibleState:(id)arg1 ;
-(id)accessoryIconForPossibleState:(id)arg1 ;
-(BOOL)hidesAccessoryIconInEditor;
-(BOOL)preferItemPickerSheet;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(void)possibleStatesDidChange;
-(void)startUpdatingPossibleValues;
-(void)stopUpdatingPossibleValues;
-(BOOL)alwaysShowsButton;
-(NSArray *)staticPossibleStates;
@end
