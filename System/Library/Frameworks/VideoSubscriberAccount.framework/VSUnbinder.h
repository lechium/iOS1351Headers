/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMapTable;

@interface VSUnbinder : NSObject {

	BOOL _invalid;
	NSMapTable* _bindingsByBinder;

}

@property (assign,getter=isInvalid,nonatomic) BOOL invalid;              //@synthesize invalid=_invalid - In the implementation block
@property (nonatomic,retain) NSMapTable * bindingsByBinder;              //@synthesize bindingsByBinder=_bindingsByBinder - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isInvalid;
-(void)setInvalid:(BOOL)arg1 ;
-(NSMapTable *)bindingsByBinder;
-(void)binder:(id)arg1 didEstablishBinding:(id)arg2 ;
-(void)binder:(id)arg1 didTearDownBinding:(id)arg2 ;
-(void)setBindingsByBinder:(NSMapTable *)arg1 ;
@end
