/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIAlertAction.h>

@interface BEAlertAction : UIAlertAction {

	long long _tag;
	/*^block*/id _actionHandler;

}

@property (assign,nonatomic) long long tag;               //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy) id actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
-(long long)tag;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
-(void)setTag:(long long)arg1 ;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 tag:(long long)arg3 action:(/*^block*/id)arg4 ;
-(void)doActionHandler;
@end

