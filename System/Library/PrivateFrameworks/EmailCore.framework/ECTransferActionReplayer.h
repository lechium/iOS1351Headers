/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmailCore/ECLocalActionReplayer.h>

@interface ECTransferActionReplayer : ECLocalActionReplayer
-(id)replayAction;
-(id)failActionWithError:(id)arg1 ;
-(id)_downLoadSourceMessagesInAction:(id)arg1 ;
-(id)_appendMessagesInAction:(id)arg1 ;
-(id)_transferItemsInAction:(id)arg1 isMove:(BOOL)arg2 ;
-(id)_deleteItemsInAction:(id)arg1 ;
-(id)_allCopyItemsBySourceRemoteIDsForAction:(id)arg1 failedItems:(id*)arg2 ;
@end
