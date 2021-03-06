/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MSTriageActionDelegate;
@class MSMessageListItemSelection, EMMessageRepository;

@interface MSTriageAction : NSObject {

	id<MSTriageActionDelegate> _delegate;
	MSMessageListItemSelection* _messageListItemSelection;

}

@property (nonatomic,readonly) MSMessageListItemSelection * messageListItemSelection;              //@synthesize messageListItemSelection=_messageListItemSelection - In the implementation block
@property (nonatomic,readonly) EMMessageRepository * messageRepository; 
@property (nonatomic,__weak,readonly) id<MSTriageActionDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
+(id)log;
+(void)_performAction:(id)arg1 messageRepository:(id)arg2 undoManager:(id)arg3 actionName:(id)arg4 ;
-(id<MSTriageActionDelegate>)delegate;
-(EMMessageRepository *)messageRepository;
-(id)_changeAction;
-(MSMessageListItemSelection *)messageListItemSelection;
-(void)performWithUndoManager:(id)arg1 actionName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2 ;
@end

