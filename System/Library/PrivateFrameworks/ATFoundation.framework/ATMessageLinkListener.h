/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ATMessageLinkListenerDelegate;
@interface ATMessageLinkListener : NSObject {

	id<ATMessageLinkListenerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ATMessageLinkListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ATMessageLinkListenerDelegate>)delegate;
-(void)setDelegate:(id<ATMessageLinkListenerDelegate>)arg1 ;
-(void)stop;
-(BOOL)start;
@end

