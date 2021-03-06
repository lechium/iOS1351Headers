/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TIKeyboardBehaviorState : NSObject {

	BOOL hasInput;
	BOOL hasCandidates;
	BOOL hasCandidateSelected;
	BOOL hasNextPage;
	BOOL showsExtendedList;
	BOOL followsZhuyin;
	BOOL spaceConfirmation;
	BOOL hardwareKeyboardMode;
	BOOL followsIncompleteRomaji;
	BOOL _hasAutocorrection;
	BOOL _userSelectedCurrentCandidate;
	BOOL _showsCandidatesInLayout;

}

@property (assign,nonatomic) BOOL hasInput; 
@property (assign,nonatomic) BOOL hasAutocorrection;                         //@synthesize hasAutocorrection=_hasAutocorrection - In the implementation block
@property (assign,nonatomic) BOOL hasCandidates; 
@property (assign,nonatomic) BOOL hasCandidateSelected; 
@property (assign,nonatomic) BOOL userSelectedCurrentCandidate;              //@synthesize userSelectedCurrentCandidate=_userSelectedCurrentCandidate - In the implementation block
@property (assign,nonatomic) BOOL hasNextPage; 
@property (assign,nonatomic) BOOL showsExtendedList; 
@property (assign,nonatomic) BOOL followsZhuyin; 
@property (assign,nonatomic) BOOL spaceConfirmation; 
@property (assign,nonatomic) BOOL showsCandidatesInLayout;                   //@synthesize showsCandidatesInLayout=_showsCandidatesInLayout - In the implementation block
@property (assign,nonatomic) BOOL hardwareKeyboardMode; 
@property (assign,nonatomic) BOOL followsIncompleteRomaji; 
-(BOOL)hasCandidates;
-(BOOL)hasAutocorrection;
-(void)setHardwareKeyboardMode:(BOOL)arg1 ;
-(BOOL)hardwareKeyboardMode;
-(void)setUserSelectedCurrentCandidate:(BOOL)arg1 ;
-(BOOL)userSelectedCurrentCandidate;
-(void)setHasInput:(BOOL)arg1 ;
-(void)setHasAutocorrection:(BOOL)arg1 ;
-(void)setHasCandidates:(BOOL)arg1 ;
-(void)setHasCandidateSelected:(BOOL)arg1 ;
-(void)setHasNextPage:(BOOL)arg1 ;
-(void)setShowsExtendedList:(BOOL)arg1 ;
-(void)setShowsCandidatesInLayout:(BOOL)arg1 ;
-(void)setFollowsZhuyin:(BOOL)arg1 ;
-(BOOL)followsIncompleteRomaji;
-(void)setFollowsIncompleteRomaji:(BOOL)arg1 ;
-(void)setSpaceConfirmation:(BOOL)arg1 ;
-(BOOL)hasInput;
-(BOOL)hasCandidateSelected;
-(BOOL)hasNextPage;
-(BOOL)showsExtendedList;
-(BOOL)followsZhuyin;
-(BOOL)spaceConfirmation;
-(BOOL)showsCandidatesInLayout;
@end

