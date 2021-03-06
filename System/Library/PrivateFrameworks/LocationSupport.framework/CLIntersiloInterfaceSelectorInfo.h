/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMethodSignature, NSString;

@interface CLIntersiloInterfaceSelectorInfo : NSObject {

	int _replyBlockIndex;
	int _returnAddressIndex;
	SEL _sel;
	NSMethodSignature* _sig;

}

@property (nonatomic,readonly) SEL sel;                                     //@synthesize sel=_sel - In the implementation block
@property (nonatomic,readonly) int replyBlockIndex;                         //@synthesize replyBlockIndex=_replyBlockIndex - In the implementation block
@property (nonatomic,readonly) int returnAddressIndex;                      //@synthesize returnAddressIndex=_returnAddressIndex - In the implementation block
@property (nonatomic,retain,readonly) NSMethodSignature * sig;              //@synthesize sig=_sig - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeStr; 
-(id)description;
-(SEL)sel;
-(id)initWithSelector:(SEL)arg1 andMethodSignature:(id)arg2 ;
-(NSString *)typeStr;
-(int)replyBlockIndex;
-(int)returnAddressIndex;
-(NSMethodSignature *)sig;
@end

