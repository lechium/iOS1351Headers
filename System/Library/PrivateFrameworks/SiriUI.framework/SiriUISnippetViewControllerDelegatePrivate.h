/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SiriUISnippetViewControllerDelegatePrivate <NSObject>
@required
-(void)siriSnippetViewController:(id)arg1 willPresentViewController:(id)arg2;
-(void)siriSnippetViewController:(id)arg1 willDismissViewController:(id)arg2;
-(BOOL)siriViewControllerShouldPreventUserInteraction:(id)arg1;
-(void)siriViewControllerWillBeginEditing:(id)arg1;
-(void)siriViewControllerDidEndEditing:(id)arg1;
-(void)siriViewController:(id)arg1 startCorrectedSpeechRequestWithText:(id)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(id)arg4;
-(void)siriViewControllerRequestTearDownEditingViewController:(id)arg1;
-(id)localeForSiriViewController:(id)arg1;
-(void)siriSnippetViewController:(id)arg1 didPresentViewController:(id)arg2;
-(void)siriSnippetViewController:(id)arg1 didDismissViewController:(id)arg2;
-(void)siriViewController:(id)arg1 speakText:(id)arg2 completion:(/*^block*/id)arg3;
-(void)siriSnippetViewController:(id)arg1 didRequestKeyboardWithVisibility:(BOOL)arg2;
-(void)cancelSpeakingForSiriViewController:(id)arg1;
-(void)removeSiriViewController:(id)arg1;

@end
