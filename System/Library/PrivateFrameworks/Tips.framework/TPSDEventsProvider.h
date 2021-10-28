/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TPSEventsProviderDelegate;
@interface TPSDEventsProvider : NSObject {

	id<TPSEventsProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TPSEventsProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<TPSEventsProviderDelegate>)delegate;
-(void)setDelegate:(id<TPSEventsProviderDelegate>)arg1 ;
-(void)queryEvents:(id)arg1 ;
-(void)registerEventsForCallback:(id)arg1 ;
-(void)registerEventsForWakingCallback:(id)arg1 clientIdentifier:(id)arg2 ;
-(void)deregisterEventsForCallback:(id)arg1 ;
@end
