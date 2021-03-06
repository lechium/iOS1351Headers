/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/TextInput/TextInput_hi.bundle/TextInput_hi
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput_hi/TextInput_hi-Structs.h>
#import <TextInput_hi/TIKeyboardInputManager_hi.h>

@class NSArray, NSMutableDictionary, NSMutableArray;

@interface TIKeyboardInputManager_hi_Transliteration : TIKeyboardInputManager_hi {

	BOOL _prioritizeLatinCandidates;
	BOOL _hasCandidates;
	void* _transliterator;
	NSArray* _currentCandidates;
	NSMutableDictionary* _candidateRefsDictionary;
	NSMutableArray* _committedCandidates;

}

@property (assign,nonatomic) void* transliterator;                                       //@synthesize transliterator=_transliterator - In the implementation block
@property (assign,nonatomic) BOOL prioritizeLatinCandidates;                             //@synthesize prioritizeLatinCandidates=_prioritizeLatinCandidates - In the implementation block
@property (assign,nonatomic) BOOL hasCandidates;                                         //@synthesize hasCandidates=_hasCandidates - In the implementation block
@property (nonatomic,retain) NSArray * currentCandidates;                                //@synthesize currentCandidates=_currentCandidates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * candidateRefsDictionary;              //@synthesize candidateRefsDictionary=_candidateRefsDictionary - In the implementation block
@property (nonatomic,retain) NSMutableArray * committedCandidates;                       //@synthesize committedCandidates=_committedCandidates - In the implementation block
-(void)dealloc;
-(void)suspend;
-(BOOL)hasCandidates;
-(id)candidates;
-(id)keyboardBehaviors;
-(BOOL)supportsNumberKeySelection;
-(BOOL)usesCandidateSelection;
-(id)keyEventMap;
-(id)defaultCandidate;
-(void)setHasCandidates:(BOOL)arg1 ;
-(id)keyboardConfiguration;
-(id)wordCharacters;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 ;
-(id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(void)deleteFromInputWithContext:(id)arg1 ;
-(id)dictionaryInputMode;
-(TIInputManager*)initImplementation;
-(id)titleForSortingMethod:(id)arg1 ;
-(id)sortingMethods;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 ;
-(NSMutableDictionary *)candidateRefsDictionary;
-(NSMutableArray *)committedCandidates;
-(void)setCandidateRefsDictionary:(NSMutableDictionary *)arg1 ;
-(void)setCommittedCandidates:(NSMutableArray *)arg1 ;
-(NSArray *)currentCandidates;
-(void)setPrioritizeLatinCandidates:(BOOL)arg1 ;
-(id)autocorrectionCandidates;
-(id)_generateTIKeyboardCandidatesFromInputStrings:(id)arg1 ignoreExtensionCandidates:(BOOL)arg2 ;
-(void)setCurrentCandidates:(NSArray *)arg1 ;
-(void*)transliterator;
-(id)candidateContextByVerifyingAgainstDocumentState;
-(BOOL)prioritizeLatinCandidates;
-(void)setTransliterator:(void*)arg1 ;
@end

