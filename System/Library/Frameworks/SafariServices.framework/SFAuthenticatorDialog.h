/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariServices/_SFDialog.h>
#import <libobjc.A.dylib/_SFAuthenticatorDialog.h>

@class NSString, _SFDialogView, NSArray;

@interface SFAuthenticatorDialog : _SFDialog <_SFAuthenticatorDialog> {

	_SFDialogView* _dialogView;
	NSString* _relyingPartyID;
	NSString* _title;
	NSString* _message;
	/*^block*/id _completionHandler;
	NSArray* _actions;

}

@property (nonatomic,retain) NSString * relyingPartyID;              //@synthesize relyingPartyID=_relyingPartyID - In the implementation block
@property (nonatomic,retain) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                     //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) id completionHandler;                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSArray * actions;                      //@synthesize actions=_actions - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSArray *)actions;
-(long long)presentationStyle;
-(void)setActions:(NSArray *)arg1 ;
-(NSString *)relyingPartyID;
-(void)transitionToState:(int)arg1 forPanel:(id)arg2 ;
-(void)didCompleteWithResponse:(id)arg1 ;
-(id)initWithPanel:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newDialogViewRepresentation;
-(void)setRelyingPartyID:(NSString *)arg1 ;
-(void)_shake;
@end
